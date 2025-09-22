#include <iostream>
using namespace std;
class Calculator {
    double x, y;
public:
    Calculator(double a, double b) {
        x = a;
        y = b;
    }
     double add() {
        return x + y;
    }
    double subtract() {
        return x - y;
    }
    double multiply() {
        return x * y;
    }
    double divide() {
        if (y != 0)
            return x / y;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};
int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator calc(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
