/* Crea una agenda digital. El objetivo es que almacenes la información de tus contactos y 
que realices operaciones como agregar, buscar y modificar contactos. La agenda tendrá un 
máximo de 100 contactos (sólo las personas más cercanas a ti).

A. Los atributos de la estructura Contacto son 
    i. Nombre 
    ii. Dirección 
    iii. Teléfono 
    iv. Correo Electrónico 
    v. Cuenta de instagram 
    vi. Cuenta de tiktok 
    vii. Años de conocerlo 
    viii. Relación (amigo, compadre, viejito, cuate, etc.) 

B. Crea una función para agregar un contacto a la lista 

C. Crea una función para buscar un contacto en la lista (busca por nombre) e 
imprime los datos del contacto encontrado y devuelve la posición del arreglo en 
donde se encuentra el contacto 

D. Crea una función para buscar un contacto en la lista (busca por correo electrónico) 
e imprime los datos del contacto encontrado 

/NO HACER: E. Crea una función para modificar los datos de un contacto (sólo se puede modificar 
el correo electrónico del contacto). Utiliza la función anterior buscar para 
identificar a quién quieres modificar 

F. Para probar tu programa deberás crear al menos 5 instancias de Contactos y 
agregarlos a la agenda (lista de máximo 100 contactos). Modifica al menos */

#include <iostream>
#include <string>

struct Contacto //Inciso A
{
    std::string nombre;
    std::string direccion;
    std::string telefono;
    std::string mail;
    std::string ig;
    std::string tiktok;
    std::string años;
    std::string relacion;    
};

void agregarContacto(Contacto *contacto, Contacto *lista, int *posicion) // Inciso B
{
    lista[*posicion] = *contacto;
    (*posicion)++;
}

int buscarNombre(Contacto *lista,int size, std::string nombre) // Inciso C
{
    for(int i = 0; i < size; i++)
    {
        if (lista[i].nombre == nombre)
        {
            return i; // regresa la posición (como entero) en la que se encontró el nombre del contacto
        }
    }
    return -1;
}

int buscarMail(Contacto *lista,int size, std::string mail) // Inciso C
{
    for(int i = 0; i < size; i++)
    {
        if (lista[i].mail == mail)
        {
            return i; // regresa la posición (como entero) en la que se encontró el mail del contacto
        }
    }
    return -1;
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
    std::cout << numero_elementos_agregados << "\n";

    std::cout << buscarNombre(listaDeContactos, size_contactos, "Pedrito \n");
    
    std::cout << pedrito.mail << std::endl;
}