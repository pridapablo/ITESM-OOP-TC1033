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
class Speakers
{
private:
    string brand;
    int loudness;
    string color;
    int driverSize;
public:
    Speakers();
    Speakers(string brandP, int loudnessP, string colorP, int driverSizeP);

    string getBrand();
    int getLoudness();
    string getColor();
    int getDriverSize();
};
class Headphones
{
private:
    string brand;
    string type;
    int loudness;
    string color;
    int driverSize;
public:
    Headphones();
    Headphones(string brandP, string typeP, int loudnessP, string colorP, int driverSizeP);

    string getBrand();
    string getType();
    int getLoudness();
    string getColor();
    int getDriverSize();
};
class TV
{
private:
    string brand;
    float screenSize;
    string panelType;
    bool isSmart;
public:
    TV();
    TV(string brandP, float screenSizeP, string panelTypeP, bool isSmartP);

    string getBrand();
    float getScreenSize();
    string getPanelType();
    bool getIsSmart();
};
class Consoles
{
private:
    string brand;
    string color;
    int generation;
    int weight;
public:
    Consoles();
    Consoles(string brandP, string colorP, int generationP, int weightP);

    string getBrand();
    string getColor();
    int getGeneration();
    int getWeight();
};
class Monitors
{
private:
    string brand;
    float screenSize;
    string panelType;
    string mountType;
public:
    Monitors();
    Monitors(string brandP, float screenSizeP, string panelTypeP, string mountTypeP);

    string getBrand();
    float getScreenSize();
    string getPanelType();
    string getMountType();
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

// ------------ Implementacion Bocinas ------------
Speakers::Speakers()
{
    brand = "n/a";
    loudness = -1;
    color = "n/a";
    driverSize = -1;
}
Speakers::Speakers(string brandP, int loudnessP, string colorP, int driverSizeP)
{
    brand = brandP;
    loudness = loudnessP;
    color = colorP;
    driverSize = driverSizeP;
}
string Speakers::getBrand()
{
    return brand;
}
int Speakers::getLoudness()
{
    return loudness;
}
string Speakers::getColor()
{
    return color;
}
int Speakers::getDriverSize()
{
    return driverSize;
}
// ----------------------------------------------------

// ------------ Implementacion Audífonos ------------
Headphones::Headphones()
{
    brand = "n/a";
    type = "n/a";
    loudness = -1;
    color = "n/a";
    driverSize = -1;
}
Headphones::Headphones(string brandP, string typeP, int loudnessP, string colorP, int driverSizeP)
{
    brand = brandP;
    type = typeP;
    loudness = loudnessP;
    color = colorP;
    driverSize = driverSizeP;
}
string Headphones::getBrand()
{
    return brand;
}
string Headphones::getType()
{
    return type;
}
int Headphones::getLoudness()
{
    return loudness;
}
string Headphones::getColor()
{
    return color;
}
int Headphones::getDriverSize()
{
    return driverSize;
}
// ----------------------------------------------------

// ------------ Implementacion Televisiones ------------
TV::TV()
{
    brand = "n/a";
    screenSize = -1;
    panelType = "n/a";
    isSmart = false;
}
TV::TV(string brandP, float screenSizeP, string panelTypeP, bool isSmartP)
{
    brand = brandP;
    screenSize = screenSizeP;
    panelType = panelTypeP;
    isSmart = isSmartP;
}
string TV::getBrand()
{
    return brand;
}
float TV::getScreenSize()
{
    return screenSize;
}
string TV::getPanelType()
{
    return panelType;
}
bool TV::getIsSmart()
{
    return isSmart;
}
// ----------------------------------------------------

// ------------ Implementacion Consolas ------------
Consoles::Consoles()
{
    brand = "n/a";
    color = "n/a";
    generation = -1;
    weight = -1;
}
Consoles::Consoles(string brandP, string colorP, int generationP, int weightP)
{
    brand = brandP;
    color = colorP;
    generation = generationP;
    weight = weightP;
}
string Consoles::getBrand()
{
    return brand;
}
string Consoles::getColor()
{
    return color;
}
int Consoles::getGeneration()
{
    return generation;
}
int Consoles::getWeight()
{
    return weight;
}
// ----------------------------------------------------

// ------------ Implementacion Monitores ------------
Monitors::Monitors()
{
    brand = "n/a";
    screenSize = -1;
    panelType = "n/a";
    mountType = "n/a";
}
Monitors::Monitors(string brandP, float screenSizeP, string panelTypeP, string mountTypeP)
{
    brand = brandP;
    screenSize = screenSizeP;
    panelType = panelTypeP;
    mountType = mountTypeP;
}
string Monitors::getBrand()
{
    return brand;
}
float Monitors::getScreenSize()
{
    return screenSize;
}
string Monitors::getPanelType()
{
    return panelType;
}
string Monitors::getMountType()
{
    return mountType;
}
// ----------------------------------------------------


int main()
{
    Phones iPhone_13(300, 2532, 1170, 4, 6.1);
    Computers MacBook_Air("A1932", 2000, 128, 8, 2);
    Tablets iPad_8(300,23,22,3,9.1);
    Cases Samsung_S10_Cover("Rojo","Samsung_S10","Samsung","10 x 5");
    Watches Garmin_Vivoactive_3("Black","Grey",38,"Garmin");
    Speakers Bose_SoundLink_II("Bose",100,"Black",10);
    Headphones AirPods_Pro("Apple","In-Ear",10,"White",1);
    TV Sony_Bravia_50("Sony",50,"4k LCD",true);
    Consoles Xbox_One_X("Microsoft - Xbox","Black",4,2000);
    Monitors BenQ_EyeCare_27("BenQ",27,"1080p LCD","VESA");

    cout << "Bienvenid@ al changarro de Pablo Banzo Prida - A01782031 \n";
    cout << "No. de modelo de la MacBook Air: " << MacBook_Air.getModelNo() << "\n";
    cout << "Tamaño de pantalla del iPhone 13: " << iPhone_13.getScreenSize() << "\n";

    return 0;
}