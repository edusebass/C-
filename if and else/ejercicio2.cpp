  // INGRESAR VALOR , SI EL VALOR ES MENOR QUE 1000 CONTAR CUANTAS CIFRAS TIENE Y SI EL NUMERO TIENE UN DIGITO ELEVARLO AL CUADRADO Y MOSTRAR SU RESULTADO, POR OTRO LADO
//SI EL NUMERO  ES DE DOS DIGITOS  MULTIPLICARLO POR DOS Y MOSTRAR EL RESULTADO, SI EL NUEMOR ES DE TRES DIGITOS
//RESTARLE 100 Y MOSTRAR SU RESULTADO, FIANLMENTE SI EL NUMERO ES CERO MOSTRAR ERROR
#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{
	int a,b,c,d;
	cout << "Ingrese un valor: ";
	cin >> a;
	
	if (a < 10000)
	{
		if(a<10 && a>0)
		{
			b = a * a;
			cout << "El resultado es:" << b;
		}
		else if(a>=10 && a<100)
		{
			c = a * 2;
			cout << "El resultado es:" << c;
		}
		else if(a>=100 && a<1000)
		{
			d = a - 100;
			cout << "El resultado es:" << d;
		}
		else if(a <= 0)
		{
			cout << "Error";
		}	
	}		
}