/* Programa que indica si un valor X es un número circular primo. Los números circulares 
primos son aquellos que son números primos y que todas las rotaciones de dicho número 
también son primos. Ej. El número 197 es circular primo pq es primo y su primera rotación 
971 también es primo y su segunda rotación 719 también es primo. */

#include <iostream>
#include <math.h>

bool isPrime(int number)
{
    if ((number == 0) || (number == 1))
    {
        return false;
    }
    else if (number == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i < (number); ++i) 
        {
            if ((number % i) == 0)
            {
                return false;
                continue;
            }
        }
        return true;
    }
}
int countDigits(int number)
{
    int numberOfDigits = 0;
    while (number > 0)
    {
        numberOfDigits++;
        number/=10;
    }
    return numberOfDigits;
}
bool isCircularPrime(int number)
{
    int expo = countDigits(number)-1;
    int countCircularPrimes = 0;
    for (int i=0; i < countDigits(number); i++)
    {
        int lastDigit = number%10;
        number /= 10;
        int base = pow(10,expo)*lastDigit;
        number += base;
        if (isPrime(number) == true) 
        {
           countCircularPrimes++; 
        }
    }
    if (countCircularPrimes == countDigits(number)) //Todas las rotaciones son primas
    {
        std::cout << number << " es circular primo. \n";
        return true;
    }
    else 
    {
        std::cout << number << " no es circular primo. \n";
        return false;
    }
}
int main()
{
    int x = 197;
    return isCircularPrime(x);
}