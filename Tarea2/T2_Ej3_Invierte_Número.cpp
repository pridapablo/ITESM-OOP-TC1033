/* Programa que invierte un número (el número se debe recibir como parámetro en una función). 
Por ejemplo, si el número a invertir es 350039, entonces el resultado es 930053 */

#include <iostream>

int invierte_num(int *num)
{
    int num_invertido = 0;
    bool num_negativo = false;

    if (*num < 0)
    {
        *num = *num * -1;
        num_negativo = true;
    }

    while (*num > 0)
    {
        num_invertido = num_invertido*10+ *num%10;
        *num = *num/10;
    }

    if (num_negativo)
    {
        num_invertido = num_invertido * -1;
    }

    std::cout << "El número invertido es " << num_invertido << std::endl;
    return num_invertido;
}

int main ()
{
    int num = -350039;
    return invierte_num(&num);
}
