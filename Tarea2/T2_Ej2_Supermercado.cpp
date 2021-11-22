/* Crea un programa que permita administrar cuánto gasta un cliente en diferentes 
departamentos del supermercado.

A. Los atributos del cliente son: nombre, teléfono y total gastado.   

B. Los diferentes departamentos del supermercado son: (Frutas y verduras, Carnes y 
congelados, Vinos y licores, Dulcería y Artículos de limpieza) 

C. Cada departamento es una función que recibe un cliente, lo saluda “hola Pedrito, 
bienvenido” y pregunta al cliente cuánto gastó. La cantidad que responda el 
cliente deberá sumarse al atributo total gastado de cada cliente.  

D. Crea una función que imprima el total gastado por los clientes que visitaron hoy el 
supermercado (la función recibe como parámetro el arreglo de clientes y suma el 
total gastado por cada uno. Al final la función imprime “hola, soy Shedrawiwi y 
hoy gane xxxxx pesos con n clientes” 

E. Para probar tu programa deberás crear al menos 5 clientes. Todos inician con $0 
gastados. Cada cliente deberá pasar por todos los departamentos (en el orden que 
quieras). Una vez que cada cliente termine de pasar por cada departamento 
deberás imprimir el total gastado por cada uno “hola, soy pedrito y gasté xxxxx en 
el supermercado” (te recomiendo que hagas una función para esto). Crea un 
arreglo de Clientes (máximo 10) para que allí guardes a tus 5 clientes. Manda 
llamar la función que imprime cuánto ganó el supermercado el día de hoy (envía 
como parámetro el arreglo de los 5 clientes). */

#include <iostream>
#include <string>

struct Cliente //Inciso A
{
    std::string nombre;
    std::string teléfono;
    int *total_gastado;
};

void nuevoCliente(Cliente* cliente, Cliente** lista, int* pos)
{
    lista[*pos] = cliente;
    (*pos)++;
}

// Incisos B y C: funciones departamentos
void frutas_y_verduras(Cliente *cliente)
{
    int total;
    std::cout << "Hola " << (cliente->nombre) << ", bienvenid@ \n";
    std::cout << "¿Cuánto gastaste en frutas y verduras? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en frutas y verduras \n";
    *(cliente->total_gastado) += total;
}
void carnes_y_congelados(Cliente *cliente)
{
    int total;
    std::cout << "Hola " << (cliente->nombre) << ", bienvenid@ \n";
    std::cout << "¿Cuánto gastaste en carnes y congelados? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en carnes y congelados \n";
    *(cliente->total_gastado) += total;
}
void vinos_y_licores(Cliente *cliente)
{
    int total;
    std::cout << "Hola " << (cliente->nombre) << ", bienvenid@ \n";
    std::cout << "¿Cuánto gastaste en vinos y licores? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en vinos y licores \n";
    *(cliente->total_gastado) += total;
}
void dulceria(Cliente *cliente)
{
    int total;
    std::cout << "Hola " << (cliente->nombre) << ", bienvenid@ \n";
    std::cout << "¿Cuánto gastaste en dulcería? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en dulcería \n";
    *(cliente->total_gastado) += total;
}
void articulos_de_limpieza(Cliente *cliente)
{
    int total;
    std::cout << "Hola " << (cliente->nombre) << ", bienvenid@ \n";
    std::cout << "¿Cuánto gastaste en artículos de limpieza? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en artículos de limpieza \n";
    *(cliente->total_gastado) += total;
}

// Inciso E: gasto cliente
void gasto(Cliente** lista, int size)
{ 
    for (int i =0; i< size; i++)
    {
        int total = 0;
        frutas_y_verduras(lista[i]);
        carnes_y_congelados(lista[i]);
        vinos_y_licores(lista[i]);
        dulceria(lista[i]);
        articulos_de_limpieza(lista[i]);

        std::cout << "Soy " << lista[i]->nombre << " y gasté un total de $" << *(lista[i]->total_gastado) << " en el super \n";
    }
}

// Inciso E: función ganancia 
void gananciaDia(Cliente** lista, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += *(lista[i]->total_gastado);
    }

    std::cout << "Hoy, el supermercado ganó un total de $" << total << "\n";
}

int main ()
{
    Cliente** lista_de_clientes; 
    int size_clientes = 10;
    int numero_clientes_agregados = 0;
    lista_de_clientes = new Cliente*[size_clientes]; // Inciso E: arreglo con clientes

    Cliente juanito; //instancia
    juanito.nombre = "Juanito";
    juanito.teléfono = "+52 55 2967 3642";
    juanito.total_gastado = new int(0);

    Cliente magdita;
    magdita.nombre = "Magdita";
    magdita.teléfono = "+52 55 2967 3042";
    magdita.total_gastado = new int(0);

    Cliente pedrito; 
    pedrito.nombre = "Pedrito";
    pedrito.teléfono = "+52 55 2267 3642";
    pedrito.total_gastado = new int(0);

    Cliente pablito;
    pablito.nombre = "Pablito";
    pablito.teléfono = "+52 55 2957 3642";
    pablito.total_gastado = new int(0);

    Cliente lorenita;
    lorenita.nombre = "Lorenita";
    lorenita.teléfono = "+52 55 2967 3542";
    lorenita.total_gastado = new int(0);

    nuevoCliente(&juanito,lista_de_clientes,&numero_clientes_agregados);
    nuevoCliente(&magdita,lista_de_clientes,&numero_clientes_agregados);
    nuevoCliente(&pedrito,lista_de_clientes,&numero_clientes_agregados);
    nuevoCliente(&pablito,lista_de_clientes,&numero_clientes_agregados);
    nuevoCliente(&lorenita,lista_de_clientes,&numero_clientes_agregados);

    gasto(lista_de_clientes,numero_clientes_agregados);

    gananciaDia(lista_de_clientes,numero_clientes_agregados);

    delete juanito.total_gastado;
    delete magdita.total_gastado;
    delete pedrito.total_gastado;
    delete pablito.total_gastado;
    delete lorenita.total_gastado;
    
    delete [] lista_de_clientes;

    return 0;
}
