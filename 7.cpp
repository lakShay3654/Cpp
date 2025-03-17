#include <iostream>
using namespace std;

// Recursive GCD
int gcdRec(int x, int y) {
    return (y == 0) ? x : gcdRec(y, x % y);
}

// Iterative GCD
int gcdIter(int x, int y) {
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    return x;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "GCD (Recursive): " << gcdRec(x, y) << endl;
    cout << "GCD (Iterative): " << gcdIter(x, y) << endl;
    return 0;
}