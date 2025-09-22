#include <iostream>
using namespace std;
class Cube {
float side;
public:
    void input() {
    cout << "Enter side of cube: ";
    cin >> side;
    }
float k() {
return side;
    }
};
float volume(Cube c){
    float s = c.k();
    return s*s*s;
}
int main(){
    Cube c;
    c.input();
    cout << "Volume: "<<volume(c)<<endl;
    return 0;
}
