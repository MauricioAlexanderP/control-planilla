#include <iostream>

using namespace std;

int menu(int opcion){
	
	
	cout<<"\n \t\t\t\t*******Menu de opociones******* \n\n";
	cout<<"\t\t1-Calculo de ISSS.\n\n";
	cout<<"\t\t2-Calculo de AFP.\n\n";
	cout<<"\t\t3-Calculo de la renta el 10%.\n\n";
	cout<<"\t\t4-Calculo de las tres opciones anteriores.\n\n";
	cout<<"\t\t5-Calculo de la renta segun tabla de renta del pais.\n\n";
	cout<<"\t\t6-Calculo de vacaciones.\n\n";
	cout<<"\t\t7-Calculo de indenmizacion.\n\n";
	cout<<"\t\t8-Calculo de incapacidad si es de mas de tres dias.\n\n";
	cout<<"\t\t9-Horas extras nocturnas.\n\n";
	cout<<"\t\t10-Horas extras en feriados\n\n";
	cout<<"\t\tQue opcion escogeras: ";
	cin>>opcion;
	return opcion;	
}


int menuSalida(int R_opcion){
	cout<<"\n\n\t\t\tDeseal volver al menu principal";
	cout<<"\n\n\t\t\t1-Si";
	cout<<"\n\n\t\t\t2-No";
	cout<<"\n\n\t\t\tQue opcion escogeras: ";
	cin>>R_opcion;
	return R_opcion;
}




