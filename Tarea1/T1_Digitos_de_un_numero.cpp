/** 
    Crea un programa que imprima los dígitos (de manera individual) de un número de 5 cifras 
    (el usuario debe introducir el número). Ej. El usuario introduce un 43145 y el programa imprime:
        Numero 4 
        Numero 3
        Número 1  etc
**/

# include <iostream>

int digits()
{
    int number;
    number = 1000000;

    while ((number > 99999) || (number < 9999))
    {
        std::cout << "Introduzca un número de cinco cifras \n";
        std::cin >> number;
    }

    for (int i=10000;;i = i/10)
    {
        std::cout << "Número " << ((number % (i*10))-(number % i))/i << "\n";
        if (i == 10)
        {
            break; // Para evitar error por división entre cero, el último dígito se agrega fuera del for
        }
    }
    
    std::cout << "Número " << (number % 10) << "\n"; 
    
/** Algoritmo utilizado:
    std::cout << "Número " << ((number % 100000)-(number % 10000))/10000 << "\n";
    std::cout << "Número " << ((number % 10000)-(number % 1000))/1000 << "\n";
    std::cout << "Número " << ((number % 1000)-(number % 100))/100 << "\n";
    std::cout << "Número " << ((number % 100)-(number % 10))/10 << "\n";
    std::cout << "Número " << (number % 10) << "\n";    
**/

   return 0;
}

int main()
{
    digits();
}

