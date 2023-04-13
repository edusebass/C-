//Intro a Funciones

/*#include <iostream>
using namespace std;

void funcion_1() {
  cout << "Eduardo Almachi" << endl;
  cout << "Estudie en el colegio Jose de la Cuadra" << endl;
}

void funcion_2() {
  cout << "Actualmente estudio en la EPN" << endl;;
}

int main() {
  funcion_1();   // si me olvido el parentesis si no tiene parametroas no pasa nada
  funcion_2();   //se ejecuta segun el orden
}
*/

/*
#include <iostream>
using namespace std;

void funcion_1() {
  cout << "Eduardo Almachi" << endl;
  cout << "Estudie en el colegio Jose de la Cuadra" << endl;
}

void funcion_2() {
  cout << "Actualmente estudio en la EPN" << endl;;
}

int main() {
  funcion_1();   // si me olvido el parentesis si no tiene parametroas no pasa nada
  funcion_2();   //se ejecuta segun el orden
}
*/

////////////////////////////////////////////////////
//PROTOTIPO DE FUNCION

#include <iostream>
using namespace std;

void suma(int g);
void resta(int h);

int main() {
  int a;
  cout << "Ingrese un valor: " << endl;
  cin >> a;
  suma(a);
  resta(a);
} 

void suma(int g) {
  int res;
  res = g + 3;
  cout << "La suma es " << res << endl;
}  

void resta(int h) {
  int res;
  res = h - 3;
  cout << "La resta es " << res << endl;
}
//