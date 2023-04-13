#include <iostream>
using namespace std;

int main() {

  int opcion, primo, divisiones = 1, residuo = 0, final, i;
  cout << "PROGRAMA EJERCICIO TAREA 6 \nIngrese la funcion del programa que desea realizar: " << endl;
  cout << endl;
  cout << "1)Determinar si un numero es primo" << endl;
  cout << "2)Multiplos de 3" << endl;
  cout << "3)Numero mayor de tres numeros" << endl;
  cout << "4)Calcular el IVA (12%) de un numero" << endl;
  cout << "5)Salir" << endl;
  cout << endl;
  cout << "Ingrese cual opcion desea realizar: ";
  cin >> opcion;
  
  switch(opcion) {
    case 1:
    	cout << "------------------------------------------------------------------------" << endl;
		cout << "Esta opcion devuelve 0 si el numero es primo y 1 si no es primo" << endl;
    	cout << "Ingrese un numero: ";
    	cin >> primo;
    		do {
    			if(primo % divisiones == 0) {
    				residuo++;
				}
			divisiones ++;
			}while(divisiones <= primo);
			
			if(residuo == 2){
				cout << "---> 0 " << endl;
			} else{
				cout << "---> 1 " << endl;
			}
		break;
			
	case 2:
		cout << "------------------------------------------------------------------------" << endl;
		cout << "Se mostrara los numeros multiplos de 3 entre 1 y un numero final que usted ponga" << endl;
		cout << "Ingrese el numero final: ";
		cin >> final;
		cout << endl;
		cout << "Se muestra los multiplos de 3 desde 1 hasta " << final << endl;
		for( int i = 1; i <= final; i++ ) {
	        if( i % 3 == 0 ) {
	            cout << i << " ";
	            }
		}
	break;
	
	case 3:
		int a, b, c;
		cout << "------------------------------------------------------------------------" << endl;
		cout << "Se le pedira tres numeros al usuario y determinaremos cual de ellos es el mayor." << endl;	
		cout << "Ingrese tres numeros: " << endl;
		cin >> a >> b >> c;
		if(a > b && a > c){
	    cout << "El numero mayor es: " << a;
	    }
	    if(b > c && b > a){
	    cout << "El numero mayor es: "<< b;        
	    }
	    if(c > b && c > a){
	    cout << endl << "El numero mayor es: " << c;        
	    }
	break;
	
	case 4:
		float sin_iva, valor_iva, iva;
		cout << "------------------------------------------------------------------------" << endl;
		cout << "Se le pedira un numero y se le mostrar el valor del IVA." << endl;
		cout << "Ingrese un numero: ";
		cin >> sin_iva;	
		
		valor_iva = sin_iva * 1.12;
		
		iva = (sin_iva * 0.12);
		
		cout << endl << "El valor del iva de su numero es: " << iva;
		cout << endl << "El valor de su numero con iva es: " << valor_iva;	
	break;
	
	case 5:
		break;	
	}	
}