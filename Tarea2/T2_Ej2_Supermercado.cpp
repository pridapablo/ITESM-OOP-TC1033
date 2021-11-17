/* Crea un programa que permita administrar cuánto gasta un cliente en diferentes 
departamentos del supermercado.

A. Los atributos del cliente son: nombre, teléfono y total gastado.   

B. Los diferentes departamentos del supermercado son: (Frutas y verduras, Carnes y 
congelados, Vinos y licores, Dulcería y Artículos de limpieza) 

C. Cada departamento es una función que recibe un cliente, lo saluda “hola Pedrito, 
bienvenido” y pregunta al cliente cuánto gastó. La cantidad que responda el 
cliente deberá sumarse al atributo total gastado de cada cliente.  

/NO HACER D. Crea una función que imprima el total gastado por los clientes que visitaron hoy el 
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
    int total_gastado;
};

// Incisos B y C: funciones departamentos
void frutas_y_verduras(std::string *nombre, int *acumulador)
{
    int total;
    std::cout << "Hola " << *nombre << ", bienvenido \n";
    std::cout << "¿Cuánto gastaste en frutas y verduras? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en frutas y verduras \n";
    (*acumulador) += total;
}
void carnes_y_congelados(std::string *nombre, int *acumulador)
{
    int total;
    std::cout << "Hola " << *nombre << ", bienvenido \n";
    std::cout << "¿Cuánto gastaste en carnes y congelados? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en carnes y congelados \n";
    (*acumulador) += total;
}
void vinos_y_licores(std::string *nombre, int *acumulador)
{
    int total;
    std::cout << "Hola " << *nombre << ", bienvenido \n";
    std::cout << "¿Cuánto gastaste en vinos y licores? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en vinos y licores \n";
    (*acumulador) += total;
}
void dulceria(std::string *nombre, int *acumulador)
{
    int total;
    std::cout << "Hola " << *nombre << ", bienvenido \n";
    std::cout << "¿Cuánto gastaste en dulcería? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en dulcería \n";
    (*acumulador) += total;
}
void articulos_de_limpieza(std::string *nombre, int *acumulador)
{
    int total;
    std::cout << "Hola " << *nombre << ", bienvenido \n";
    std::cout << "¿Cuánto gastaste en artículos de limpieza? ";
    std::cin >> total;
    std::cout << "Gracias por gastar " << total << " pesos en artículos de limpieza \n";
    (*acumulador) += total;
}

// Inciso E: función gasto 
void gasto(Cliente *nombre, Cliente *acumulador)
{
    std::cout << "Hola, soy " << *nombre << " y gasté " << *acumulador << " en el supermercado \n";
}

int main ()
{
    Cliente* lista_de_clientes; 
    int size_clientes = 10;
    int numero_elementos_agregados = 0;
    lista_de_clientes = new Cliente[size_clientes];// Inciso E: arreglo con clientes

    Cliente juanito; //instancia
    juanito.nombre = "Juanito";
    juanito.teléfono = "+52 55 2967 3642";
    juanito.total_gastado = 0;

    Cliente magdita;
    magdita.nombre = "Magdita";
    magdita.teléfono = "+52 55 2967 3042";
    magdita.total_gastado = 0;
    
    Cliente pedrito; 
    pedrito.nombre = "Pedrito";
    pedrito.teléfono = "+52 55 2267 3642";
    pedrito.total_gastado = 0;

    Cliente pablito;
    pablito.nombre = "Pablito";
    pablito.teléfono = "+52 55 2957 3642";
    pablito.total_gastado = 0;

    Cliente lorenita;
    lorenita.nombre = "Lorenita";
    lorenita.teléfono = "+52 55 2967 3542";
    lorenita.total_gastado = 0;

    frutas_y_verduras(&juanito.nombre, &juanito.total_gastado);
    gasto(lista_de_clientes->nombre, &juanito.total_gastado);

    return 0;
}
