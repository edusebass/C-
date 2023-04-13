#include <iostream>

using namespace std;

int main()
{
	int opc, var, a, b, c, d, e, f, bat;
	float rojo = 1.9, amarillo = 1.7 , verde = 2.4, naranja = 2.4, blanco = 3.4, azul = 3.4;
	
	cout << "Puede realizar el ejercicio 1, 2, 3 \n";
	cout << "Ingrese que ejercicio quiere realizar: ";
	cin >> opc;
	
	
	
	switch (opc){
		case 1 :
			
		cout << "Se evaluara si su numero es par, impar, neutro, negativo, positivo o multiplo de 2, 3, 4, 5\n";
		cout << "Porfavor, ingrese un valor: ";
		cin >> var;
		
			if (var % 2 == 0){
	        cout << "El numero es par\n";
		    }
		    else{
		        cout << "El numero es impar\n";
		    }
		    if(var == 0){
		        cout << "Es un numero neutro\n";
		    }
		    if(var < 0){
		        cout << "El numero es negativo\n";
		    }
		    if(var > 0){
		        cout << "El numero es positivo\n";
		    }
		    if(var % 2 == 0){
		        cout << "El numero es multiplo de 2\n";
		    }
		    if(var % 3 == 0){
		        cout << "El numero es multiplo de 3\n";
		    }
		    if(var % 4 == 0){
		        cout << "El numero es multiplo de 4\n";
		    }
		    if(var % 5 == 0){
		        cout << "El numero es multiplo de 5\n";
			}
		
		break;
		
		case 2:
			
		cout << "Se efectuaran operaciones segun el numero de digitos del numero que digite\n";
		cout << "Por favor, ingrese un valor: ";
		cin >> a;
		
		if (a > 10000){
			cout << "El valor es mayor de 4 cifras, entonces no se realizara ninguna operacion";
		}
			
			
		if (a < 10000){
			
			if(a<10 && a>0){
				b = a * a;
				cout << "El  numero es de una cifra entonces se lo elevara al cuadrado, por lo tanto el resultado es: " << b;
			}
			
			else if(a>=10 && a<100){
				c = a * 2;
				cout << "El numero es de dos cifras entonces se lo multiplicara por 2, por lo tanto el resultado es: " << c;
				
			}
			else if(a>=100 && a<1000){
				d = a - 100;
				cout << "El numero es de tres cifras entonces se le restara 100 por lo tanto el resultado es: " << d;
			}
			
			else if(a <= 0){
				cout << "Error";
			}
			
			break;
		}
		
		case 3 :
			cout << "De acuerdo a la bateria se mostrara cuantos leds se puede utilizar segun el color" <<"\n";
			cout << "Su bateria es de 9 o 12 voltios?: ";
	    	cin >> bat;
	    
		    if (bat == 9){
		        
		        cout << "Con una bateria de 9 voltios usted: \n";
		        
		        a = bat / rojo;
		        cout << "Puede poner " << a << " leds rojos\n";
		        
		        b = bat / amarillo;
		        cout << "Puede poner " << b << " leds amarillos\n";
		        
		        c = bat / verde;
		        cout << "Puede poner " << c << " leds verdes\n";
		        
		        d = bat / naranja;
		        cout << "Puede poner " << d << " leds naranjas\n";
		        
		        e = bat / blanco;
		        cout << "Puede poner " << e << " leds blancos\n";
		        
		        f = bat / azul;
		        cout << "Puede poner " << f << " leds azules\n";
		    }
		    
		    
		    
		    if (bat == 12){
		        
		        cout << "Con una bateria de 12 voltios usted: \n";
		        
		        a = bat / rojo;
		        cout << "Puede poner " << a << " leds rojos\n";
		        
		        b = bat / amarillo;
		        cout << "Puede poner " << b << " leds amarillos\n";
		        
		        c = bat / verde;
		        cout << "Puede poner " << c << " leds verdes\n";
		        
		        d = bat / naranja;
		        cout << "Puede poner " << d << " leds naranjas\n";
		        
		        e = bat / blanco;
		        cout << "Puede poner " << e << " leds blancos\n";
		        
		        f = bat / azul;
		        cout << "Puede poner " << f << " leds azules\n";
			}
		break;
		
		default :
			cout << "Ingrese el numero de ejercicio correcto, porfavor!!";
		break;
	}	
}

	
