/** 
    Los múltiplos de 3 y 5 que están entre 1 y 10 son: 3,5,6 y 9. La suma de dichos números es 
    igual a 23. Haz un programa que imprima la suma de los múltiplos de 3 y 5 que están entre 0 y 1000.
**/

# include <iostream>

int multiple(int min, int max)
{
    int sum = 0;
    
    for (int i = min ; i < max; i++)
    {
        if ((i % 3 && i % 5) == 0)
        {
            sum = sum + i;
        }
    }

    std::cout << "La suma de los múltiplos de 3 y 5 que están entre " << min << " y " << max << " es de " << sum << "\n";
    return 0;
}

int main()
{
    multiple(0,1000);
}