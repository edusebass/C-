//Consultar ¿Qué es un arreglo en C++?
//Un arreglo es un conjunto o colección finita de datos de un mismo tipo. 
//Los elementos de un arreglo pueden ser accedidos por medio de un subíndice i. 
//Podemos considerar a un arreglo desde el punto de vista matemático como un vector, y a un arreglo bidimensional una matriz.

//Que tipos de arreglos hay?
//Los arreglos se pueden clasificar en 3 tipos distintos, 
//comenzaremos hablando del tipo abstracto de datos arreglos, 
//tanto de una (vectores), dos (matrices) o múltiples dimensiones.

//Como se declara un arreglo en C++?
//Escribe el tipo de dato que almacenará el arreglo.
//Escribe el nombre del arreglo.
//Entre corchetes, escribe la cantidad de elementos de ese tipo que se almacenarán.

#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int datos[3];
char caracter[3];
string palabra[5];
float flod[3];
int i, j, numero;


int main(){
//	cout << "FLOAT" << endl;
//	for (j = 0; j <= 2; j++){
//		cout << "Ingrese dato en el indice " << j << ": " << endl;
//		cin >> flod[j];
//	}
//	for (j = 0; j <= 2; j++){
//		cout << "Indice "<< j << ") "<< flod[j] << endl;
//	}
//	
//	cout << "CHAR" << endl;
//	for (i = 0; i <= 2; i++){
//		cout << "Ingrese dato en el indice " << i << ": " << endl;
//		cin >> caracter[i];
//	}
//	for (i = 0; i <= 2; i++){
//		cout << "Indice "<< i << ") "<< caracter[i] << endl;
//	}
	
	cout << "STRING" << endl;
	for (j = 0; j <= 4; j++){
		cout << "Ingrese dato en el indice " << j << ": " << endl;
		cin >> palabra[j];
	}
	
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	
	cout << palabra[numero] << endl;
	
	
	
//	for (j = 0; j <= 4; j++){
//		cout << "Indice "<< j << ") "<< palabra[j] << endl;
//	}
	
	
	
	
//	cout << "INT" << endl;
//	for (i = 0; i <= 2; i++){
//		cout << "Ingrese dato en el indice " << i << ": " << endl;
//		cin >> datos[i];
//	}
//	for (i = 0; i <= 2; i++){
//		cout << "Indice "<< i << ") "<< datos[i] << endl;
//	}
//	
	system("pause");
	
	return 0;

}