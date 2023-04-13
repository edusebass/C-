// CON SWITCH
// Ingresar valor, si el valor es menores a 10000,
// contar cuantas cifras tiene y si el número
// tiene un digito elevarlo al cuadrado y
// mostrar su resultado, por otro lado si el
// número es de dos dígitos multiplicarlo por
// dos y mostrar su resultado, si el número es
// de tres dígitos restarle cien y mostrar su
// resultado, finalmente si el número
// ingresado es cero o negativo, mostrar
// mensaje de error.
#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{
	int var, esp, ope;
	
	cout << "Ingresar un numero de hasta 4 cifras: ";
	cin >> var;
	if (var == 0 && var <= 0){
		cout << "Error, debido a que ingreso 0 o un numero negativo";
		exit;
	}
	
	cout << "Ingrese el numero de digitos que tiene su numero: ";
	cin >> esp;
	
	
	
	switch (esp){
	
	case 1 :
		ope = var * var;
		cout << "Se elevo al cuadrado, entonces ";
	
	
	case 2 :
		ope = var * 2;
		cout << "Se multiplicara por dos, entonces ";
		
	case 3 :
		ope = var - 100;
		cout << "Se resto 100 al numero, entonces ";
	}
	
	cout << "el resultado es: " << ope;
	
	return 0;
}