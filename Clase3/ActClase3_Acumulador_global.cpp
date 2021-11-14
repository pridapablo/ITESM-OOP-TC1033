#include<iostream>

using namespace std;

void frutasyverduras(int *acumulador)
{
    int total;
    cout << "Cuánto gastaste en frutas y verduras? ";
    cin >> total;
    cout << "Gracias por gastar " << total << " pesos en frutas y verduras \n";
    (*acumulador) += total;
}

void carnesycongelados(int *acumulador)
{
    int total;
    cout << "Cuánto gastaste en carnes y congelados? ";
    cin >> total;
    cout << "Gracias por gastar " << total << " pesos en carnes y congelados \n";
    (*acumulador) += total;
}

void vinosylicores(int *acumulador)
{
    int total;
    cout << "Cuánto gastaste en vinos y licores? ";
    cin >> total;
    cout << "Gracias por gastar " << total << " pesos en vinos y licores \n";
    (*acumulador) += total;
}

void dulceria(int *acumulador)
{
    int total;
    cout << "Cuánto gastaste en dulcería? ";
    cin >> total;
    cout << "Gracias por gastar " << total << " pesos en dulcería \n";
    *acumulador += total;
}

void artdelimpieza(int *acumulador)
{
    int total;
    cout << "Cuánto gastaste en artículos de limpieza? ";
    cin >> total;
    cout << "Gracias por gastar " << total << " pesos en artículos de limpieza \n";
    *acumulador += total;
}

int main()
{
    int acumulador = 0;
    
    frutasyverduras(&acumulador);
    carnesycongelados(&acumulador);
    vinosylicores(&acumulador);
    dulceria(&acumulador);
    artdelimpieza(&acumulador);

    cout << "En total gastaste " << acumulador << " pesos \n";
}