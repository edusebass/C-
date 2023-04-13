// Ingresar datos personales como:
// nombre, apellido, edad, estatura, peso

#include <iostream>
using namespace std;

int main()
{
  string nombre, apellido;
  int edad;
  float peso;

  cout << "Ingrese su nombre: ";
  cin >> nombre;

  cout << "Ingrese su apellido: ";
  cin >> apellido;

  cout << "Ingrese su edad: ";
  cin >> edad;

  cout << "Ingrese su peso: ";
  cin >> peso;

  cout << "Sus datos son: " << "\n"
    << nombre << "\n"
    << apellido << "\n"
    << edad << "\n"
    << peso << "\n";

}