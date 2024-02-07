#include <iostream>
#include <vector>
using namespace std;
bool subarrayWithProductExists(const vector<int>& arr, int targetProduct) {
    int n = arr.size();
    int product = 1;
    int left = 0;

    for (int right = 0; right < n; right++) {
        product *= arr[right];

        while (left <= right && product >= targetProduct) {
            if (product == targetProduct) {
                cout << "Subarray found at index " << left << " to " << right << endl;
                return true;
            }
            product /= arr[left];
            left++;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {-2, -1, 3, -4, 5};
    int targetProduct = 2; // Example target product

    if (subarrayWithProductExists(arr, targetProduct)) {
        cout << "Subarray with product " << targetProduct << " exists." << endl;
    } else {
        cout << "Subarray with product " << targetProduct << " does not exist." << endl;
    }

    return 0;
}
