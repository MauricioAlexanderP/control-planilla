//Program principal
/*Librerias estandar */
#include<iostream> 
#include <wchar.h>
#include <stdlib.h>
#include<string>
/*Llamada a las funciones*/
#include "menu.h" 
#include "CalculoISSS_AFP_RENTA.h"
#include "Tabla_de_Renta.h"
#include "vacaciones.h"
#include "Incapacidad.h"
#include "Indemnizacion.h"
#include "horasExtras.h"

/*********************************************************/

using namespace std;


int main(){
	setlocale(LC_ALL,""); //caracteres especiales
	
	system("COLOR E0"); //Estetica del programa
	
	/*declaraion de variables*/
	
    string usuario;    /*V.nombre de usuario*/
    int opcion,N_opcion,R_opcion,salida;   
    
	
	//Inicio del programa
	cout<<"\n\n\t\t\t\t\t\t*********SISTEMA DE PlANILLA**********\n\n";
	
	//Nombre de usuario
	cout<<"\t\t\t\tIngresa un nombre y un apellido: ";
	getline(cin,usuario); 
	system("cls"); //limpiar consola
	cout<<"\n\t\t\t\tBienvenido/a "<<usuario<<endl;
	
	system("pause");  //pausar programa
	system("cls");    //limpiar consola
	
	do{
		opcion=menu(N_opcion); /* Funcion menu de opciones*/
		system("cls");  //limpiar consola
	
		switch(opcion){ //selecionar opcion
		case 1: //Cal. de ISSS
			cout<<"\n\n\t\t\t"<<usuario<<" has escogido la opcion de Calculo del ISSS";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
			
			CalculoISSS();/*Yamada funcion CalculoISSS*/
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
	
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		case 2: //Cal. de AFP
			cout<<"\n\n\t\t\t"<<usuario<<" has escogido la opcion de Calculo de AFP";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
			
			AFP();  //Yamada funcion AFP
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		case 3://Cal. de renta (10%)
			cout<<"\n\n\t\t"<<usuario<<" has escogido la opcion de Calculo de la renta el 10%";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
			
			impuestorrenta();  //Yamada funcion impuestorrenta
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
	    case 4:
			cout<<"\n\n\t\t"<<usuario<<" has escogido la opcion de calculo de ISSS, AFP y calculo de la renta al 10% ";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
			
			calculos(); //calculo de AFP,ISSS,Renta
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
		case 5: //Cal. de la renta 
			cout<<"\n\n\t\t"<<usuario<<" has escogido la opcion de Calculo de la renta segun tabla de renta del pais";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
			
			TabladeRenta(); // Funcion tabla de renta
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		case 6: //Cal. de vacaciones
			cout<<"\n\n\t\t\t"<<usuario<<" has escogido la opcion de Calculo de vacaciones";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
			
			vacaciones(); // funcion vacaciones
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		case 7: //Cal. de indemnizacion
			cout<<"\n\n\t\t\t"<<usuario<<" has escogido la opcion de Calculo de indemnizacion";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
			
			indemnizacio(); //yamado a la funcion indemnizacion
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		case 8: //Cal. de incapacidad( +de 3 dias)
			cout<<"\n\n\t\t\t"<<usuario<<" has escogido la opcion de Calculo de incapacidad si es de mas de tres dias";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
		
			incapacidad(); //calculo de de incapacidad
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		case 9: //Cal. de h extras nocturnas
			cout<<"\n\n\t\t\t"<<usuario<<" has escogido la opcion de Horas extras nocturnas";
			cout<<"\n\n\t\t\tPorfavor ingresa los datos que se te piden acontinuacion";
		
			horaNocturna(); // funcion horas extras nocrunas
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		case 10: //Cal. de h extras feriados
			cout<<"\n\n\t\t\t"<<usuario<<" has escogido la opcion de Horas extras en feriados";
			
			HorasFeriados(); //horas extras en dias feriados
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			
		default: //si ninguna de las opciones es corecta
			cout<<"\t\t\t***ERROR!!!***\n";
			cout<<"\t\tLa opcion elegida no es correcta\n";
			
			system("\npause");  //pausar programa
			system("cls"); //limpiar consola
			
			R_opcion = menuSalida(salida); //Menu de salida
			
			system("cls"); //Limpiar consola
			break;
			system("pause");			
		}	
	} while(R_opcion == 1);
	
	cout<<"\n\n";
	system("pause");
	return 0;	
}	
