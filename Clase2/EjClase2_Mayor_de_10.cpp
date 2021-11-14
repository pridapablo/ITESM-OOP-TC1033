#include <iostream>

using namespace std;

int main() 
{
  int input;
  int mayor = 0;

  for(int i = 0; (i<10); i++)
  {
    cout << "Escribe un valor" << endl;
    cin >> input;
    if (input > mayor)
    {
      mayor = input;
    }
  }
  cout << "el mayor es " << mayor << endl;
} 