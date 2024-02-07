#include <iostream>
#include <vector>

using namespace std;

bool findSubarrayWithSum(vector<int>& nums, int x) {
    int n = nums.size();
    int left = 0, right = 0;
    int currentSum = 0;

    while (right < n) {
        currentSum += nums[right];

        while (currentSum > x && left <= right) {
            currentSum -= nums[left];
            left++;
        }

        if (currentSum == x) {
            cout << "Subarray found between indices " << left << " and " << right << endl;
            return true;
        }

        right++;
    }

    cout << "No subarray with the sum " << x << " found." << endl;
    return false;
}

int main() {
    int n, x;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> x;

    if (!findSubarrayWithSum(nums, x)) {
        cout << "No subarray with the sum " << x << " found." << endl;
    }

    return 0;
}
