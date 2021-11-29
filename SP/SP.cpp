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
    int price;
    string name;
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
    void printPhones();
    int getPrice();
    string getName();
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
    int price;
    string name;

public:
    Computers();
    Computers(string modelNoP, int weightP, int storageP, int ramP, int coresP);

    string getModelNo();
    int getWeight();
    int getStorage();
    int getRam();
    int getCores();
    void printComputers();
    int getPrice();
    string getName();
};
class Tablets
{
private:
    int weight;
    int width;
    int height;
    int ram;
    double screenSize;
    int price;
    string name;

public:
    Tablets();
    Tablets(int weightP, int widthP, int heightP, int ramP, double screenSizeP);

    int getWeight();
    int getWidth();
    int getHeight();
    int getRam();
    double getScreenSize();
    void printTablets();
    int getPrice();
    string getName();
};
class Cases
{
private:
    string color;
    string forModel;
    string brand;
    string size;
    int price;
    string name;
public:
    Cases();
    Cases(string colorP, string forModelP, string brandP, string sizeP);

    string getColor();
    string getForModel();
    string getBrand();
    string getSize();
    void printCases();
    int getPrice();
    string getName();
};
class Watches
{
private:
    string caseColor;
    string bandColor;
    int caseSize;
    string brand;
    int price;
    string name;
public:
    Watches();
    Watches(string caseColorP, string bandColorP, int caseSizeP, string brandP);

    string getCaseColor();
    string getBandColor();
    int getCaseSize();
    string getBrand();
    void printWatches();
    int getPrice();
    string getName();
};
class Speakers
{
private:
    string brand;
    int loudness;
    string color;
    int driverSize;
    int price;
    string name;
public:
    Speakers();
    Speakers(string brandP, int loudnessP, string colorP, int driverSizeP);

    string getBrand();
    int getLoudness();
    string getColor();
    int getDriverSize();
    void printSpeakers();
    int getPrice();
    string getName();
};
class Headphones
{
private:
    string brand;
    string type;
    int loudness;
    string color;
    int driverSize;
    int price;
    string name;
public:
    Headphones();
    Headphones(string brandP, string typeP, int loudnessP, string colorP, int driverSizeP);

    string getBrand();
    string getType();
    int getLoudness();
    string getColor();
    int getDriverSize();
    void printHeadphones();
    int getPrice();
    string getName();
};
class TV
{
private:
    string brand;
    float screenSize;
    string panelType;
    bool isSmart;
    int price;
    string name;
public:
    TV();
    TV(string brandP, float screenSizeP, string panelTypeP, bool isSmartP);

    string getBrand();
    float getScreenSize();
    string getPanelType();
    bool getIsSmart();
    void printTV();
    int getPrice();
    string getName();
};
class Consoles
{
private:
    string brand;
    string color;
    int generation;
    int weight;
    int price;
    string name;
public:
    Consoles();
    Consoles(string brandP, string colorP, int generationP, int weightP);

    string getBrand();
    string getColor();
    int getGeneration();
    int getWeight();
    void printConsoles();
    int getPrice();
    string getName();
};
class Monitors
{
private:
    string brand;
    float screenSize;
    string panelType;
    string mountType;
    int price;
    string name;
public:
    Monitors();
    Monitors(string brandP, float screenSizeP, string panelTypeP, string mountTypeP);

