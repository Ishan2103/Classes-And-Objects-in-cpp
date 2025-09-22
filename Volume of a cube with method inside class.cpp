#include <iostream>
using namespace std;
class Cube {
float side;
public:
    void input() {
        cout << "Enter side of cube: ";
        cin >> side;
    }
    float volume() {
        return side * side * side;
    }
};
int main() {
    Cube c;
    c.input();
    cout <<"Volume: "<<c.volume()<<endl;
    return 0;
}
