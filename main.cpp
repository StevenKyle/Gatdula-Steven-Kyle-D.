#include <iostream>
#include <stdlib.h>

using namespace std;
class Products
{

public:

    void produkto( string productId,string expirationDate, string price, string productName, string manufacturer);
    void kuhaProdukto();
    Products();
    string choice;
    void info()
{

    do {

{
    cout << "Product ID: ";
    cin >> productId;
    cout << "Product Name: ";
    cin >> productName;
    cout << "Price: ";
    cin >> price;
    cout << "Manufacturer: ";
    cin >> manufacturer;
    cout << "Expiration Date: ";
    cin >> expirationDate;

    }
     cout << "Do you want to add products? Y/N: ";
     cin >> choice;
 }
    while (choice == "Y" || choice == "y");
}

private:
    string  price;
    string productId, manufacturer,productName, expirationDate;

};

Products :: Products (void)
{


    cout << "Welcome To Steve's Store" << endl;
    info();

    }





void Products :: kuhaProdukto ()
{
    cout << productId << endl;
    cout << productName << endl;
    cout << price << endl;
    cout << manufacturer << endl;
    cout << expirationDate << endl;

}

int main()
{
    Products products;



    products.kuhaProdukto();



    return 0;
}
