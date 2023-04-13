// Ingresar un nombre, asignar a una variable un apellido
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  string nombre;
  string apellido = "Almachi";

  cout << "Ingrese el nombre: ";
  cin >> nombre;

  cout << "Bienvenido Sr. " << nombre << " " << apellido;
}
