// Programa que imprime cuántos números circulares primos hay debajo de 1000000 

#include <iostream>

bool es_circular_primo(int *num)
{
    if (1==1)
    {
        return true;
    }
}

void cont_circulares_primos(int *rang, int *cont)
{
    for (int i = 0 ; i <= *rang ; i++)
    {
        if (es_circular_primo(&i))
        {
            *cont = *cont + 1;
        }
    }
}

int main ()
{
    int cont = 0;
    int rang = 1000000;

    cont_circulares_primos(&rang, &cont);
    
    std::cout << "La cantidad de circulares primos debajo de " << rang << " es " << cont;
    return cont;
}
