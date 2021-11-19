# include <iostream>
# include <string>
using namespace std;

struct Persona
{
    string nombre;
    string correo;
    int presupuesto;
};
struct Fecha
{
    int dia;
    string mes;
    int anio;
};
struct Boleto
{
    string tipo;
    string precio;
    Fecha fechaCompra; //usando una estructura que nos permita guardar fechas
};

struct Cliente //el cliente está formado por persona y boleto (es una estructura compleja porque tiene otra estructura adentro)
{
    Persona* persona; //quiero que mi cliente no sea una copia, que sea una referencia
    Boleto boleto; //una vez que se usa el boleto se puede borrar, entonces no pasa nada si no lo hago apuntador
};

void venderBoletos(Cliente **lista, int size, int *numVendidos, Persona* p, string tipo, int precio)
{
    if(*numVendidos >= 10)
    {
        cout << "Ya no hay boletos \n";
    }
    else
    {
        if (p->presupuesto >= precio)
        {
            Fecha fechaCompra;
            fechaCompra.dia = 17;
            fechaCompra.mes = "nov";
            fechaCompra.anio = 2021;

            Boleto b;
            b.tipo = tipo;
            b.precio = precio;
            b.fechaCompra = fechaCompra;

            //creo un cliente
            Cliente* c = new Cliente; //c es una dirección que guarda clientes 
            c->persona = p; //persona es una dirección y se crea una copia (no hay problema)
            c->boleto = b; //la flecha -> se usa cuando el apuntador apunta a una estructura

            p->presupuesto -= precio;

            lista[(*numVendidos)++] = c; //en esta lista guadrdé una dirección
        }
        else 
        {
            cout << "Sorry, no te alcanza \n";
        }
         
    }
}

void imprimirClientesAtendidos(Cliente** lista, int size, int registrados)
{
    for(int i=0; i<registrados; i++)
    {
        cout << "cliente: " << lista[i]->persona->nombre << "\n";
        cout << "su presupuesto restante es: " << lista[i]->persona->presupuesto << "\n";
    }
}

int main()
{
    Persona juanito;
    juanito.nombre = "Juanito";
    juanito.correo = "juanito@tec.mx";
    juanito.presupuesto = 1000;

    int size = 10;
    int clientesRegistrados = 0;
    Cliente ** listaClientes = new Cliente*[size];

    venderBoletos(listaClientes, size, &clientesRegistrados, &juanito, "VIP", 200);

    imprimirClientesAtendidos(listaClientes, size, clientesRegistrados);
    
    for (int i = 0;  i < clientesRegistrados; i++)
    {
        delete listaClientes[i]; //libero cada uno de los elementos de la lista
    }

    delete [] listaClientes; //los deletes deben estar en el mismo scope que sus news
}