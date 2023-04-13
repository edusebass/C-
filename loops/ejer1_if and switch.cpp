// Se realiza una venta de motores para bombas, teniendo
// variedades de los mismos.
// a) Si el tipo de motor es 0, mostrar un mensaje indicando “No
// hay establecido un valor definido para el tipo de bomba”.
// b) Si el tipo de motor es 1, mostrar un mensaje indicando “La
// bomba es una bomba de agua”.
// c) Si el tipo de motor es 2, mostrar un mensaje indicando “La
// bomba es una bomba de gasolina”.
// d) Si el tipo de motor es 3, mostrar un mensaje indicando “La
// bomba es una bomba de hormigón”.
// e) Si el tipo de motor es 4,mostrar un mensaje indicando “La
// bomba es una bomba de pasta alimenticia”.
// f) Si no se cumple ninguno de los valores anteriores mostrar el
// mensaje “No existe un valor válido para tipo de bomba”.

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
	}
	
	if (tipo_motor > 4 ){
		cout << "No existe un valor valido para tipo de bomba";
	}
	
	return 0;
}