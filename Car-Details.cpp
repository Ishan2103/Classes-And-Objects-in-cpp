#include <iostream>
#include <string>
using namespace std;
class Car{
public:
    string brand;
    string model;
    int year;
    float price;
};
int main() {
    Car c1,c2,c3;
    cout << "Enter details for Car 1:" << endl;
    cout << "Brand: ";//c1 -  car 1
    cin >> c1.brand;
    cout << "Model: ";
    cin >> c1.model;
    cout << "Year: ";
    cin >> c1.year;
    cout << "Price: ";
    cin >> c1.price;
    cout << "\nEnter details for Car 2:" << endl;
    cout << "Brand: ";//c2  - car2
    cin >> c2.brand;
    cout << "Model: ";
    cin >> c2.model;
    cout << "Year: ";
    cin >> c2.year;
    cout << "Price: ";
    cin >> c2.price;
    cout << "\nEnter details for Car 3:" << endl;
    cout << "Brand: ";//c3 - car 3
    cin >> c3.brand;
    cout << "Model: ";
    cin >> c3.model;
    cout << "Year: ";
    cin >> c3.year;
    cout << "Price: ";
    cin >> c3.price;
    cout << "Car Details";
    cout << "Car 1:Brand: " << c1.brand << "Model: " << c1.model;
    cout<< "Year: " << c1.year << "Price: $" << c1.price << endl;
    cout<<"Car 2:Brand: "<< c2.brand<<"Model: "<< c2.model;
    cout<< "Year: "<< c2.year<< "Price: $"<< c2.price<< endl;
    cout << "Car 3:Brand: " << c3.brand << "Model: " << c3.model;
    cout<< "Year: " << c3.year<<"Price: $"<< c3.price<< endl;
    return 0;
}
