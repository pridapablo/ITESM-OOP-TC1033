// Programa que imprime la cantidad de números primos que hay entre 1000 y 100000

// Nota: este programa considera los extremos del intervalo dado

# include <iostream>

bool is_prime(int number)
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
    return 0;
}

int count_primes(int min, int max)
{
    int count = 0;

    for (int i = min; i <= max; i++)
    {
        if (is_prime(i) == true)
        {
            // std::cout << i << " "; //Para imprimir cada número
            count = count + 1;
        }
    }
    std::cout << "La cantidad de números primos entre " << min << " y " << max << " es " << count << "\n";
    return 0;
}

int main()
{
    count_primes(1000,100000);
}