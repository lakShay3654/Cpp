#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    // Area with base & height
    double area(double b, double h) {
        return 0.5 * b * h;
    }

    // Area with 3 sides (Heron's formula)
    double area(double a, double b, double c) {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Triangle t;
    cout << "Area (Base, Height): " << t.area(7, 30) << endl;
    cout << "Area (Three Sides): " << t.area(4, 7, 9) << endl;
    return 0;
}