/* Crea una agenda digital*/

#include <iostream>
#include <string>
using namespace std;

struct Contacto
{
    string nombre;
    string mail;
};

void agregarContacto(Contacto* contacto, Contacto *lista, int posicion)
{
    lista[*posicion] = *contacto;
    (*posicion)++;
}

int buscarNombre(Contacto *lista,int size, string nombre)
{
    for(int i = 0; i < size; i++)
    {
        if (lista[i].nombre == nombre);
        {
            return i;
        }
    }
    return -1;
}

void modificarContacto(Contacto* lista, int size, string nombre, string nuevomail)
{
    buscarNombre(lista,size,nombre);
    if (pos != -1)
    {
        lista[pos].mail = nuevomail
    }
    else
    {
        cout << "contacto no encontrado \n"

    }
}

int main()
{
    Contacto* listaDeContactos;
    int size_contactos = 100;
    int numero_elementos_agregados = 0;
    listaDeContactos = new Contacto[size_contactos];
    
    Contacto pedrito; //instancia
    pedrito.nombre = "Pedrito";
    pedrito.mail = "pedrito@itesm.mx";

    Contacto juanito; //instancia
    juanito.nombre = "Juanito";
    juanito.mail = "juanito@itesm.mx";

    agregarContacto(&juanito, listaDeContactos, &numero_elementos_agregados);
    agregarContacto(&pedrito, listaDeContactos, &numero_elementos_agregados);
    cout << numero_elementos_agregados;

    cout << buscarNombre(listaDeContactos, size_contactos, "Pedrito");

    modificarContacto(listaDeContactos,size_contactos, "Pedrito", "pedrito@tec.mx");
    
    cout << pedrito.mail << endl;
}