#include <iostream>
#include <vector>
#include <set>
using namespace std;

void removeDuplicates(vector<int>& numbers) {
    set<int> uniqueNumbers(numbers.begin(), numbers.end());
    numbers.assign(uniqueNumbers.begin(), uniqueNumbers.end());
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8};
    
    cout << "Original numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    
    removeDuplicates(numbers);
    
    cout << "\nNumbers after removing duplicates: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    
    cout << endl;
    return 0;
}