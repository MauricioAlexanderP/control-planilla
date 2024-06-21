#include<iostream>

using namespace std;

void TabladeRenta(){
	float salario;
	float totalRenta;
	
	cout<<"\n\n Ingresa tu salario: ";
	cin>>salario;
	
	system("cls"); //limpiar consola
	
	if(salario>=0.01 && salario <= 472.00){
		
		cout<<"\n\n Sin retencion"<<"\n\n";
	}
	else if(salario>=472.01 && salario<=895.24){
		
		totalRenta = (salario-472.00)*(0.1)+(17.67);
		cout<<"\n\n El impuesto sobres la renta es de: "<<"$ "<<totalRenta<<"\n\n";
	}
	else if(salario >= 895.25 && salario <= 2038.10){
		
		totalRenta = (salario-895.24)*(0.2)+(60.00);
		cout<<"\n\n El impuesto sobres la renta es de: "<<"$ "<<totalRenta<<"\n\n";
	}
	else if(salario >= 2038.11){
		
		totalRenta = (salario-2038.10)*(0.3)+(288.57);
		cout<<"\n\n El impuesto sobres la renta es de: "<<"$ "<<totalRenta<<"\n\n";
	}		
}
