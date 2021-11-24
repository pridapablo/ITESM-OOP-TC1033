# include <iostream>
# include <string>
using namespace std;

// Definición de clases (solo las firmas) (.h)
class Date 
{
//----------- Constructor -----------

public:
    Date(); //constructor por default (no tiene parámetros)
    Date(int dayP, string monthP, int yearP); //constructor con parametros asignados por única vez

// ---------------------------------

//----------- Atributos -----------

private: //lo que sigue es privado, hasta que encuentre un public:
    int day;
    string month;
    int year;

// ---------------------------------

// ----------- Métodos -----------

// Getters (si tienen valor de retorno, pero no llevan parámetros)
public:
    int getDay();
    string getMonth();
    int getYear();

// Setters (no tienen valor de retorno, pero si tienen parámetros)

private: 
    void setDay(int dayP /* parámetro día... no es el mismo que está declarado al principio de la clase*/);
    void setMonth(int month /* parámetro mes*/);
    void setYear(int yearP /* parámetro año*/);

// ---------------------------------
};

// Implementación (.cpp) Para ponerle código a las firmas del .h
Date::Date()
{
    day = 1;
    month = "enero";
    year = 1980;
}
Date::Date(int dayP, string monthP, int yearP)
{
    day = dayP;
    month = monthP;
    year = yearP;
}
int /* especificamos de que clase es este método (separando con ::)*/ Date::getDay() 
{
    return day; //regresa el día
}
void Date::setDay(int dayP) //esto está dentro del scope de Date
{
    day = dayP; //voy a cambiar el valor del "day" de la clase (y lo remplazo con el que recibo como parámetro)
}

int main()
{
    // Instancia u objeto
    Date fechaDeHoy; //llama al constructor default
    /*fuera del scope del class no puedo acceder a lo privado, por ende, esto no se puede:
    fechaDeHoy.setDay(19); */
    Date miCumpleanios(21,"febrero",2002); //llama al constructor con parámetros

    cout << "default:" << fechaDeHoy.getDay() << "\nPor parametros:" << miCumpleanios.getDay();
}