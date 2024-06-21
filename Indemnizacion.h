#include<iostream>
#include <wchar.h>
using namespace std;

void indemnizacio(){
	float indemnizacion;
	float salario;
	long int diasTrabajados;
	int resultado_dias,resultado_meses,resultado_anios;	
	int diaIng,mesIng,anioIng; //fechla ingreso
	int diaRet,mesRet,anioRet; //fechla ingreso
	
	cout<<"\n\n Fecha de ingreso a al compañia";
	cout<<"\n año: ";cin>>anioIng;
	cout<<"\n mes: ";cin>>mesIng;
	cout<<"\n dia: ";cin>>diaIng;
	
	cout<<"\n\n Fecha de retiro de al compañia";
	cout<<"\n año: ";cin>>anioRet;
	cout<<"\n mes: ";cin>>mesRet;
	cout<<"\n dia: ";cin>>diaRet;
	system("cls"); //limpiar consola
	cout<<"\n\n Ingrea tu salario: ";
	cin>>salario;
	system("cls"); //limpiar consola
	if(diaRet < diaIng){
		diaRet += 30;
		mesRet -= 1;
		resultado_dias =diaRet - diaIng;	
	}
	else{
		resultado_dias = diaRet - diaIng;
	}
	
	if(mesRet < mesIng){
		
		mesRet += 12;
		anioRet -= 1;
		resultado_meses = mesRet - mesIng;
	}
	else{
		
		resultado_meses = mesRet - mesIng;
	}
	
	resultado_anios = anioRet - anioIng;
	
	diasTrabajados =( resultado_dias + (resultado_meses*30) + (resultado_anios*365));
	
	indemnizacion = (diasTrabajados*salario)/(365);
	cout<<"\n\n Dias trabajados: "<<diasTrabajados<<endl;
	
	cout<<"\n\nEl pago por indemnizacion es: "<<"$ "<<indemnizacion<<"\n\n";
}
