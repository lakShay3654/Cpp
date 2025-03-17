#include <iostream>
#include <stdexcept>
using namespace std;

class MatrixError : public exception {
public:
    const char* what() const throw() {
        return "Matrix dimensions don't match!";
    }
};

void check(int r1, int c1, int r2, int c2) {
    if (c1 != r2)
        throw MatrixError();
}

int main() {
    try {
        check(2, 6, 4, 2);
    } catch (MatrixError& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}