    string getBrand();
    float getScreenSize();
    string getPanelType();
    string getMountType();
    void printMonitors();
    int getPrice();
    string getName();
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
void Phones::printPhones()
{
    cout << "Peso: " << weight << "\n";
    cout << "Anchura: " << width << "\n";
    cout << "Altura: " << height << "\n";
    cout << "RAM: " << ram << "\n";
    cout << "Tamaño de pantalla: " << screenSize << "\n";
}
int Phones::getPrice()
{
    return price;
}
string Phones::getName()
{
    return name;
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
void Computers::printComputers()
{
    cout << "Peso: " << weight << "\n";
    cout << "Espacio de disco duro: " << storage << "\n";
    cout << "RAM: " << ram << "\n";
    cout << "Cantidad de nucleos del procesador: " << cores << "\n";
}
int Computers::getPrice()
{
    return price;
}
string Computers::getName()
{
    return name;
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
void Tablets::printTablets()
{
    cout << "Peso: " << weight << "\n";
    cout << "Anchura: " << width << "\n";
    cout << "Altura: " << height << "\n";
    cout << "RAM: " << ram << "\n";
    cout << "Tamaño de pantalla: " << screenSize << "\n";
}
int Tablets::getPrice()
{
    return price;
}
string Tablets::getName()
{
    return name;
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
void Cases::printCases()
{
    cout << "Color: " << color << "\n";
    cout << "Para el modelo de celular: " << forModel << "\n";
    cout << "Marca: " << brand << "\n";
    cout << "Tamaño: " << size << "\n";
}
int Cases::getPrice()
{
    return price;
}
string Cases::getName()
{
    return name;
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
void Watches::printWatches()
{
    cout << "Color de la caja del reloj: " << caseColor << "\n";
    cout << "Color de la correa: " << bandColor << "\n";
    cout << "Tamaño de la caja: " << caseSize << "\n";
    cout << "Marca: " << brand << "\n";
}
int Watches::getPrice()
{
    return price;
}
string Watches::getName()
{
    return name;
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
void Speakers::printSpeakers()
{
    cout << "Marca: " << brand << "\n";
    cout << "Volumen máximo: " << loudness << "\n";
    cout << "Color: " << color << "\n";
    cout << "Tamaño del parlante: " driverSize << "\n";
}
int Speakers::getPrice()
{
    return price;
}
string Speakers::getName()
{
    return name;
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
void Headphones::printHeadphones()
{
    cout << "Marca: " << brand << "\n";
    cout << "Tipo de audífonos: " << type << "\n";
    cout << "Volumen máximo: " << loudness << "\n";
    cout << "Color: " << color << "\n";
    cout << "Tamaño del parlante: " driverSize << "\n";
}
int Headphones::getPrice()
{
    return price;
}
string Headphones::getName()
{
    return name;
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
void TV::printTV()
{
    cout << "Marca: " << brand << "\n";
    cout << "Tamaño de la pantalla: " screenSize << "\n";
    cout << "Tipo de panel: " << panelType << "\n";
    cout << "¿La televison es inteligente?: " << isSmart << "\n";
}
int TV::getPrice()
{
    return price;
}
string TV::getName()
{
    return name;
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
void Consoles::printConsoles()
{
    cout << "Marca : " << brand << "\n";
    cout << "Color: " << color << "\n";
    cout << "Generación de consola: " << generation << "\n";
    cout << "Peso: " << weight << "\n";
}
int Consoles::getPrice()
{
    return price;
}
string Consoles::getName()
{
    return name;
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
void Monitors::printMonitors()
{
    cout << "Marca: " << brand << "\n";
    cout << "Tamaño de pantalla: " << screenSize << "\n";
    cout << "Tipo de pantalla: " << panelType << "\n";
    cout << "Tipo de soporte para pantalla: " << mountType << "\n";
}
int Monitors::getPrice()
{
    return price;
}
string Monitors::getName()
{
    return name;
}
// ----------------------------------------------------

// ------------ Clase Cliente ------------
class Client
{
private:
    string fullName;
    int clientID;
    int maxSizeList;
    int countBoughtItems;
    string* listBoughtItems;
    double totalSpent;
    Client();
public:
    Client(string fullNameP, int clientIDP);
    string getFullName();
    int getClientID();
    double getTotalSpent();
    void addToTotalSpent(double totalSpentP);
    void addBoughtItems(string nombreProductoP);
};

Client::Client(){}
Client::Client(string fullNameP, int clientIDP)
{
    fullNameP = fullNameP;
    clientID = clientIDP;
    maxSizeList = 5;
    countBoughtItems = 0;
    listBoughtItems = new string[maxSizeList];
}
Client::getFullName()
{
    return fullName;
}
Client::getClientID()
{
    return clientID;
}
Client::getTotalSpent()
{
    return totalSpent;
}
Client::addToTotalSpent(double totalSpentP)
{

}
Client::addBoughtItems(string nombreProductoP)
{

}
// ------------------------------------------

// ------------ Clase Tienda ------------
class Store
{
private:
    int minStock;
    int countStockPhones;
    Phones** phoneList;
    Client** ClientList;
    int countClientsAdded;
    int maxSizeClientList;
public:
    Store(int minStockP);
    void listProducts();
    void addPhone(Phones* d);
    int getMinStock();
    int getCountStockPhones();
    void sellPhones(Client* cliente);
};

Store::Store(){}
Store::Store(int minStockP)
{
    minStock = minStockP;
    countStockPhones = 0;
    phoneList = new Phones*[minStock];
    maxSizeClientList = 5;
    countClientsAdded = 0;
    clientList = new Client*[maxSizeClientList];
}
void Store::listProducts()
{
    phoneList[0]->printPhones();
    cout "Total de Telefonos en Stock: " << countStockPhones << "\n";
}
void Store::addPhone(Phones* d)
{
    phoneList[countStockPhones] = d;
    countStockPhones++;
}
int Store::getMinStock()
{
    return minStock;
}
int Store::getCountStockPhones()
{
    return countStockPhones;
}
void Store::sellPhones(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << phoneList[0]->getPrice() << " por el telefono \n"; 
    client->addBoughtItems(phoneList[countStockPhones-1]->getName());  //Se agrega al Cliente la info de lo que compró
    cliente->incrementarTotalGastado(listaDesinfectantes[contadorDesinfectantesEnStock-1]->getPrecio());  //Se agrega al Cliente la info de lo que compró
    contadorDesinfectantesEnStock--;    // se reduce el stock del producto vendido

    clientList[countClientsAdded] = cliente;
    countClientsAdded++;
}
// ------------------------------------------

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
    cout << "Marca funda: " << Samsung_S10_Cover.getBrand() << "\n";
    cout << "Garmin color" << Garmin_Vivoactive_3.getCaseColor() << "\n";
    cout << "Bocina Bose volúmen máximo: " << Bose_SoundLink_II.getLoudness() << "\n";
    cout << "AirPods marca: " << AirPods_Pro.getBrand() << "\n";
    cout << "¿La tele Sony Bravia de 50\" es inteligente?: " << Sony_Bravia_50.getIsSmart() << "\n";
    cout << "Xbox One peso: " << Xbox_One_X.getWeight() << "\n";
    cout << "Tipo de soporte para el monitor BenQ EyeCare: " << BenQ_EyeCare_27.getMountType() << "\n";

    return 0;
}