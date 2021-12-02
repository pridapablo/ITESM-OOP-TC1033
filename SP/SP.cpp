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
    double price;
    string name;
    // ------------------------------------------

public:
    // ------------ Constructores ------------
    Phones();
    Phones(string nameP,int weightP, int widthP, int heightP, int ramP, double screenSizeP, double priceP);
    // ------------------------------------------
    
    // ------------ Getters ------------ (uno por cada atributo)
    int getWeight();
    int getWidth();
    int getHeight();
    int getRam();
    double getScreenSize();
    void printPhones();
    double getPrice();
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
    double price;
    string name;

public:
    Computers();
    Computers(string nameP, string modelNoP, int weightP, int storageP, int ramP, int coresP, double priceP);

    string getModelNo();
    int getWeight();
    int getStorage();
    int getRam();
    int getCores();
    void printComputers();
    double getPrice();
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
    double price;
    string name;

public:
    Tablets();
    Tablets(string nameP, int weightP, int widthP, int heightP, int ramP, double screenSizeP, double priceP);

    int getWeight();
    int getWidth();
    int getHeight();
    int getRam();
    double getScreenSize();
    void printTablets();
    double getPrice();
    string getName();
};
class Cases
{
private:
    string color;
    string forModel;
    string brand;
    string size;
    double price;
    string name;
public:
    Cases();
    Cases(string nameP, string colorP, string forModelP, string brandP, string sizeP, double priceP);

    string getColor();
    string getForModel();
    string getBrand();
    string getSize();
    void printCases();
    double getPrice();
    string getName();
};
class Watches
{
private:
    string caseColor;
    string bandColor;
    int caseSize;
    string brand;
    double price;
    string name;
public:
    Watches();
    Watches(string nameP, string caseColorP, string bandColorP, int caseSizeP, string brandP, double priceP);

    string getCaseColor();
    string getBandColor();
    int getCaseSize();
    string getBrand();
    void printWatches();
    double getPrice();
    string getName();
};
class Speakers
{
private:
    string brand;
    int loudness;
    string color;
    int driverSize;
    double price;
    string name;
public:
    Speakers();
    Speakers(string nameP, string brandP, int loudnessP, string colorP, int driverSizeP, double priceP);

    string getBrand();
    int getLoudness();
    string getColor();
    int getDriverSize();
    void printSpeakers();
    double getPrice();
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
    double price;
    string name;
public:
    Headphones();
    Headphones(string nameP, string brandP, string typeP, int loudnessP, string colorP, int driverSizeP, double priceP);

    string getBrand();
    string getType();
    int getLoudness();
    string getColor();
    int getDriverSize();
    void printHeadphones();
    double getPrice();
    string getName();
};
class TV
{
private:
    string brand;
    double screenSize;
    string panelType;
    bool isSmart;
    double price;
    string name;
public:
    TV();
    TV(string nameP, string brandP, double screenSizeP, string panelTypeP, bool isSmartP, double priceP);

    string getBrand();
    double getScreenSize();
    string getPanelType();
    bool getIsSmart();
    void printTV();
    double getPrice();
    string getName();
};
class Consoles
{
private:
    string brand;
    string color;
    int generation;
    int weight;
    double price;
    string name;
public:
    Consoles();
    Consoles(string nameP, string brandP, string colorP, int generationP, int weightP, double priceP);

    string getBrand();
    string getColor();
    int getGeneration();
    int getWeight();
    void printConsoles();
    double getPrice();
    string getName();
};
class Monitors
{
private:
    string brand;
    double screenSize;
    string panelType;
    string mountType;
    double price;
    string name;
public:
    Monitors();
    Monitors(string nameP, string brandP, double screenSizeP, string panelTypeP, string mountTypeP, double priceP);

