//* QuickSelect is a selection algorithm used to find the kth smallest (or largest) element in an unordered list or array. It's an efficient algorithm with an average-case time complexity of O(n), where "n" is the number of elements in the list.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {    // for kth largest element ((arr[j] > pivot))
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickSelect(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high);

        if (pivotIndex == k) {
            return arr[pivotIndex];
        } else if (pivotIndex > k) {
            return quickSelect(arr, low, pivotIndex - 1, k);
        } else {
            return quickSelect(arr, pivotIndex + 1, high, k);
        }
    }
    return -1; // Error or out of range
}

int main() {
    vector<int> arr = {1,3, 2, 4, 8, 5};
    // vector<int> arr = {3, 5, 5, 2, 4, 5, 1};//also use for repeated value
    // vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int k = 1; // Find the kth smallest element (0-indexed)
    int n = arr.size();

    if (k >= 0 && k < n) {
        int result = quickSelect(arr, 0, n - 1, k);
        cout << "The " << k + 1 << "th smallest element is: " << result << endl;
    } else {
        cout << "Invalid value of k!" << endl;
    }

    return 0;
}


/* This code implements the Quick Select algorithm to find the kth smallest element in an array. It partitions the array similar to the QuickSort algorithm, but instead of sorting both sides of the pivot, it recursively searches in the side where the desired element is likely to be. */