#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int x) {
    vector<vector<int>> result;
    int n = nums.size();

    // Sort the input array in ascending order.
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; // Skip duplicates to avoid duplicate triplets.
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == x) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) {
                    left++; // Skip duplicates.
                }
                while (left < right && nums[right] == nums[right - 1]) {
                    right--; // Skip duplicates.
                }
                left++;
                right--;
            } else if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target sum (x): ";
    cin >> x;

    vector<vector<int>> triplets = threeSum(nums, x);

    if (triplets.empty()) {
        cout << "No triplet with sum " << x << " found." << endl;
    } else {
        cout << "Triplets with sum " << x << " found:" << endl;
        for (vector<int>& triplet : triplets) {
            cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
        }
    }

    return 0;
}