    string getBrand();
    double getScreenSize();
    string getPanelType();
    string getMountType();
    void printMonitors();
    double getPrice();
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
Phones::Phones(string nameP, int weightP, int widthP, int heightP, int ramP, double screenSizeP, double priceP)
{
    weight = weightP;
    width = widthP;
    height = heightP;
    ram = ramP;
    screenSize = screenSizeP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Peso: " << getWeight() << "\n";
    cout << "Anchura: " << getWidth() << "\n";
    cout << "Altura: " << getHeight() << "\n";
    cout << "RAM: " << getRam() << "\n";
    cout << "Tamaño de pantalla: " << getScreenSize() << "\n";
}
double Phones::getPrice()
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
Computers::Computers(string nameP,string modelNoP, int weightP, int storageP, int ramP, int coresP, double priceP)
{
    modelNo = modelNoP;
    weight = weightP;
    storage = storageP;
    ram = ramP;
    cores = coresP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Peso: " << getWeight() << "\n";
    cout << "Espacio de disco duro: " << getStorage() << "\n";
    cout << "RAM: " << ram << "\n";
    cout << "Cantidad de nucleos del procesador: " << getCores() << "\n";
}
double Computers::getPrice()
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
Tablets::Tablets(string nameP, int weightP, int widthP, int heightP, int ramP, double screenSizeP, double priceP)
{
    weight = weightP;
    width = widthP;
    height = heightP;
    ram = ramP;
    screenSize = screenSizeP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Peso: " << getWeight() << "\n";
    cout << "Anchura: " << getWidth() << "\n";
    cout << "Altura: " << getHeight() << "\n";
    cout << "RAM: " << getRam() << "\n";
    cout << "Tamaño de pantalla: " << screenSize << "\n";
}
double Tablets::getPrice()
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
Cases::Cases(string nameP, string colorP, string forModelP, string brandP, string sizeP, double priceP)
{
    color = colorP;
    forModel = forModelP;
    brand = brandP;
    size = sizeP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Color: " << getColor() << "\n";
    cout << "Para el modelo de celular: " << getForModel() << "\n";
    cout << "Marca: " << getBrand() << "\n";
    cout << "Tamaño: " << getSize() << "\n";
}
double Cases::getPrice()
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
Watches::Watches(string nameP, string caseColorP, string bandColorP, int caseSizeP, string brandP, double priceP)
{
    caseColor = caseColorP;
    bandColor = bandColorP;
    caseSize = caseSizeP;
    brand = brandP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Color de la caja del reloj: " << getCaseColor() << "\n";
    cout << "Color de la correa: " << getBandColor() << "\n";
    cout << "Tamaño de la caja: " << getCaseSize() << "\n";
    cout << "Marca: " << getBrand() << "\n";
}
double Watches::getPrice()
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
Speakers::Speakers(string nameP, string brandP, int loudnessP, string colorP, int driverSizeP, double priceP)
{
    brand = brandP;
    loudness = loudnessP;
    color = colorP;
    driverSize = driverSizeP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Marca: " << getBrand() << "\n";
    cout << "Volumen máximo: " << getLoudness() << "\n";
    cout << "Color: " << getColor() << "\n";
    cout << "Tamaño del parlante: " << getDriverSize() << "\n";
}
double Speakers::getPrice()
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
Headphones::Headphones(string nameP, string brandP, string typeP, int loudnessP, string colorP, int driverSizeP, double priceP)
{
    brand = brandP;
    type = typeP;
    loudness = loudnessP;
    color = colorP;
    driverSize = driverSizeP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Marca: " << getBrand() << "\n";
    cout << "Tipo de audífonos: " << getType() << "\n";
    cout << "Volumen máximo: " << getLoudness() << "\n";
    cout << "Color: " << getColor() << "\n";
    cout << "Tamaño del parlante: " << getDriverSize() << "\n";
}
double Headphones::getPrice()
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
TV::TV(string nameP, string brandP, double screenSizeP, string panelTypeP, bool isSmartP, double priceP)
{
    brand = brandP;
    screenSize = screenSizeP;
    panelType = panelTypeP;
    isSmart = isSmartP;
    price = priceP;
    name = nameP;
}
string TV::getBrand()
{
    return brand;
}
double TV::getScreenSize()
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Marca: " << getBrand() << "\n";
    cout << "Tamaño de la pantalla: " << getScreenSize() << "\n";
    cout << "Tipo de panel: " << getPanelType() << "\n";
    cout << "¿La televison es inteligente?: " << getIsSmart() << "\n";
}
double TV::getPrice()
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
Consoles::Consoles(string nameP, string brandP, string colorP, int generationP, int weightP, double priceP)
{
    brand = brandP;
    color = colorP;
    generation = generationP;
    weight = weightP;
    price = priceP;
    name = nameP;
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Marca : " << getBrand() << "\n";
    cout << "Color: " << getColor() << "\n";
    cout << "Generación de consola: " << getGeneration() << "\n";
    cout << "Peso: " << getWeight() << "\n";
}
double Consoles::getPrice()
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
Monitors::Monitors(string nameP, string brandP, double screenSizeP, string panelTypeP, string mountTypeP, double priceP)
{
    brand = brandP;
    screenSize = screenSizeP;
    panelType = panelTypeP;
    mountType = mountTypeP;
    price = priceP;
    name = nameP;
}
string Monitors::getBrand()
{
    return brand;
}
double Monitors::getScreenSize()
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
    cout << "Nombre: " << getName() << "\n";
    cout << "Costo: " << getPrice() << "\n";
    cout << "Marca: " << getBrand() << "\n";
    cout << "Tamaño de pantalla: " << getScreenSize() << "\n";
    cout << "Tipo de pantalla: " << getPanelType() << "\n";
    cout << "Tipo de soporte para pantalla: " << getMountType() << "\n";
}
double Monitors::getPrice()
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
    string *listBoughtItems;
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
    fullName = fullNameP;
    clientID = clientIDP;
    maxSizeList = 5;
    countBoughtItems = 0;
    listBoughtItems = new string[maxSizeList];
}
string Client::getFullName()
{
    return fullName;
}
int Client::getClientID()
{
    return clientID;
}
double Client::getTotalSpent()
{
    return totalSpent;
}
void Client::addToTotalSpent(double totalSpentP)
{
    totalSpent += totalSpentP;
}
void Client::addBoughtItems(string nombreProductoP)
{
    //listBoughtItems[countBoughtItems] = nombreProductoP;
    countBoughtItems++;
}
// ------------------------------------------

