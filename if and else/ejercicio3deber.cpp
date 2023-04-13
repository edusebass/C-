// 3.  Se debe ingresar los voltios de batería puede ser (9 o 12), además   ingresar colores de leds, los que se muestran a continuación. 5783 2931
#include <iostream>
using namespace std;

int main()
{
    int bat, a, b, c, d, e, f;
    float rojo = 1.9, amarillo = 1.7 , verde = 2.4, naranja = 2.4, blanco = 3.4, azul = 3.4;
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
}