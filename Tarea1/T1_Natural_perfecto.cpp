/**
    Programa que imprime si un número X es natural perfecto. 
    Los números naturales perfectos son aquellos que son iguales a la suma de sus divisores 
    (Ej. El número 6 es natural perfecto porque es igual a la suma de sus divisores 6 = 1+2+3)
**/

#include <iostream>

int natural()
{
    int number = 0;
    int sum_divisors;

    while (number<=0)
    {
        std::cout << "Introduce un número natural 'x'\n";
        std::cin >> number;
    }

    int i = 1;
    while (i < number)
    {
        if (number % i == 0)
        {
            sum_divisors = sum_divisors + i;
        }

        i = i + 1;
    }

    if (number == sum_divisors)
    {
        std::cout << "El número " << number << " es natural perfecto \n";
    }
    else
    {
        std::cout << "El número " << number << " no es un natural perfecto \n";
    }
    return 0;
}

int main()
{
    natural();
}