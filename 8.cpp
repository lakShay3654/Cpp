#include <iostream>
using namespace std;

class Matrix {
    int data[3][3];

public:
    void input() {
        cout << "Enter matrix (3x3):\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> data[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m) {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(Matrix m) {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    result.data[i][j] += data[i][k] * m.data[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.data[i][j] = data[j][i];
            }
        }
        return result;
    }
};

int main() {
    Matrix mat1, mat2, result;
    int option;

    mat1.input();
    mat2.input();

    do {
        cout << "\nMenu:\n1. Add\n2. Multiply\n3. Transpose\n4. Exit\nEnter option: ";
        cin >> option;

        switch (option) {
            case 1:
                result = mat1 + mat2;
                result.display();
                break;
            case 2:
                result = mat1 * mat2;
                result.display();
                break;
            case 3:
                result = mat1.transpose();
                result.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid option!\n";
        }
    } while (option != 4);

    return 0;
}