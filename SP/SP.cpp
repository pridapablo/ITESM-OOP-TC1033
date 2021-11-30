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
    Phones(int weightP, int widthP, int heightP, int ramP, double screenSizeP, int priceP);
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
    Computers(string modelNoP, int weightP, int storageP, int ramP, int coresP, int priceP);

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
    Tablets(int weightP, int widthP, int heightP, int ramP, double screenSizeP, int priceP);

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
    Cases(string colorP, string forModelP, string brandP, string sizeP, int priceP);

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
    Watches(string caseColorP, string bandColorP, int caseSizeP, string brandP, int priceP);

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
    Speakers(string brandP, int loudnessP, string colorP, int driverSizeP, int priceP);

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
    Headphones(string brandP, string typeP, int loudnessP, string colorP, int driverSizeP, int priceP);

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
    TV(string brandP, float screenSizeP, string panelTypeP, bool isSmartP, int priceP);

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
    Consoles(string brandP, string colorP, int generationP, int weightP, int priceP);

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
    Monitors(string brandP, float screenSizeP, string panelTypeP, string mountTypeP, int priceP);

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
Phones::Phones(int weightP, int widthP, int heightP, int ramP, double screenSizeP, int priceP)
{
    weight = weightP;
    width = widthP;
    height = heightP;
    ram = ramP;
    screenSize = screenSizeP;
    price = priceP;
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
Computers::Computers(string modelNoP, int weightP, int storageP, int ramP, int coresP, int priceP)
{
    modelNo = modelNoP;
    weight = weightP;
    storage = storageP;
    ram = ramP;
    cores = coresP;
    price = priceP;
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
Tablets::Tablets(int weightP, int widthP, int heightP, int ramP, double screenSizeP, int priceP)
{
    weight = weightP;
    width = widthP;
    height = heightP;
    ram = ramP;
    screenSize = screenSizeP;
    price = priceP;
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
Cases::Cases(string colorP, string forModelP, string brandP, string sizeP, int priceP)
{
    color = colorP;
    forModel = forModelP;
    brand = brandP;
    size = sizeP;
    price = priceP;
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
Watches::Watches(string caseColorP, string bandColorP, int caseSizeP, string brandP, int priceP)
{
    caseColor = caseColorP;
    bandColor = bandColorP;
    caseSize = caseSizeP;
    brand = brandP;
    price = priceP;
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
Speakers::Speakers(string brandP, int loudnessP, string colorP, int driverSizeP, int priceP)
{
    brand = brandP;
    loudness = loudnessP;
    color = colorP;
    driverSize = driverSizeP;
    price = priceP;
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
    cout << "Tamaño del parlante: " << driverSize << "\n";
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
Headphones::Headphones(string brandP, string typeP, int loudnessP, string colorP, int driverSizeP, int priceP)
{
    brand = brandP;
    type = typeP;
    loudness = loudnessP;
    color = colorP;
    driverSize = driverSizeP;
    price = priceP;
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
    cout << "Tamaño del parlante: " << driverSize << "\n";
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
TV::TV(string brandP, float screenSizeP, string panelTypeP, bool isSmartP, int priceP)
{
    brand = brandP;
    screenSize = screenSizeP;
    panelType = panelTypeP;
    isSmart = isSmartP;
    price = priceP;
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
    cout << "Tamaño de la pantalla: " << screenSize << "\n";
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
Consoles::Consoles(string brandP, string colorP, int generationP, int weightP, int priceP)
{
    brand = brandP;
    color = colorP;
    generation = generationP;
    weight = weightP;
    price = priceP;
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
Monitors::Monitors(string brandP, float screenSizeP, string panelTypeP, string mountTypeP, int priceP)
{
    brand = brandP;
    screenSize = screenSizeP;
    panelType = panelTypeP;
    mountType = mountTypeP;
    price = priceP;
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
    ;
}
void Client::addBoughtItems(string nombreProductoP)
{
    ;
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
void Store::listProducts()
{
    phoneList[0]->printPhones();
    cout << "Total de telefonos en stock: " << countStockPhones << "\n";
    cout << "Total de computadoras en stock: " << countStockComputers << "\n";
    cout << "Total de tabletas en stock: " << countStockTablets << "\n";
    cout << "Total de fundas en stock: " << countStockCases << "\n";
    cout << "Total de relojes en stock: " << countStockWatches << "\n";
    cout << "Total de bocinas en stock: " << countStockSpeakers << "\n";
    cout << "Total de audifonos en stock: " << countStockHeadphones << "\n";
    cout << "Total de televisiones en stock: " << countStockTVs << "\n";
    cout << "Total de consolas en stock: " << countStockConsoles << "\n";
    cout << "Total de monitores en stock: " << countStockMonitors << "\n";
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

    // clientList[countClientsAdded] = cliente;
    // countClientsAdded++;
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
    cout << " pagarás " << phoneList[0]->getPrice() << " por la computadora \n"; 
    client->addBoughtItems(computerList[countStockComputers-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(computerList[countStockComputers-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockComputers--;    // se reduce el stock del producto vendido

    // clientList[countClientsAdded] = cliente;
    // countClientsAdded++;
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

    // clientList[countClientsAdded] = cliente;
    // countClientsAdded++;
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

    // clientList[countClientsAdded] = cliente;
    // countClientsAdded++;
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

    // clientList[countClientsAdded] = cliente;
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
    cout << " pagarás " << watchList[0]->getPrice() << " por la bocina \n"; 
    client->addBoughtItems(watchList[countStockSpeakers-1]->getName());  //Se agrega al Cliente la info de lo que compró
    client->addToTotalSpent(watchList[countStockSpeakers-1]->getPrice());  //Se agrega al Cliente la info de lo que compró
    countStockSpeakers--;    // se reduce el stock del producto vendido

    // clientList[countClientsAdded] = cliente;
    // countClientsAdded++;
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

    // clientList[countClientsAdded] = cliente;
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

    // clientList[countClientsAdded] = cliente;
    // countClientsAdded++;
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

    // clientList[countClientsAdded] = cliente;
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

    // clientList[countClientsAdded] = cliente;
    // countClientsAdded++;
}
// ------------------------------------------


int main()
{
    cout << "Bienvenid@ al changarro de Pablo Banzo Prida - A01782031 \n";
    Store tiendaPablito(5);

    Phones iPhone_13(300, 2532, 1170, 4, 6.1, 23000);
    Phones iPhone_12(300, 2532, 1170, 3, 6.0, 20000);
    tiendaPablito.addPhone(&iPhone_13);
    tiendaPablito.addPhone(&iPhone_12);

    Computers MacBook_Air("A1932", 2000, 128, 8, 2, 320000);
    tiendaPablito.addComputer(&MacBook_Air);

    Tablets iPad_8(300,23,22,3,9.1,10000);
    tiendaPablito.addTablet(&iPad_8);

    Cases Samsung_S10_Cover("Rojo","Samsung_S10","Samsung","10 x 5",500);
    tiendaPablito.addCase(&Samsung_S10_Cover);
    
    Watches Garmin_Vivoactive_3("Black","Grey",38,"Garmin", 3000);
    tiendaPablito.addWatch(&Garmin_Vivoactive_3);
    
    Speakers Bose_SoundLink_II("Bose",100,"Black",10, 3400);
    tiendaPablito.addSpeaker(&Bose_SoundLink_II);
    
    Headphones AirPods_Pro("Apple","In-Ear",10,"White",1, 5000);
    tiendaPablito.addHeadphone(&AirPods_Pro);
    
    TV Sony_Bravia_50("Sony",50,"4k LCD",true, 20000);
    tiendaPablito.addTV(&Sony_Bravia_50);
    
    Consoles Xbox_One_X("Microsoft - Xbox","Black",4,2000, 7399);
    tiendaPablito.addConsole(&Xbox_One_X);
    
    Monitors BenQ_EyeCare_27("BenQ",27,"1080p LCD","VESA", 5999);
    tiendaPablito.addMonitor(&BenQ_EyeCare_27);

    Client pedrito("Pedrito",1);
    tiendaPablito.sellPhone(&pedrito);
    tiendaPablito.sellComputer(&pedrito);
    tiendaPablito.sellCase(&pedrito);
    tiendaPablito.sellWatch(&pedrito);
    tiendaPablito.sellSpeaker(&pedrito);
    tiendaPablito.sellHeadphone(&pedrito);
    tiendaPablito.sellTV(&pedrito);
    tiendaPablito.sellConsole(&pedrito);
    tiendaPablito.sellMonitor(&pedrito);

    tiendaPablito.listProducts();
    
    return 0;
}