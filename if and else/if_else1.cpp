//ingresar un valor que muestre si es negativo positivo o neutro
#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{
	int valor;
	
	cout << "Ingrese el valor: ";
	cin >> valor;
	
	if (valor > 0)
	cout << "El valor es positvo";
	else if (valor == 0)
	cout << "El valor no es ni negativo ni positivo";
	else 
	cout << "El valor es negativo";

//Ejercicio solo con if  
/*	{
	int valor;
	
	cout << "Ingrese el valor: ";
	cin >> valor;
	
	if (valor > 0)
		{
		cout << "El valor es positvo";
		}
	
	if (valor == 0)
		{
		cout << "El valor no es ni negativo ni positivo";
		}
		
	if (valor < 0) 
		{
		cout << "El valor es negativo";
		}
  */
}