#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	//	EJERCICIO 1
	//1. Crear un vector de 5 elementos de cadena -carácter
	//2. Ingresar caracteres
	cout << "EJERCICIO 1" << endl;
	string A[50], B[50];

	
	for (int i = 0; i < 5; i++){
	      cout << "Digite el caracter [" << i << "]: ";
	      cin >> A[i];
	}
	for(int i = 0; i < 5; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	//3. Copia los elementos del vector a otro vector, PERO en orden inverso muestra en
	//pantalla
	for(int i = 0; i < 5; i++){
		B[i] = A[i];
	}
	cout << "EL VECTOR IMPRESO AL REVES: " << endl;	
	for(int i = 5; i >= 0; i--){
		cout << B[i] << " ";
	}
	
	cout << endl;
	//EJERCICIO 2
	//Se debe ingresar notas y nombres de 10 estudiantes, mostrar el estudiante y sus nota
	//y la media de ella además la nota más baja y nota más alta, 
	string nombres[10];
	int notas[10];
	int i, menor, mayor, promedio;
	cout << "EJERCICIO 2" << endl;
	for(i = 0; i < 10; i++){
		cout << "Ingrese el nombre del estudiante["<< i <<"]: " << endl;
		cin >> nombres[i];
		cout << "Ingrese la nota del estudiante["<< i <<"]: " << endl;
		cin >> notas[i];
	}
	for(i = 0; i < 10; i++){
		cout << ">>>>>>>>>>>>>>>>>>>>>>" << endl;
		cout << "Estudiante: " << nombres[i] << endl;
		cout << "Tiene la nota: " << notas[i] << endl;
	}
	menor = notas[0];
	mayor = notas[0];
	int suma = 0;
	for(i = 0; i < 10; i ++){
		suma += notas[i];
		if(notas[i] < menor){
			menor = notas[i];
		}
		if(notas[i] > mayor){
			mayor = notas[i];
		}
	}
	promedio = suma / 10;
	cout << endl;
	cout << "El promedio es: " << promedio << endl;
	cout << "La mayor nota es : " << mayor << endl;
	cout << "La menor nota es : " << menor << endl;
	
	cout << endl;
	
//	EJERCICIO 3
//	Ingresar la dimensión de un vector y llenarlo, se debe mostrar la los valores ingresado de
//	menor a mayor.
	int C[50];
	int f1, aux;
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> f1;

	//crea el arreglo
	for (int i = 0; i < f1; i++){
		cout << "Digite el numero de la posicion: [" << i << "]: ";
		cin >> C[i];
	}
	cout << "Menor a mayor" << endl;
	cout << endl;
	for( int i = 0; i < f1; i ++){
		for(int j=i + 1; j < f1; j ++){
			if(C[i] > C[j]){ 
				aux = C[i];
				C[i] = C[j];
				C[j] = aux;
			}
		}
	}
	for(int i = 0; i < f1; i++){
		cout << C[i] << " ";
	}
	
}
