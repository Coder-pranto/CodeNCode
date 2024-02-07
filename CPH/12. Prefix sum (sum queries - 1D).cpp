//*Static array queries


//*Sum queries - 1

/* This technique is commonly known as "Prefix Sum" or "Cumulative Sum." It's used to efficiently calculate the sum of values in a given range of elements in an array. The prefix sum array stores the cumulative sum of elements up to each position in the original array, making it easy to compute sums for any range.



Prefix Sum (Cumulative Sum)

    Given an array nums of length n, we construct a prefix sum array prefixSum of the same length.
    prefixSum[i] stores the sum of all elements in the original array nums from index 0 to i (inclusive).
    With the prefix sum array, we can calculate the sum of elements in any subarray [a, b] efficiently as prefixSum[b]prefixSum[a-1] (considering prefixSum[-1] = 0). */


#include <iostream>
#include <vector>

using namespace std;

vector<int> calculatePrefixSum(const vector<int>& nums) {
    int n = nums.size();
    vector<int> prefixSum(n, 0);

    // Calculate prefix sum
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    return prefixSum;
}

int sumRange(const vector<int>& prefixSum, int left, int right) {
    if (left == 0) {
        return prefixSum[right];
    } else {
        return prefixSum[right] - prefixSum[left - 1];
    }
}

int main() {
    vector<int> nums = {1, 3, 4, 8, 6, 1, 4, 2};

    vector<int> prefixSum = calculatePrefixSum(nums);

    int left = 3, right = 6;
    int result = sumRange(prefixSum, left, right);

    cout << "Sum of elements in range [" << left << ", " << right << "]: " << result << endl;

    return 0;
}
