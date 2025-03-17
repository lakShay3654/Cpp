#include <iostream>
#include <cmath>
using namespace std;

double sumSeries(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i);
        if (i % 2 == 0) sum -= term;
        else sum += term;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter terms: ";
    cin >> n;
    cout << "Sum: " << sumSeries(n) << endl;
    return 0;
}