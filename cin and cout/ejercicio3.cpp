//Ingresar 4 valores enteros, el primer valor ingresado multiplicamos para 2, el segundo  ingreso le sumamos con el cuarto ingreso y el tercer ingreso le
//sumamos con la edad actual

#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,e,w,x, y;
	
	cout << "Ingrese el primer valor: ";
	cin >> a;
	
	cout << "Ingrese el segundo valor: ";
	cin >> b;
	
	cout << "Ingrese el tercer valor: ";
	cin >> c;
	
	cout << "Ingrese el tercer valor: ";
	cin >> d;
	
	cout << "Ingrese su edad actual: ";
	cin >> e;

	w = a * 2;
	x = b + d;
	y = c + e;
	
	cout << "Primera operacion: " << w << "\n";
	cout << "Segunda operacion: " << x << "\n";
	cout << "Tercera operacion: " << y << "\n";	
	
	
}
