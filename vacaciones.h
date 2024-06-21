#include <iostream>
using namespace std;

void vacaciones(){
	float salario,valor,diasv,salariomedio,bonov;
	
	cout<<"\n\n Digite su salario base:";
	cin>>salario;
	cout<<"\n\n Digite los dias de vacacion:";
	cin>>diasv;
	
	system("cls");
	
	salariomedio=salario/2;
	valor = salariomedio*0.30;
	
	bonov=salariomedio + valor;
	
	cout<<"\n\n El bono por bacaciones es de: $"<<valor;
	cout<<"\n\n El pago incluido vacaciones es de : $"<<bonov<<"\n\n";
	
	
}
