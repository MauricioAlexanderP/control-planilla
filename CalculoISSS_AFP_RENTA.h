//Calculo de ISSS,AFP y Renta al 10%
#include <iostream>

using namespace std;

void calculos(){
	float salario;
	float Totalsalario,descuentoISSS,descuentoAFP,Renta;
	
	
	cout<<"\n\n Ingrese su salario: ";cin>>salario;
	
	
	descuentoISSS = salario*0.3;
	
	descuentoAFP = salario*0.0725;
	
	Renta = (salario*0.10);
	
	system("cls"); //limpiar consola
	
	cout<<"\n\n Tu salario es: "<<salario;
	cout<<"\n\n El descuento de ISSS es: "<<"$ "<<descuentoISSS;
	cout<<"\n\n El descuento de AFP es: "<<"$ "<<descuentoAFP;
	cout<<"\n\n El descuento sobre la renta es: "<<"$ "<<Renta<<"\n\n";
}


//calculo del isss
void CalculoISSS(){
	float salario;
	float totaldescuento;
	float totalrecivir;
	const float isss = 0.3;
	
	cout<<"\n\n Ingrese su salario: ";cin>>salario;
	
	totaldescuento = salario*isss;
	totalrecivir = salario-totaldescuento;
	
	system("cls"); //limpiar consola
	
	cout<<"\n\n El total del ISSS es: "<<"$ "<<totaldescuento;
	cout<<"\n\n El total a resivir es: "<<"$ "<<totalrecivir<<"\n\n";
}



//calculo de AFP
void AFP(){
	float salario;
	float totaldescuento; 
	float totalrecivir;
	float AFP = 0.0725;
	
	cout<<"\n\n Ingresa tu salario: ";cin>>salario;
	
	totaldescuento = salario*AFP;
	totalrecivir = salario-totaldescuento;
	system("cls"); //limpiar consola
	cout<<"\n\n El descuento de AFP es: "<<"$ "<<totaldescuento;
	cout<<"\n\n El total a resivir es: "<<"$ "<<totalrecivir<<"\n\n";
}



//Calculo de La Renta al 10%
void impuestorrenta(){
	float salario;
	float renta;
	float totaldescuento;
	cout<<"\n\n Ingrese tu salario: "; cin>>salario;
	
	renta = (salario*0.10);
	totaldescuento = (salario-renta);
	system("cls"); //limpiar consola
	cout<<"\n\n El descuenot sobre la renta es: "<<"$ "<<renta<<endl;
	cout<<"\n\n El total apager sera de: "<<"$ "<<totaldescuento<<"\n\n";
}
