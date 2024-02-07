#include <iostream>
#include <vector>

using namespace std;

void generateSubarrays(vector<int>& arr, int start, int end, vector<int>& currentSubarray) {
    // Base case: When we reach the end of the array, print the current subarray
    if (start == end) {
        for (auto &num : currentSubarray) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    // Include the current element in the subarray and recurse
    currentSubarray.push_back(arr[start]);
    generateSubarrays(arr, start + 1, end, currentSubarray);

    // Exclude the current element from the subarray and recurse
    currentSubarray.pop_back();
    generateSubarrays(arr, start + 1, end, currentSubarray);
}

void generateAllSubarrays(vector<int>& arr) {
    vector<int> currentSubarray;
    generateSubarrays(arr, 0, arr.size(), currentSubarray);
}

int main() {
    vector<int> arr = {1, 2, 3};
    generateAllSubarrays(arr);
    return 0;
}
