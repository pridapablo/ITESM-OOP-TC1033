// /* Programa que indica si un valor X es un número circular primo. Los números circulares 
// primos son aquellos que son números primos y que todas las rotaciones de dicho número 
// también son primos. Ej. El número 197 es circular primo pq es primo y su primera rotación 
// 971 también es primo y su segunda rotación 719 también es primo. */

// #include <iostream>
// #include <string>
// #include <math.h>
// #include <cmath>

// using namespace std;

// int rotar(int *x)
// {
//     string wow = to_string(*x);
//     int digitos = wow.length();
//     int digito_ultimo = 0;

//     int rot = 0;


//     while (x > 0)
//     {
//         if (0 < *x && *x < 10)
//         {
//           rot = *x;
//           break;
//         }

//         digito_ultimo = *x%10;
//         rot = (*x - digito_ultimo) / 10;
//         rot = rot + (digito_ultimo*(pow(10,digitos)));
//         break;
//         }
//     }

//     return rot;
// }

// bool es_circular_primo(int *num)
// {
//     ;
// }

// int main ()
// {
//     int x = 197;

//     if (es_circular_primo(&x))
//     {
//         return 1;
//         std::cout << "El número " << x << " es circular primo";
//     }

//     else 
//     {
//         return 0;
//         std::cout << "El número " << x << " no es circular primo";
//     }
// }
