#include <iostream>
using namespace std;

int main()
{
	string nombre, puesto;
	int fecha, respf1,respf2, respf3, respf4, respf5, respf6, respf7, pru, a, b, c, d, e, f, g, notass;
	
	cout << "Se realizara un proceso de selección \n";
	
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	
	cout << "Ingrese la fecha: ";
	cin >> fecha;
	
	cout << "Ingrese al puesto que desea postular: ";
	cin >> puesto;
	
	
	cout << "Listo procederemos a evaluarle \n";
	cout << "-----------------------------------\n";
	cout << "\t\t\t\t\t\t Fase 1 \n";
	cout << "Pruebas de conocimientos \n";
	cout << "Son preguntas de si o no \n";
	cout << "Si = 1 ------------- No = 0 \n";
	cout << "\n";
	cout << "La ram es un espacio de almacenamiento? \n";
	cin >> respf1;
	if (respf1 == 1){
		a = 10;
	}
		switch (respf1){
			case 1 : 
			cout << "Respuesta correcta \n";
			break;
			case 0 :
			cout << "Respuesta incorrecta\n";
			break;
		}
	
	cout << "C++ es un lenguaje de programacion? \n";
	cin >> respf2;
	if (respf2 == 1){
		b = 10;
	}
		switch (respf2){
			case 1 : 
			cout << "Respuesta correcta \n";
			break;
			case 0 :
			cout << "Respuesta incorrecta\n";	
			break;
		}
	
	cout << "Python es un lenguaje de programacion? \n";
	cin >> respf3;
	if (respf3 == 1){
		c = 10;
	}
		switch (respf3){
			case 1 : 
			cout << "Respuesta correcta \n";
			break;
			 case 0 :
			cout << "Respuesta incorrecta\n";
			break;
		}
	
    cout << "Javasccript es un lenguaje orientado a objetos? \n";
	cin >> respf4;
	if (respf4 == 1){
		d = 10;
	}
	
		switch (respf4){
			case 1 : 
			cout << "Respuesta correcta \n";
			break;
			case 0 :
			cout << "Respuesta incorrecta\n";
			break;
		}
	cout << "--------------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t Fase 2 \n";
	cout << "Pruebas practicas \n";
	cout << "\n";
	cout << "Realizo pruebas practicas: ";
	cin >> pru;
		switch(pru){
		case 1:
		cout << "Listo, entonces usted obtiene 30 puntos\n";
		break;
		case 0:
		cout << "No obtiene puntos porque no realizo practicas\n";
		break;
    	}
    
    cout << "---------------------------------------------------\n";
    cout << "\t\t\t\t\t\t Fase 3 \n";
	cout << "Entrevista \n";
	cout << "\n";
	
	cout << "Su experiencia fue buena?\n ";
	cin >> respf5;
	if (respf5 == 1){
		e = 10;
	}
		switch (respf5){
			case 1 : 
			cout << "Gracias por su respuesta \n";
			break;
			case 0 :
			cout << "Gracias por su respuesta \n";
			break;
		}
	
	cout << "Le gusto el sitio de trabajo?\n";
	cin >> respf6;
	if (respf6 == 1){
		f = 10;
	}
		switch (respf6){
			case 1 : 
			cout << "Gracias por su respuesta \n";
			break;
			case 0 :
			cout << "Gracias por su respuesta \n";
			break;
		}
	
	cout << "Le gusto la calidad de servicio que ofrecio?\n";
	cin >> respf7;
	if (respf7 == 1){
		g = 10;
	}
		switch (respf7){
			case 1 : 
			cout << "Gracias por su respuesta \n";
			break;
			case 0 :
			cout << "Gracias por su respuesta \n";
			break;
		}
		
	notass = a + b + c + d + e + f + g;  
	cout <<"------------------------------------------------------------\n";
	cout << "Gracias por sus respuestas\n";
	cout << "Su nota es: 80";
	cout << nombre, "esta apto para el puesto";
	
	
	
	
}