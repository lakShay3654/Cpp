#include <iostream>
#include <vector>
using namespace std;

// Recursive Binary Search
int recursiveSearch(vector<int>& nums, int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;

    if (nums[mid] == target) return mid;
    if (nums[mid] > target) return recursiveSearch(nums, low, mid - 1, target);
    return recursiveSearch(nums, mid + 1, high, target);
}

// Iterative Binary Search
int iterativeSearch(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;

    // Recursive search
    int recResult = recursiveSearch(nums, 0, nums.size() - 1, target);
    cout << "Recursive: " << (recResult != -1 ? "Found at " + to_string(recResult) : "Not found") << endl;

    // Iterative search
    int iterResult = iterativeSearch(nums, target);
    cout << "Iterative: " << (iterResult != -1 ? "Found at " + to_string(iterResult) : "Not found") << endl;

    return 0;
}