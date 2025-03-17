#include <iostream>
#include <stdexcept>
using namespace std;

class PrimeError : public exception {
public:
    const char* what() const throw() {
        return "Number must be greater than or equal to 2!";
    }
};

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) {
        throw PrimeError();
    }
    for (int i = 2; i * i <= n; i++) { // Check divisors up to sqrt(n)
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    try {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        if (isPrime(n))
            cout << n << " is a prime number." << endl;
        else
            cout << n << " is not a prime number." << endl;
    } catch (PrimeError& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}