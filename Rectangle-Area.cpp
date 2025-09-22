#include <iostream>
using namespace std;
class Rectangle {
    int length, width;
public:
    Rectangle(int l,int w) {
        length = l;
        width = w;
    }
    bool square() {
        return length == width;
    }
    double area() {
        return length * width;
    }
};
int main() {
    int length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    Rectangle r(length, width);
if (r.square())
     cout << "This is a square." << endl;
    else
cout << "This is a rectangle." << endl;
cout << "Area: " << r.area() << endl;
return 0;
}
