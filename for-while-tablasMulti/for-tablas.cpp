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
		cout << "TABLA DEL 3" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 3;
				cout << "3 * " << i << " = "<< multiplicacion << endl;
			}	
		cout << "TABLA DEL 4" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 4;
				cout << "4 * " << i << " = "<< multiplicacion << endl;
			}	
	}
	
	else if (grado == 3){
		cout << "TABLA DEL 5" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 5;
				cout << "5 * " << i << " = "<< multiplicacion << endl;
			}	
		cout << "TABLA DEL 6" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 6;
				cout << "6 * " << i << " = "<< multiplicacion << endl;
			}	
	}
	
	else if (grado == 4){
		cout << "TABLA DEL 7" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 7;
				cout << "7 * " << i << " = "<< multiplicacion << endl;
			}	
		cout << "TABLA DEL 8" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 8;
				cout << "8 * " << i << " = "<< multiplicacion << endl;
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
		cout << "TABLA DEL 2" << endl;
			for(int i=1; i<=10; i+=1){
				int multiplicacion = i * 2;
				cout << "2 * " << i << " = "<< i << endl;
			}
		cout << "TABLA DEL 3" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 3;
				cout << "3 * " << i << " = "<< multiplicacion << endl;
			}	
		cout << "TABLA DEL 4" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 4;
				cout << "4 * " << i << " = "<< multiplicacion << endl;
			}
		cout << "TABLA DEL 5" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 5;
				cout << "5 * " << i << " = "<< multiplicacion << endl;
			}	
		cout << "TABLA DEL 6" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 6;
				cout << "6 * " << i << " = "<< multiplicacion << endl;
			}
		cout << "TABLA DEL 7" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 7;
				cout << "7 * " << i << " = "<< multiplicacion << endl;
			}	
		cout << "TABLA DEL 8" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 8;
				cout << "8 * " << i << " = "<< multiplicacion << endl;
			}
		cout << "TABLA DEL 9" << endl;
			for(int i=1; i<=10; i++){
				int multiplicacion = i * 9;
				cout << "9 * " << i << " = "<< multiplicacion << endl;
			}	
	}
	
}