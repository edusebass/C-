// Op2
// Ingresar un valor y verificar si el valor
// ingresado es:
// Par - impar
// Positivo - negativo o neutro.
// Múltiplo de 2,3,4 o 5
// CON WITCH
#include <iostream>
using namespace std;

int main()
{
    int var;
    cout<<"Ingrese un valor: ";
    cin >>var;
    
    if (var % 2 == 0){
        var = 0;
    }else
    	var = 1;
    	
    switch(var){
    	case 0 : cout << "Es par\n";
    	break;
    	
    	case 1 : cout << "Es impar\n";
    	break;
    	
    	default : cout << "Es neutro\n";
	}
    
    
    if(var < 0){
        cout << "El numero es negativo\n";
    }
    if(var > 0){
        cout << "El numero es positivo\n";
    }
    

    if(var % 2 == 0){
    	var = 0;
    }
    
    switch(var){
    	case 0 : cout << "Es multiplo de 2";
    	break;
	}

	 if(var % 3 == 0){
    	var = 0;
    }
    
    switch(var){
    	case 0 : cout << "Es multiplo de 3";
    	break;
	}
	
	 if(var % 4 == 0){
    	var = 0;
    }
    
    switch(var){
    	case 0 : cout << "Es multiplo de 4";
    	break;
	}
	
	 if(var % 5 == 0){
    	var = 0;
    }
    
    switch(var){
    	case 0 : cout << "Es multiplo de 5";
    	break;
	}

    return 0;
}