#include <iostream>
using namespace std;


void horaNocturna(){ //horas nocturnas
	
	int horas;
	float salario,pagoHoras,TotalPagar;
	
	cout<<"\n\n Digita su salario: "; cin>>salario;
	cout<<"\n\n Digita el numero de horas trabajadas: "; cin>>horas;
	
	
	salario /= 30;
	salario /= 8;
	
	pagoHoras = salario * 0.25;
	salario += pagoHoras;
	
	TotalPagar = (salario*horas)*2;
	
	cout<<"\n\n El pago por horas nocturnas es de: $ "<<salario;
	cout<<"\n\n El total apagar por "<<horas<< " horas de trabajo es de: $ "<<TotalPagar<<"\n\n";
}


void HorasFeriados(){
	int hora,horasExtras;
	float salario,TotalPagar,salario_diario;
	
	cout<<"\n\n Digita el numero de horas trabajadas: ";
	cin>>hora;
	cout<<"\n\n Digita su salario: ";
	cin>>salario;
	
	salario_diario = salario/30;
	salario_diario /=8;
	
	TotalPagar = (salario_diario * 4)*hora;
	
	
	cout<<"\n\n Numero de horas extrabajadas: "<<hora;
	cout<<"\n\n Pago por la horas extras trabajadas: $ "<<TotalPagar;
	cout<<"\n\n El pago total sera de $ "<<TotalPagar+salario<<"\n\n";
}
