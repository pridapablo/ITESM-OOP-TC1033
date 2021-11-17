#include <iostream>
#include <string>
using namespace std;

struct Persona
{
    string nombre;
};

int main()
{
    Persona pepito;
    pepito.nombre = "Pepito";

    Persona juanito = pepito; // al hacer una copia de pepito se obtiene una nueva instacia 
}