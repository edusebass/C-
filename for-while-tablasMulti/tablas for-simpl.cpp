#include <iostream>
using namespace std;

int main(){
	
	string nombre;
	int grado;
	
	cout <<"Ingrese el nombre del estudiante: ";
	cin >> nombre;
	cout << "Ingrese el grado del curso: ";
	cin >> grado;
	
	while(grado > 6 ){
			cout << "Ingrese el grado otra vez, porfavor: ";
			cin >> grado;
		}
	
	if (grado == 1){
		cout << "TABLA DEL 2" << endl;
			for(int i=1; i<=10; i+=1){
				int multiplicacion = i * 2;
				cout << "2 * " << i << " = "<< i << endl;
			}
	}
	
	else if (grado == 2){
		for (int i = 3; i <= 4; i++){
			cout << "TABLA DEL " << i << endl;
			for (int j = 1; j <= 10; j++){
				cout << i << " * " << j << " = " << i * j << endl;
			}
		}	
	}
	
	else if (grado == 3){
		for (int i = 5; i <= 6; i++){
			cout << "TABLA DEL " << i << endl;
			for (int j = 1; j <= 10; j++){
				cout << i << " * " << j << " = " << i * j << endl;
			}
		}	
	}
	
	else if (grado == 4){
		for (int i = 7; i <= 8; i++){
			cout << "TABLA DEL " << i << endl;
			for (int j = 1; j <= 10; j++){
				cout << i << " * " << j << " = " << i * j << endl;
			}
		}	
	}
	
	else if (grado == 5){
		cout << "TABLA DEL 9" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 9;
				cout << "9 * " << i << " = "<< multiplicacion << endl;
			}		
	}
	
	if (grado == 6){
		
		for (int i = 1; i <= 10; i++){
			cout << "TABLA DEL " << i << endl;
			for (int j = 1; j <= 10; j++){
				cout << i << " * " << j << " = " << i * j << endl;
			}
		}
	}	
}