#include <iostream>
#include <cmath>

using namespace std;
int ex, ba, resu = 1, opcion, var, calraiz;
int operacion(int x, int y);
void expofor();
void menu();
void raiz();


int main() {
	cout << "Primero ingrese la base y el exponente!!!!" << endl;
	cout << "Ingrese la base: ";
    cin >> ba;
    cout << "Ingrese el exponente: ";
    cin >> ex;
	menu();
    
}
void menu(){
	cout << "MENU \n1)Calculo con for \n2)Calculo con libreria \n3) Raiz cuadrada \n4)Salir\nIngrese la opcion: "<< endl;
	cin >> opcion;
	
	if (opcion == 1){
		expofor();
	}
	if (opcion == 2){
		cout << "Resultado con libreria es: " << operacion(ba, ex);
	}
	if (opcion == 3){
		raiz();
	}
	cout << "\nMENU \n1)Calculo con for \n2)Calculo con libreria \n3) Raiz cuadrada \n4)Salir\nIngrese la opcion: "<< endl;
	cin >> opcion;
}
int operacion (int x, int y){
  int valor;
  valor = pow(x, y);
  return valor;
}
void expofor(){
	for(int i = 0; i < ex; i++){
		resu = resu * ba;
	}
	cout << "Resultado: " << resu;
}

void raiz(){
	cout << "Elija de cual quiere sacar la raiz \n1)Base \n2)Exponente" << endl;
	cin >> var;
	if (var == 1){
		calraiz = sqrt(ba);
		cout << "La raiz de la base es: "  << calraiz;
	}
	if (var == 2){
		calraiz = sqrt(ex);
		cout << "La raiz del esponente es: " << calraiz;
	}
}
