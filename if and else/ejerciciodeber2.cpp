// 2. Ingresar un valor y verificar si el valor ingresado es:
// Par - impar
// Positivo - negativo o neutro.
// Múltiplo de 2,3,4 o 5

#include <iostream>
using namespace std;

int main()
{
    int var;
    cout<<"Ingrese un valor: ";
    cin >>var;
    
    if (var % 2 == 0){
        cout << "El numero es par\n";
    }
    else{
        cout << "El numero es impar\n";
    }
    
    if(var == 0){
        cout << "Es un numero neutro\n";
    }
    if(var < 0){
        cout << "El numero es negativo\n";
    }
    if(var > 0){
        cout << "El numero es positivo\n";
    }
    
    if(var % 2 == 0){
        cout << "El numero es multiplo de 2";
    }
    if(var % 3 == 0){
        cout << "El numero es multiplo de 3";
    }
    if(var % 4 == 0){
        cout << "El numero es multiplo de 4";
    }
    if(var % 5 == 0){
        cout << "El numero es multiplo de 5";
    }
    return 0;
}

//Ingresar numeros y que mencione si es positivo negativo con el for
#include "iostream"

using namespace std;
int main() 
{
	int i, j, a, b;
		
	for(int j = 1; j <= 5; j++ ) {
		cout << "Ingrese valores: " << endl;
		cin >> i;
			
		if(i % 2 == 0) {
	    	cout << "El numero es par\n";
	    }
	    else {
	    	cout << "El numero es impar\n";
	    }
		    
		if(i == 0) {
	        cout << "Es un numero neutro\n";
		}
		if(i < 0 ){
	        cout << "El numero es negativo\n";
	    }
	    if(i > 0) {
	        cout << "El numero es positivo\n";
		}    
	}
}

// Ejercicio que se imprima todo abajo luego de poner todo
#include "iostream"

using namespace std;
int main() 
{
	int i, j, a, b, c, d, e;
		
	for(int j = 1; j <= 5; j++ ) {
		cout << "Ingrese valores: " << endl;
		cin >> i;
	}
	
	if (j = 1) {
		a = i;
		}
		
	if (j = 2) {
		b = i;
	}
		
	if (j = 3) {
		c = i;
	}
		
	if (j = 4) {
		d = i;
	}
		
	if (j = 5) {
		e = i;
	}
	
	if (a % 2 == 0){
        cout << "El numero es par\n";
    }
    else{
        cout << "El numero es impar\n";
    }
    if(a < 0){
        cout << "El numero es negativo\n";
    }
    if(a > 0){
        cout << "El numero es positivo\n";
    }
}