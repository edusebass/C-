#include <iostream>
using namespace std;

void menu(); //inicio
void primo();//ejercicio 1
bool esPrimo(int numero); //ejercicio 1
void datomulti(); //ejercicio 2
void multi(int fin); // ejercicio 2
void datosmayor(); // ejercicio 3
void esmayor(int a, int b, int c); //ejercicio 3
void datoiva(); //ejercicio 4
void iva(float iv); //ejercicio 4

int opcion; // inicio
int final; // ejercicio 2
int m, n, l; // ejercicio 3
int sin_iva; // ejercicio 4


int main() {
	
	menu();
	
	cout << "Ingrese cual opcion desea realizar: ";
  	cin >> opcion;
  	
	switch(opcion) {
		case 1: //primer ejercicio
		primo();
		break;
		
		case 2: //segunda opcion
		datomulti();
		multi(final);
		break;
		
		case 3: // tercera opcion
		datosmayor();
		esmayor(m, n, l);
		break;
		
		case 4:
		datoiva();	
		iva(sin_iva);
		break;
	
		case 5: 
		break;
	}  
}

void menu() {
	cout << "PROGRAMA EJERCICIO TAREA 6 \nIngrese la funcion del programa que desea realizar: " << endl;
	cout << endl;
	cout << "1)Determinar si un numero es primo" << endl;
	cout << "2)Multiplos de 3" << endl;
	cout << "3)Numero mayor de tres numeros" << endl;
	cout << "4)Calcular el IVA (12%) de un numero" << endl;
	cout << "5)Salir" << endl;
}

void primo() { //ejercicio 1
	int numero;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Esta funcion devuelve 0 si el numero es primo y 1 si no es primo" << endl;
	cout << "Ingrese un numero: ";
	cin >> numero;
	if (esPrimo(numero)) {
		cout << "-------> 0 ";
	} else {
		cout << "-------> 1 ";
	}
}

bool esPrimo(int numero) { //ejercicio 1
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}

void datomulti() { //ejercicio 2
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Se mostrara los numeros multiplos de tres entre 1 y un numero final que usted ponga" << endl;
	cout << "Ingrese el numero final: ";
	cin >> final;	
}

void multi(int fin) { //ejercicio 2
	cout << endl;
	cout << "Se muestra los multiplos de tres desde el 1 hasta " << fin << endl;
	cout << endl;
		for( int i = 1; i <= fin; i++ ) {
	        if( i % 3 == 0 ) {
	            cout << i << " ";
	            }
		}
}

void datosmayor() { //ejercicio 3
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Se le pedira tres numeros al usuario y determinaremos cual de ellos es el mayor. \n" << endl;
	cout << "Ingrese tres digitos: " << endl;
	cin >> m >> n >> l;
} 
void esmayor(int a, int b, int c) { // ejercicio 3
	if(a > b && a > c){
    cout << "El numero mayor es: " << a;
    }
    if(b > c && b > a){
    cout << "El numero mayor es: "<< b;        
    }
    if(c > b && c > a){
    cout << endl << "El numero mayor es: " << c;        
    }
}

void datoiva() { //ejercicio 4
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Se le pedira un numero y se le mostrara el valor con IVA del mismo. \n" << endl;
	cout << "Ingrese un numero: ";
	cin >> sin_iva;
}
void iva(float iv) { //ejercicio 4
	iv = iv + (iv * 0.12);
	cout << endl << "El valor de su numero con iva del 12% es: " << iv;
}
