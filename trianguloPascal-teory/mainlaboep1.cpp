
	//Tipos de datos
	/*float
	int
	double
	char
	string
	bool
	long
	*/
	
	//Modificadores de datos
	/*
	short
	long
	signed
	unsigned
	
	
	//literal 5
	int v = 56576;
	cout << sizeof v << endl;
	
	//literal 6
	int y;
	
	//literal 7
	int y; // sin asignación 
	int x = 23; // con asignación
	
	//literal 8 y 9
	*/
	
//PARTE 2 y siguiente
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    
    cout <<"Ingrese primer valor: ";
    cin >> a;

	cout <<"Ingrese segundo valor: ";
    cin >> b;
    
	    
	cout <<"Ingrese tercer valor: ";
    cin >> c;    
    
       	    
    e = sqrt(b) * (a + b) - (9 / c);
    f = sqrt(b) * a + b -  9 / c;
    
    cout <<  "\n" << endl;
    cout << "Valor con parentesis: " << e << endl;
	cout << "Valor sin parentesis: " << f << endl;
}