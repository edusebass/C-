#include <iostream>
using namespace std;

int c, talla[100];
string color[100], genero[100], tipo[100];

string carreras[5];
int notas[5];
int i, j, aux, opcion;

void funcionDos() {
  cout << "TIENDA DE CALZADOS" << endl;
  cout << "Cuantos zapatos compro: ";
  cin >> c;
  for (i = 0; i < c; i++) {
    cout << "Ingrese la talla del zapato[" << i + 1 << "]: " << endl;
    cin >> talla[i];
    cout << "Ingrese el color del zapato[" << i + 1 << "]: " << endl;
    cin >> color[i];
    cout << "¿Para quien es el calzado[" << i + 1
         << "]? \n-)Hombre \n-)Mujer \n-)Niño \n-)Niña: " << endl;
    cin >> genero[i];
    cout << "Tipo del calzado[" << i + 1 << "] \n-)Casual \n-)Deportivo "
         << endl;
    cin >> tipo[i];
  }
  cout << endl;
  cout << "---------------LISTADO TOTAL-------------" << endl;
  for (int i = 0; i < c; i++) {
    cout << "---------------------" << endl;
    cout << "TALLA: " << talla[i] << endl;
    cout << "COLOR: " << color[i] << endl;
    cout << "GENERO: " << genero[i] << endl;
    cout << "TIPO: " << tipo[i] << endl;
  }
}
void funcionUno() {

  for (i = 0; i < 5; i++) {
    cout << "Ingrese la carrera[" << i + 1 << "]: " << endl;
    cin >> carreras[i];
    cout << "Ingrese la nota[" << i + 1 << "]: " << endl;
    cin >> notas[i];
  }
  cout << endl;
  cout << "Notas y carrera ordenada de mayor a menor" << endl;
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (notas[i] < notas[j]) {
        aux = notas[i];
        notas[i] = notas[j];
        notas[j] = aux;
      }
    }
  }
  for (int i = 0; i < 5; i++) {
    cout << "---------------------" << endl;
    cout << "CARRERA: " << carreras[i] << endl;
    cout << "NOTA: " << notas[i] << endl;
  }
}

void funcionBusq() {
  cout << "TAREA VECTORES Y FUNCIONES" << endl;
  cout << "EJERCICIO 4" << endl;
  cout << endl;
  cout << "---------------MENU--------------" << endl;
  cout << "1)Funcion 1: Arreglo de notas y carreras y mostrarlos de mayor a "
          "menor"
       << endl;
  cout << "1)Funcion 2: Tienda de calzados" << endl;
  cout << "Ingrese la opcion que desea: ";
  cin >> opcion;

  if (opcion == 1) {
    funcionUno();
  } else if (opcion == 2) {
    funcionDos();
  }
}

int main() { funcionBusq(); }
