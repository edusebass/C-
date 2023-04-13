#include <iostream>

using namespace std;

int main()
{
	int tipo_motor;
	
	cout << "Ingrese el valor del tipo de motor: ";
	cin >> tipo_motor;
	
	if (tipo_motor == 0){
		cout << "No hay establecido un valor definido para el tipo de bomba";
	}
	
	if (tipo_motor == 1){
		cout << "La bomba es una bomba de agua";
	}
	
	if (tipo_motor == 2){
		cout << "La bomba es una bomba de gasolina";
	}
		
	if (tipo_motor == 3){
		cout << "La bomba es una bomba de hormigón";
	}

	if (tipo_motor == 4){
		cout << "La bomba es una bomba de pasta alimenticia";
	}
	
	if (tipo_motor > 4){	
		cout << "No existe un valor valido para tipo de bomba";
	}
	
	return 0;
}