// ------------ Clase Tienda ------------
class Store
{
private:
    int minStock;
    Client** clientList;
    
    int countClientsAdded;
    int maxSizeClientList;

    Phones** phoneList;
    int countStockPhones;

    Computers** computerList;
    int countStockComputers;

    Tablets** tabletList;
    int countStockTablets;

    Cases** caseList;
    int countStockCases;

    Watches** watchList;
    int countStockWatches;

    Speakers** speakerList;
    int countStockSpeakers;

    Headphones** headphoneList;
    int countStockHeadphones;

    TV** tvList;
    int countStockTVs;

    Consoles** consoleList;
    int countStockConsoles;

    Monitors** monitorList;
    int countStockMonitors;

    Store();
public:
    Store(int minStockP);
    ~Store();
    void listProducts();
    int getMinStock();

    void addPhone(Phones* d);
    int getCountStockPhones();
    void sellPhone(Client* cliente);

    void addComputer(Computers* d);
    int getCountStockComputers();
    void sellComputer(Client* cliente);

    void addTablet(Tablets* d);
    int getCountStockTablets();
    void sellTablet(Client* cliente);

    void addCase(Cases* d);
    int getCountStockCases();
    void sellCase(Client* cliente);

    void addWatch(Watches* d);
    int getCountStockWatches();
    void sellWatch(Client* cliente);

    void addSpeaker(Speakers* d);
    int getCountStockSpeakers();
    void sellSpeaker(Client* cliente);

    void addHeadphone(Headphones* d);
    int getCountStockHeadphones();
    void sellHeadphone(Client* cliente);

    void addTV(TV* d);
    int getCountStockTVs();
    void sellTV(Client* cliente);

    void addConsole(Consoles* d);
    int getCountStockConsoles();
    void sellConsole(Client* cliente);

    void addMonitor(Monitors* d);
    int getCountStockMonitors();
    void sellMonitor(Client* cliente);

    void printTotalSales();
    void printBoughtItems();
};

