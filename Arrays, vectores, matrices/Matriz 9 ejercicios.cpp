////ejercicio 9
//	int matriz[100][100];
//	int filas, columnas, i, j;
//	cout << "Ingrese el numero de filas: ";
//	cin >> filas;
//	cout << "Ingrese el numero de columnas: ";
//	cin >> columnas;
//
//	for (i = 0; i < filas; i ++){
//		for(j = 0; j < columnas; j++){
//			cout << "Escriba la palabra de la posicion: ["<< i << "]["<<
//j <<"]: "; 			cin >> matriz[i][j];
//		}
//	}
//
//	for (i = 0; i < filas; i ++){
//		for (j = 0; j < columnas; j++){
//			cout  << matriz[i][j] << " ";
//		}
//		cout << "\n";
//	}

////EJERCICIO 7
//	int i, j, suma;
//	int sueldos[3][5] =
//	{
//		{200, 300, 400, 123, 234},
//		{123, 234, 345, 456, 56},
//		{23,12,45,56,67	}
//	};
//	for (i = 0; i < 3; i++){
//			for(j = 0; j < 5; j++){
//				suma += sueldos[i][j];
//			}
//		}
//	cout << "La suma es: " << suma;

//////ejercicio 6
//	string anidado[2][3];
//	int filas, columnas, i, j;
//	cout << "Ingrese el numero de filas: ";
//	cin >> filas;
//	cout << "Ingrese el numero de columnas: ";
//	cin >> columnas;
//
//	for (i = 0; i < filas; i ++){
//		for(j = 0; j < columnas; j++){
//			cout << "Escriba la palabra de la posicion: ["<< i << "]["<<
//j <<"]: "; 			cin >> anidado[i][j];
//		}
//	}
//
//	for (i = 0; i < filas; i ++){
//		for (j = 0; j < columnas; j++){
//			cout  << anidado[i][j];
//			cout << " ";
//		}
//	}
//}

// EJERCICIO 5
//	int sueldos[3][5] =
//	{
//		{200, 300, 400, 123, 234},
//		{123, 234, 345, 456, 56},
//		{23,12,45,56,67	}
//	}

// EJERCICIO 4
//		char ejercuatro[3][5] =
//	{
//		{'P', 'A', 'P', 'E', 'L'},
//		{'I', 'T', 'O', 'D', 'E'},
//		{'C', 'O', 'L', 'O', 'R'}
//	};
//	cout << ejercuatro[0][0];
//

//	int notas[2][10] =
//		{
//			{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
//			{11, 12, 13, 14, 15, 16, 17, 18 ,19 ,20}
//		};
//	cout << "La nota del tercer alumno del grupo 1 es: " << notas[0][2];
//	int ArryaBidimen [2][3] = {1, 2, 3, 7, 8, 9};
//	cout << ArryaBidimen [1][0];


#include <iostream>
using namespace std;

int main() {
  // a.	   Almacene números aleatorios (menores o iguales a 10) en una matriz de
  // 3 * 4.
  int matriz[3][4];
  int suma, sumaposi, sumaimpa, sumacolumna, sumafila, sumadiagonal, i, j;

  cout << "Matriz 3*4" << endl;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      cout << "Digite el numero de la posicion: [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  // b.	    Recorra la matriz: mostrando sus elementos
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << "\n";
  }

  // c.	    Imprima la suma de los números almacenados en la matriz.
  suma = 0;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      suma = suma + matriz[i][j];
    }
  }
  cout << "La suma general es: " << suma << endl;

  // d.	    Imprima la suma de los números pares almacenados en la matriz
  sumaposi = 0;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      if (matriz[i][j] % 2 == 0) {
        sumaposi = sumaposi + matriz[i][j];
      }
    }
  }
  cout << "La suma positivos es: " << sumaposi << endl;

  // e.     		Imprima la suma de los números impares almacenados en la
  // matriz
  sumaimpa = 0;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      if (matriz[i][j] % 2 == 1) {
        sumaimpa = sumaimpa + matriz[i][j];
      }
    }
  }
  cout << "La suma de impares es: " << sumaimpa << endl;

  // f.	    Imprima la suma de cada columnas

  for (i = 0; i < 4; i++) {
    sumacolumna = 0;
    for (j = 0; j < 3; j++) {
      sumacolumna += matriz[j][i];
    }
    cout << "La suma de columna " << (i + 1) << " es:  " << sumacolumna << endl;
  }

  // g.	    Imprima la suma de cada fila

  for (i = 0; i < 3; i++) {
    sumafila = 0;
    for (j = 0; j < 4; j++) {
      sumafila += matriz[i][j];
    }
    cout << "La suma de la fila " << (i + 1) << " es:  " << sumafila << endl;
  }

  // h.	    Imprima la suma de los elementos de la diagonal principal
  sumadiagonal = 0;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      if (i == j) {
        sumadiagonal = sumadiagonal + matriz[i][j];
      }
    }
  }
  cout << "La suma de la diagonal es: " << sumafila << endl;
}
