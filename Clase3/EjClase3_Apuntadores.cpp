#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    int *addressOfNum1 = &num1; // declaración de un apuntador (debo incluir el tipo de datos que almacena)

    cout << addressOfNum1 << "\n"; // esto es NULL
    cout << &addressOfNum1 << "\n"; //valor hexadecimal

    *addressOfNum1 = 356; // de-referenciación
    *addressOfNum1 *= 2; 
    // *addressOfNum1++; //(moví la dirección del pointer de manera temporal)
    (*addressOfNum1)++; //accede al contenido y al contenido agregale 1 
    *(addressOfNum1+10); // quiero que te muevas 10 direcciones hacia adelante y dime que hay ahí // aritmética de apuntadores

    cout << &num1 << endl;
    cout << &num2 << endl;
    cout << &num3 << endl;
}