Store::Store(){}
Store::Store(int minStockP)
{
    minStock = minStockP;

    countStockPhones = 0;
    phoneList = new Phones*[minStock];
    
    countStockComputers = 0;
    computerList = new Computers*[minStock];
    
    countStockTablets = 0;
    tabletList = new Tablets*[minStock];

    countStockCases = 0;
    caseList = new Cases*[minStock];

    countStockWatches = 0;
    watchList = new Watches*[minStock];

    countStockSpeakers = 0;
    speakerList = new Speakers*[minStock];

    countStockHeadphones = 0;
    headphoneList = new Headphones*[minStock];

    countStockTVs = 0;
    tvList = new TV*[minStock];

    countStockConsoles = 0;
    consoleList = new Consoles*[minStock];

    countStockMonitors = 0;
    monitorList = new Monitors*[minStock];

    maxSizeClientList = 5;
    countClientsAdded = 0;
    clientList = new Client*[maxSizeClientList];
}
Store::~Store()
{
    delete [] phoneList;
    delete [] computerList;
    delete [] tabletList;
    delete [] caseList;
    delete [] watchList;
    delete [] speakerList;
    delete [] headphoneList;
    delete [] tvList;
    delete [] consoleList;
    delete [] monitorList;
}
void Store::listProducts()
{
    cout << "Total de telefonos en stock: " << countStockPhones << "\n";
    if (countStockPhones != 0)
    {
        phoneList[0]->printPhones();
    }
    cout << "Total de computadoras en stock: " << countStockComputers << "\n";
    if (countStockComputers != 0)
    {
        computerList[0]->printComputers();
    }
    cout << "Total de tabletas en stock: " << countStockTablets << "\n";
    if (countStockTablets != 0)
    {
        tabletList[0]->printTablets();
    }
    cout << "Total de fundas en stock: " << countStockCases << "\n";
    if (countStockCases != 0)
    {
        caseList[0]->printCases();
    }
    cout << "Total de relojes en stock: " << countStockWatches << "\n";
    if (countStockWatches != 0)
    {
        watchList[0]->printWatches();
    }
    cout << "Total de bocinas en stock: " << countStockSpeakers << "\n";
    if (countStockSpeakers != 0)
    {
        speakerList[0]->printSpeakers();
    }
    cout << "Total de audifonos en stock: " << countStockHeadphones << "\n";
    if (countStockHeadphones != 0)
    {
        headphoneList[0]->printHeadphones();
    }
    cout << "Total de televisiones en stock: " << countStockTVs << "\n";
    if (countStockTVs != 0)
    {
        tvList[0]->printTV();
    }
    cout << "Total de consolas en stock: " << countStockConsoles << "\n";
    if (countStockConsoles != 0)
    {
        consoleList[0]->printConsoles();
    }
    cout << "Total de monitores en stock: " << countStockMonitors << "\n";
    if (countStockMonitors != 0)
    {
        monitorList[0]->printMonitors();
    }
}
int Store::getMinStock()
{
    return minStock;
}

