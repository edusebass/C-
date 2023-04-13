//#include <iostream>
//using namespace std;
//int main(){
////Cree un arreglo unidemensional y que se muestre el ultimo digito
//	int A[5] = {5, 3, 4, 5, 6}; //creacion del arreglo
//	
//	cout << A[4]; //llamado al ultimo digito
//}

#include <iostream>
using namespace std;
	//Cree un arreglo unidimensional pero usted ingrese los datos y luegos muestrelos
int main(){
	float flod[3]; //creacion del arreglo y tamaño
	int i, j;
	
	for (j = 0; j < 3; j++){ // utilizamos un for para ingreso de datos 
		cout << "Ingrese dato del indice " << j << ": " << endl;
		cin >> flod[j];
	}
	//muestra del arreglo en la consola por un for
	for(j = 0; j < 3; j++){
		cout << flod[j] << " " ;
	}
}


#include <iostream>
using namespace std;
//Cree un arreglo, ingrese el tamaño por consola, y ingrese los indices y
//muestre el arreglo en la consola
int main(){
	int B[50]; //creacion del arreglo y tamaño // ponemos 50 para aceptar valores
	int i, ta;
	
	cout << "Ingrese el tamaño del arreglo: "; // se pide el tamaño del arreglo
	cin >> ta;
	
	for (i = 0; i < ta; i++){ // utilizamos un for para ingreso de datos con el tamaño respectivo 
		cout << "Ingrese dato del indice " << i << ": " << endl;
		cin >> B[i];
	}
	//muestra del arreglo en la consola por un for
	for(i = 0; i < ta; i++){
		cout << B[i] << " " ;
	}
}