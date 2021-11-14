// Realiza un programa en C++ que imprime si un año introducido por el usuario es bisiesto o no. 

# include <iostream>

bool bisiesto()
{
    int year;
    std::cout << "Introduce un año \n";
    std::cin >> year;

    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
    {
        std::cout << "El año es bisiesto \n";
        return true;
    }
    else
    {
        std::cout << "El año no es bisiesto \n";
        return false;
    }
}

int main()
{
    bisiesto();
}

