

#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

float nota;
string apellido[3];
float tareas[3];
float deberes[3];
int i;


int main(){
	cout << "APELLIDO" << endl;
	for(i=0; i<=2; i++){
		cin >> apellido[i];
	}
	cout << "TAREAS" << endl;
	for(i=0; i<=2; i++){
		cin >> tareas[i];
	}
	cout << "DEBERES" << endl;
	for(i=0; i<=2; i++){
	cin >> deberes[i];
	}
	
	for(i=0; i<=2; i++){
	cout << "APELLIDO: " << apellido[i] << " CALIFICACION PROMEDIO: " <<  (tareas[i] + deberes[i])/2 << endl;;
	}
	

	system("pause");
	
	return 0;

}