#include <iostream>

using namespace std;

int main() {
	
	
	int A[50][50], B[50][50], C[50][50];
	int f1, c1, f2, c2, sumadia, sumasecu;
	
	cout << "Ingrese el numero de filas de la primera matriz: ";
	cin >> f1;
	cout << "Ingrese el numero de columnas de la primera matriz: ";
	cin >> c1;
	cout << "Ingrese el numero de filas de la segunda matriz: ";
	cin >> f2;
	cout << "Ingrese el numero de columnas de la segunda matriz: ";
	cin >> c2;
	
	if (c1 == f2){
		//pedido de datos 1 matriz
		cout << "Matriz x" << f1 << " * " << c1 << endl;
		for (int i = 0; i < f1; i++){
			for (int j = 0; j < c1; j++) {
		      cout << "Digite el numero de la posicion: [" << i << "][" << j << "]: ";
		      cin >> A[i][j];
		    }
		}
		//pedido datos 2 matriz
		cout << "Matriz " << f2 << " * " << c2 << endl;
		for (int i = 0; i < f2; i++) {
			for (int j = 0; j < c2; j++) {
		      cout << "Digite el numero de la posicion: [" << i << "][" << j << "]: ";
		      cin >> B[i][j];
		    }
		}
    	cout << endl;
		//muestra matriz 1 matriz
		sumadia = 0;
		sumasecu = 0;
		for (int i = 0; i < f1; i++) {
		    for (int j = 0; j < c1; j++) {
		      cout << A[i][j] << " ";
		      if(i == j){
		      	sumadia += A[i][j];
			  }
			  if(i + j == (c1-1)){
			  	sumasecu += A[i][j];
			  }
		    }
	    	cout << "\n";
		}
		cout << "La suma de la diagonal principal es: " << sumadia << endl;
		cout << "La suma de la diagonal secundaria es: " << sumasecu << endl;
		cout << endl;
		//muestra matriz 2 matriz
		sumadia = 0;
		sumasecu = 0;
		for (int i = 0; i < f2; i++) {
		    for (int j = 0; j < c2; j++) {
		      cout << B[i][j] << " ";
		      if(i == j){
		      	sumadia += B[i][j];
			  }
			  if(i + j == (c2-1)){
			  	sumasecu += B[i][j];
			  }
		    }
        	cout << "\n";
    	}
		cout << "La suma de la diagonal principal es: " << sumadia << endl;	
		cout << "La suma de la diagonal secundaria es: " << sumasecu << endl;		
		
		for(int i = 0; i < f1; i++){
			for(int j = 0; j < c2; j++){
				C[i][j] = 0;
			}
		}
		for(int i = 0; i < f1; i++){
			for(int j = 0; j < c2; j++){
				for(int z = 0; z < c1; z++){
					C[i][j] = C[i][j] + A[i][z] * B[z][j];
				}
			}
		}
		cout << endl;
		cout << "Multiplicacion de matrices" << endl;
		for (int i = 0; i < f1; i++) {
		    for (int j = 0; j < c2; j++) {
		      cout << C[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}