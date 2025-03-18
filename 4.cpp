#include <iostream>
#include <cstring>
using namespace std;

// Function to show ASCII values of a string
void showASCII(const char text[]) {
    cout << "ASCII values:\n";
    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i] << " -> " << int(text[i]) << endl;
    }
}

// Function to join two strings
void joinStrings(char result[], const char add[]) {
    int i = 0, j = 0;
    while (result[i] != '\0') i++; // Go to the end of the first string
    while (add[j] != '\0') {
        result[i] = add[j]; // Add the second string
        i++;
        j++;
    }
    result[i] = '\0'; // End the combined string
}

// Function to check if two strings are the same
bool areSame(const char text1[], const char text2[]) {
    int i = 0;
    while (text1[i] != '\0' && text2[i] != '\0') {
        if (text1[i] != text2[i]) {
            return false;
        }
        i++;
    }
    return text1[i] == text2[i];
}

// Function to find the length of a string
int findLength(const char text[]) {
    int len = 0;
    while (text[len] != '\0') {
        len++;
    }
    return len;
}

// Function to change a string to uppercase
void makeUppercase(char text[]) {
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32; // Change to uppercase
        }
        i++;
    }
}

int main() {
    char firstName[100], secondName[100];

    // Get user input
    cout << "Enter first name: ";
    cin.getline(firstName, 100);
    cout << "Enter second name: ";
    cin.getline(secondName, 100);

    // Show ASCII values
    showASCII(firstName);

    // Join names
    char fullName[200];
    strcpy(fullName, firstName); // Copy first name
    joinStrings(fullName, secondName);
    cout << "Joined name: " << fullName << endl;

    // Check if names are the same
    cout << "Are the names the same? " << (areSame(firstName, secondName) ? "Yes" : "No") << endl;

    // Show lengths
    cout << "Length of first name: " << findLength(firstName) << endl;
    cout << "Length of second name: " << findLength(secondName) << endl;

    // Change first name to uppercase
    makeUppercase(firstName);
    cout << "First name in uppercase: " << firstName << endl;

    return 0;
}
