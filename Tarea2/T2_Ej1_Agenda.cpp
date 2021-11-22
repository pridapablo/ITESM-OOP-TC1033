// Nota: Realizado por Pablo Banzo, con apoyo colaborativo (no copia) de Pablo Bolio, Arantza, Shaul, Sabrina y Oswaldo. 

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

E. Crea una función para modificar los datos de un contacto (sólo se puede modificar 
el correo electrónico del contacto). Utiliza la función anterior buscar para 
identificar a quién quieres modificar 

F. Para probar tu programa deberás crear al menos 5 instancias de Contactos y 
agregarlos a la agenda (lista de máximo 100 contactos). Modifica al menos 1*/

#include <iostream>
#include <string>

using namespace std;

struct Contacto //Inciso A
{
    string nombre;
    string direccion;
    string telefono;
    string mail;
    string ig;
    string tiktok;
    string anios;
    string relacion;    
};

void agregarContacto(Contacto *contacto, Contacto **lista, int *posicion) // Inciso B
{
    lista[*posicion] = contacto;
    (*posicion)++;
}

int buscarNombre(Contacto **lista,int size, string nombre) // Inciso C
{
    for(int i = 0; i < size; i++)
    {
        if (lista[i]->nombre == nombre)
        {
            return i; // regresa la posición (como entero) en la que se encontró el nombre del contacto
        }
    }
    return -1;
}

int buscarMail(Contacto **lista,int size, string mail) // Inciso D
{
    for(int i = 0; i < size; i++)
    {
        if (lista[i]->mail == mail)
        {
            return i; // regresa la posición (como entero) en la que se encontró el mail del contacto
        }
    }
    return -1;
}

void modificarContacto(Contacto** lista, int size, string nombre, string nuevoMail) //Inciso E
{
    int pos = buscarNombre(lista,size,nombre);
    if (pos != -1)
    {
        lista[pos]->mail = nuevoMail;
    }
    else
    {
        cout << "contacto no encontrado \n";
    }
}

int main()
{
    Contacto** listaDeContactos;
    int size_contactos = 100;
    int numero_elementos_agregados = 0;
    listaDeContactos = new Contacto*[size_contactos];
    
    Contacto pedrito; //instancia
    pedrito.nombre = "Pedrito";
    pedrito.mail = "pedrito@itesm.mx";
    pedrito.direccion = "Fuentes de Ortiz";
    pedrito.telefono = "+52 55 8649 7343";
    pedrito.ig = "@pedrigod";
    pedrito.tiktok = "pedrigod";
    pedrito.anios = "2";
    pedrito.relacion = "Hermano";  

    Contacto juanito; //instancia
    juanito.nombre = "Juanito";
    juanito.mail = "juanito@itesm.mx";
    juanito.direccion = "Calle 13";
    juanito.telefono = "+52 54 8646 7345";
    juanito.ig = "@juanitofuchibol";
    juanito.tiktok = "juanitofuchibol";
    juanito.anios = "3";
    juanito.relacion = "Primo";  

    Contacto emigdio;
    emigdio.nombre = "Emigdio";
    emigdio.mail = "emigdio@itesm.mx";
    emigdio.direccion = "Bendita Fe";
    emigdio.telefono = "+52 55 1999 1223";
    emigdio.ig = "@emigdio134";
    emigdio.tiktok = "emigdio134";
    emigdio.anios = "7";
    emigdio.relacion = "Viejito";  
    
    Contacto oswa;
    oswa.nombre = "Oswa";
    oswa.mail = "oswa@itesm.mx";
    oswa.direccion = "Azcapolejos";
    oswa.telefono = "+52 55 1123 1453";
    oswa.ig = "@oswaldoontas";
    oswa.tiktok = "oswaldoontas";
    oswa.anios = "1";
    oswa.relacion = "Cuate";  

    Contacto victoria;
    victoria.nombre = "Ana Vic";
    victoria.mail = "ana_vic@itesm.mx";
    victoria.direccion = "Una galaxia muy lejana";
    victoria.telefono = "+64 77 2845 9240";
    victoria.ig = "@Anitalavalatina";
    victoria.tiktok = "Anitalavalatina";
    victoria.anios = "6";
    victoria.relacion = "Amiga";

    agregarContacto(&juanito, listaDeContactos, &numero_elementos_agregados);
    agregarContacto(&pedrito, listaDeContactos, &numero_elementos_agregados);
    agregarContacto(&emigdio, listaDeContactos, &numero_elementos_agregados);
    agregarContacto(&oswa, listaDeContactos, &numero_elementos_agregados);
    agregarContacto(&victoria, listaDeContactos, &numero_elementos_agregados);

    cout << "Existen " << numero_elementos_agregados << " contactos agregados a la agenda" << "\n";

    modificarContacto(listaDeContactos, size_contactos, "Ana Vic", "ana_vic@tec.mx");
    modificarContacto(listaDeContactos, size_contactos, "Oswa", "oswa@tec.mx");

    cout << "Se han editado los mails siguientes: \n";

    cout << victoria.mail << endl;
    cout << oswa.mail << endl;

    delete [] listaDeContactos;
}