# include <iostream>
# include <string>
using namespace std;
// ------------ Headers (Clases) ------------
class Phones
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
    Phones();
    Phones(int weightP, int widthP, int heightP, int ramP, double screenSizeP);
    // ------------------------------------------
    
    // ------------ Getters ------------ (uno por cada atributo)
    int getWeight();
    int getWidth();
    int getHeight();
    int getRam();
    double getScreenSize();
    // ------------------------------------------
};
class Computers
{
private:
    string modelNo;
    int weight;
    int storage;
    int ram;
    int cores;

public:
    Computers();
    Computers(string modelNoP, int weightP, int storageP, int ramP, int coresP);

    string getModelNo();
    int getWeight();
    int getStorage();
    int getRam();
    int getCores();
};
class Tablets
{
private:
    int weight;
    int width;
    int height;
    int ram;
    double screenSize;

public:
    Tablets();
    Tablets(int weightP, int widthP, int heightP, int ramP, double screenSizeP);

    int getWeight();
    int getWidth();
    int getHeight();
    int getRam();
    double getScreenSize();
};
class Cases
{
private:
    string color;
    string forModel;
    string brand;
    string size;
public:
    Cases();
    Cases(string colorP, string forModelP, string brandP, string sizeP);

    string getColor();
    string getForModel();
    string getBrand();
    string getSize();
};
class Watches
{
private:
    string caseColor;
    string bandColor;
    int caseSize;
    string brand;
public:
    Watches();
    Watches(string caseColorP, string bandColorP, int caseSizeP, string brandP);

    string getCaseColor();
    string getBandColor();
    int getCaseSize();
    string getBrand();
};
// ------------------------------------------

// ------------ Implementacion Celulares ------------
Phones::Phones()
{
    weight = -1;
    width = -1;
    height = -1;
    ram = -1;
    screenSize = -1.0;
}
Phones::Phones(int weightP, int widthP, int heightP, int ramP, double screenSizeP)
{
    weight = weightP;
    width = widthP;
    height = heightP;
    ram = ramP;
    screenSize = screenSizeP;
}
int Phones::getWeight()
{
    return weight;
}
int Phones::getWidth()
{
    return width;
}
int Phones::getHeight()
{
    return height;
}
int Phones::getRam()
{
    return ram;
}
double Phones::getScreenSize()
{
    return screenSize;
}
// ----------------------------------------------------

// ------------ Implementacion Computadoras ------------ 
Computers::Computers()
{
    modelNo = "n/a";
    weight = -1;
    storage = -1;
    ram = -1;
    cores = -1;
}
Computers::Computers(string modelNoP, int weightP, int storageP, int ramP, int coresP)
{
    modelNo = modelNoP;
    weight = weightP;
    storage = storageP;
    ram = ramP;
    cores = coresP;
}
string Computers::getModelNo()
{
    return modelNo;
}
int Computers::getWeight()
{
    return weight;
}
int Computers::getStorage()
{
    return storage;
}
int Computers::getRam()
{
    return ram;
}
int Computers::getCores()
{
    return cores;
}
// ----------------------------------------------------

// ------------ Implementacion Tabletas ------------
Tablets::Tablets()
{
    weight = -1;
    width = -1;
    height = -1;
    ram = -1;
    screenSize = -1.0;
}
Tablets::Tablets(int weightP, int widthP, int heightP, int ramP, double screenSizeP)
{
    weight = weightP;
    width = widthP;
    height = heightP;
    ram = ramP;
    screenSize = screenSizeP;
}
int Tablets::getWeight()
{
    return weight;
}
int Tablets::getWidth()
{
    return width;
}
int Tablets::getHeight()
{
    return height;
}
int Tablets::getRam()
{
    return ram;
}
double Tablets::getScreenSize()
{
    return screenSize;
}
// ----------------------------------------------------

// ------------ Implementacion Fundas ------------
Cases::Cases()
{
    color = "n/a";
    forModel = "n/a";
    brand = "n/a";
    size = "n/a";
}
Cases::Cases(string colorP, string forModelP, string brandP, string sizeP)
{
    color = colorP;
    forModel = forModelP;
    brand = brandP;
    size = sizeP;
}
string Cases::getColor()
{
    return color;
}
string Cases::getForModel()
{
    return forModel;
}
string Cases::getBrand()
{
    return brand;
}
string Cases::getSize()
{
    return size;
}
// ----------------------------------------------------

// ------------ Implementacion Relojes ------------
Watches::Watches()
{
    caseColor = "n/a";
    bandColor = "n/a";
    caseSize = -1;
    brand = "n/a";
}
Watches::Watches(string caseColorP, string bandColorP, int caseSizeP, string brandP)
{
    caseColor = caseColorP;
    bandColor = bandColorP;
    caseSize = caseSizeP;
    brand = brandP;
}
string Watches::getCaseColor()
{
    return caseColor;
}
string Watches::getBandColor()
{
    return bandColor;
}
int Watches::getCaseSize()
{
    return caseSize;
}
string Watches::getBrand()
{
    return brand;
}
// ----------------------------------------------------


int main()
{
    Phones iPhone_13(300, 2532, 1170, 4, 6.1);
    Computers MacBook_Air("A1932", 2000, 128, 8, 2);

    cout << "Bienvenid@ al changarro de Pablo Banzo Prida - A01782031 \n";
    cout << "No. de modelo de la MacBook Air: " << MacBook_Air.getModelNo() << "\n";
    cout << "Tamaño de pantalla del iPhone 13: " << iPhone_13.getScreenSize() << "\n";
    return 0;
}