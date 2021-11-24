# include <iostream>
# include <string>
using namespace std;
// ------------ Headers (Clases) ------------
class Celulares
{
private:
    // ------------ Atributos ------------
    int weight;
    int width;
    int height;
    int ram;
    double screenSize;
    // ------------------------------------------

public:
    // ------------ Constructores ------------
    Celulares();
    Celulares(int weightP, int widthP, int heightP, int ramP, double screenSizeP);
    // ------------------------------------------
    
    // ------------ Getters ------------ (uno por cada atributo)
    int getWeight();
    int getWidth();
    int getHeight();
    int getRam();
    double getScreenSize();
    // ------------------------------------------
};
class Computadoras
{
private:
    // ------------ Atributos ------------
    string modelNo;
    int weight;
    int storage;
    int ram;
    int cores;
    // ------------------------------------------

public:
    // ------------ Constructores ------------
    Computadoras();
    Computadoras(string modelNoP, int weightP, int storageP, int ramP, int coresP);
    // ------------------------------------------
    
    // ------------ Getters ------------ (uno por cada atributo)
    string getModelNo();
    int getWeight();
    int getStorage();
    int getRam();
    int getCores();
    // ------------------------------------------
};
// ------------------------------------------

// ------------ Implementacion Celulares ------------
Celulares::Celulares()
{
    weight = -1;
    width = -1;
    height = -1;
    ram = -1;
    screenSize = -1;
}
Celulares::Celulares(int weightP, int widthP, int heightP, int ramP, double screenSizeP)
{
    weight = weightP;
    width = widthP;
    height = heightP;
    ram = ramP;
    screenSize = screenSizeP;
}
int Celulares::getWeight()
{
    return weight;
}
int Celulares::getWidth()
{
    return width;
}
int Celulares::getHeight()
{
    return height;
}
int Celulares::getRam()
{
    return ram;
}
double Celulares::getScreenSize()
{
    return screenSize;
}
// ----------------------------------------------------

// ------------ Implementacion Computadoras ------------ 
Computadoras::Computadoras()
{
    modelNo = "n/a";
    weight = -1;
    storage = -1;
    ram = -1;
    cores = -1;
}
Computadoras::Computadoras(string modelNoP, int weightP, int storageP, int ramP, int coresP)
{
    modelNo = modelNoP;
    weight = weightP;
    storage = storageP;
    ram = ramP;
    cores = coresP;
}
string Computadoras::getModelNo()
{
    return modelNo;
}
int Computadoras::getWeight()
{
    return weight;
}
int Computadoras::getStorage()
{
    return storage;
}
int Computadoras::getRam()
{
    return ram;
}
int Computadoras::getCores()
{
    return cores;
}
// ----------------------------------------------------

int main()
{
    Celulares iPhone_13(300, 2532, 1170, 4, 6.1);
    Computadoras MacBook_Air("A1932", 2000, 128, 8, 2);

    cout << "Bienvenid@ al changarro de Pablo Banzo Prida - A01782031 \n";
    cout << "No. de modelo de la MacBook Air: " << MacBook_Air.getModelNo() << "\n";
    cout << "Tamaño de pantalla del iPhone 13: " << iPhone_13.getScreenSize() << "\n";
    return 0;
}