void Store::addPhone(Phones* d)
{
    phoneList[countStockPhones] = d;
    countStockPhones++;
}
int Store::getCountStockPhones()
{
    return countStockPhones;
}
void Store::sellPhone(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << phoneList[0]->getPrice() << " por el telefono \n"; 
    client->addBoughtItems(phoneList[countStockPhones-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(phoneList[countStockPhones-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockPhones--;    // se reduce el stock del producto vendido
    phoneList[countStockPhones-1] = 0; //quito la dirección de la lista

    clientList[countClientsAdded] = client; //postincremento directo en la línea
    countClientsAdded++;
}

void Store::addComputer(Computers* d)
{
    computerList[countStockComputers] = d;
    countStockComputers++;
}
int Store::getCountStockComputers()
{
    return countStockComputers;
}
void Store::sellComputer(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << computerList[0]->getPrice() << " por la computadora \n"; 
    client->addBoughtItems(computerList[countStockComputers-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(computerList[countStockComputers-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockComputers--;    // se reduce el stock del producto vendido
    computerList[countStockComputers-1] = 0; //quito la dirección de la lista
    clientList[countClientsAdded] = client; //postincremento directo en la línea
    countClientsAdded++;
}

void Store::addTablet(Tablets* d)
{
    tabletList[countStockTablets] = d;
    countStockTablets++;
}
int Store::getCountStockTablets()
{
    return countStockTablets;
}
void Store::sellTablet(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << tabletList[0]->getPrice() << " por la tableta \n"; 
    client->addBoughtItems(tabletList[countStockTablets-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(tabletList[countStockTablets-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockTablets--;    // se reduce el stock del producto vendido
    tabletList[countStockTablets-1] = 0; //quito la dirección de la lista
    clientList[countClientsAdded] = client; //postincremento directo en la línea
    countClientsAdded++;
}

void Store::addCase(Cases* d)
{
    caseList[countStockCases] = d;
    countStockCases++;
}
int Store::getCountStockCases()
{
    return countStockCases;
}
void Store::sellCase(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << caseList[0]->getPrice() << " por la funda \n"; 
    client->addBoughtItems(caseList[countStockTablets-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(caseList[countStockTablets-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockCases--;    // se reduce el stock del producto vendido
    caseList[countStockCases-1] = 0; //quito la dirección de la lista
    clientList[countClientsAdded] = client; //postincremento directo en la línea
    countClientsAdded++;
}

void Store::addWatch(Watches* d)
{
    watchList[countStockWatches] = d;
    countStockWatches++;
}
int Store::getCountStockWatches()
{
    return countStockWatches;
}
void Store::sellWatch(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << watchList[0]->getPrice() << " por el reloj \n"; 
    client->addBoughtItems(watchList[countStockWatches-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(watchList[countStockWatches-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockWatches--;    // se reduce el stock del producto vendido
    watchList[countStockWatches-1] = 0; //quito la dirección de la lista
    // clientList[countClientsAdded] = client; //postincremento directo en la línea
    // countClientsAdded++;
}

void Store::addSpeaker(Speakers* d)
{
    speakerList[countStockSpeakers] = d;
    countStockSpeakers++;
}
int Store::getCountStockSpeakers()
{
    return countStockSpeakers;
}
void Store::sellSpeaker(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << speakerList[0]->getPrice() << " por la bocina \n"; 
    client->addBoughtItems(speakerList[countStockSpeakers-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(speakerList[countStockSpeakers-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockSpeakers--;    // se reduce el stock del producto vendido
    speakerList[countStockSpeakers-1] = 0; //quito la dirección de la lista
    clientList[countClientsAdded] = client; //postincremento directo en la línea
    countClientsAdded++;
}

void Store::addHeadphone(Headphones* d)
{
    headphoneList[countStockHeadphones] = d;
    countStockHeadphones++;
}
int Store::getCountStockHeadphones()
{
    return countStockHeadphones;
}
void Store::sellHeadphone(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << headphoneList[0]->getPrice() << " por los audifonos \n"; 
    client->addBoughtItems(headphoneList[countStockHeadphones-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(headphoneList[countStockHeadphones-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockHeadphones--;    // se reduce el stock del producto vendido
    headphoneList[countStockHeadphones-1] = 0; //quito la dirección de la lista
    // clientList[countClientsAdded] = client; //postincremento directo en la línea
    // countClientsAdded++;
}

void Store::addTV(TV* d)
{
    tvList[countStockTVs] = d;
    countStockTVs++;
}
int Store::getCountStockTVs()
{
    return countStockTVs;
}
void Store::sellTV(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << tvList[0]->getPrice() << " por la televison \n"; 
    client->addBoughtItems(tvList[countStockTVs-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(tvList[countStockTVs-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockTVs--;    // se reduce el stock del producto vendido
    tvList[countStockTVs-1] = 0; //quito la dirección de la lista
    clientList[countClientsAdded] = client; //postincremento directo en la línea
    countClientsAdded++;
}

void Store::addConsole(Consoles* d)
{
    consoleList[countStockConsoles] = d;
    countStockConsoles++;
}
int Store::getCountStockConsoles()
{
    return countStockConsoles;
}
void Store::sellConsole(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << consoleList[0]->getPrice() << " por la consola \n"; 
    client->addBoughtItems(consoleList[countStockConsoles-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(consoleList[countStockConsoles-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockConsoles--;    // se reduce el stock del producto vendido
    consoleList[countStockConsoles-1] = 0; //quito la dirección de la lista
    // clientList[countClientsAdded] = client; //postincremento directo en la línea
    // countClientsAdded++;
}

void Store::addMonitor(Monitors* d)
{
    monitorList[countStockMonitors] = d;
    countStockMonitors++;
}
int Store::getCountStockMonitors()
{
    return countStockMonitors;
}
void Store::sellMonitor(Client* client)
{
    cout << "Bienvenid@ " << client->getFullName();
    cout << " pagarás " << monitorList[0]->getPrice() << " por el monitor \n"; 
    client->addBoughtItems(monitorList[countStockMonitors-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(monitorList[countStockMonitors-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockMonitors--;    // se reduce el stock del producto vendido
    monitorList[countStockMonitors-1] = 0; //quito la dirección de la lista
    // clientList[countClientsAdded] = client; //postincremento directo en la línea
    // countClientsAdded++;
}

void Store::printTotalSales()
{
    double totalSales = 0;
    for (int i = 0; i < countClientsAdded; i++)
    {
        totalSales += clientList[i]->getTotalSpent();
    }
    cout << "El total vendido fue: $" << totalSales << "\n";
}
void Store::printBoughtItems()
{
    for (int i = 0; i < countClientsAdded; i++)
    {
        string name = clientList[i]->getFullName();
        double total_spent = clientList[i]->getTotalSpent();
        
        cout << name << " gastó $" << total_spent << "\n";
    }
    
}
// ------------------------------------------


int main()
{
    cout << "Bienvenid@ al changarro de Pablo Banzo Prida - A01782031 \n";
    Store tiendaPablito(5);

    Phones iPhone_13("iPhone 13",300, 2532, 1170, 4, 6.1, 23000);
    tiendaPablito.addPhone(&iPhone_13);

    Computers MacBook_Air("MacBook Air","A1932", 2000, 128, 8, 2, 320000);
    tiendaPablito.addComputer(&MacBook_Air);

    Tablets iPad_8("iPad 8",300,23,22,3,9.1,10000);
    tiendaPablito.addTablet(&iPad_8);

    Cases Samsung_S10_Cover("Samsung S10 Funda","Rojo","Samsung_S10","Samsung","10 x 5",500);
    tiendaPablito.addCase(&Samsung_S10_Cover);
    
    Watches Garmin_Vivoactive_3("Garmin Vivoactive 3","Black","Grey",38,"Garmin", 3000);
    tiendaPablito.addWatch(&Garmin_Vivoactive_3);
    
    Speakers Bose_SoundLink_II("SoundLink_II","Bose",100,"Black",10, 3400);
    tiendaPablito.addSpeaker(&Bose_SoundLink_II);
    
    Headphones AirPods_Pro("AirPods Pro","Apple","In-Ear",10,"White",1, 5000);
    tiendaPablito.addHeadphone(&AirPods_Pro);
    
    TV Sony_Bravia_50("Sony Bravia 50","Sony",50,"4k LCD",true, 20000);
    tiendaPablito.addTV(&Sony_Bravia_50);
    
    Consoles Xbox_One_X("Xbox One X","Microsoft - Xbox","Black",4,2000, 7399);
    tiendaPablito.addConsole(&Xbox_One_X);
    
    Monitors BenQ_EyeCare_27("BenQ EyeCare 27","BenQ",27,"1080p LCD","VESA", 5999);
    tiendaPablito.addMonitor(&BenQ_EyeCare_27);

    // poner más de 1 cliente
    Client pedrito("Pedrito",1);
    Client juanito("Juanito",2);
    
    tiendaPablito.sellPhone(&pedrito);
    tiendaPablito.sellComputer(&pedrito);
    tiendaPablito.sellCase(&juanito);
    tiendaPablito.sellWatch(&pedrito);
    tiendaPablito.sellSpeaker(&juanito);
    tiendaPablito.sellHeadphone(&pedrito);
    tiendaPablito.sellTV(&juanito);
    tiendaPablito.sellConsole(&pedrito);
    tiendaPablito.sellMonitor(&pedrito);

    // Lista de productos
    tiendaPablito.listProducts();

    // Total de productos vendidos
    tiendaPablito.printTotalSales();
    
    // Clientes a los que se le vendió y cuanto se les vendió
    tiendaPablito.printBoughtItems();

    return 0;
}

// Por hacer:
// ARREGLAR ERROR DE SEGMENTACIÓN en las ventas de la lista de clientes... ni idea que onda
// ARREGLAR LOOP DEL MÉTODO printBoughtItems()... debería solo imprimir 2 clientes pero imprime 5 ¿Por qué el contador es = 5 cuando solo agregué a 2 clientes?
// Ver si se deben de quitar los if's del método listProducts() y arreglar el hecho de que al vender un producto deje de imprimirse (ver como eliminarlo de la lista)