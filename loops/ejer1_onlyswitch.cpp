#include <iostream>

using namespace std;

int main()
{
	int tipo_motor;
	
	cout << "Ingrese el valor del tipo de motor: ";
	cin >> tipo_motor;
	
	switch (tipo_motor){
		case 0: cout << "No hay establecido un valor definido para el tipo de bomba";
		break;
	
		case 1: cout << "La bomba es una bomba de agua";
		break;
		
		case 2: cout << "La bomba es una bomba de gasolina";
		break;
		
		case 3: cout << "La bomba es una bomba de hormigón";
		break;
		
		case 4: cout << "La bomba es una bomba de pasta alimenticia";
		break;
		
		default: cout << "No existe un valor valido para tipo de bomba";
		break;
	}
	
	return 0;
}