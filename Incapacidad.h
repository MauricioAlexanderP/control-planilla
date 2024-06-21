#include <iostream>
using namespace std;

void incapacidad() {
	
	int incapa, dato = 3;
	
	float empleado,salario,totalsalario,incasalario;
	
	cout<<"\n\n Escriba su salario: ";
	cin>>salario;//Pide el salario
	

	if (incapa = dato) {
		totalsalario = incapa * 0.75;
	    incasalario = salario * 0.25;
		cout<<"\n\n El total salario a pagar al empleado: $ "<<totalsalario;
		cout<<"\n\n El total salario a pagar al ISSS: $ "<<incasalario<<"\n\n";
		//Se debe a que el ISSS le descuentan el 25% del salario de un empleado
	}
	
	else if (incapa =2) {
	    cout<<"\n\n El total salario a pagar al empleado: $ ";
		cout<<"\n\n El total salario a pagar al ISSS: $ ";
		//Se debe a que el ISSS  no le descuentan el 25%, porque no es un caso grave de enfermedad
	}

}
