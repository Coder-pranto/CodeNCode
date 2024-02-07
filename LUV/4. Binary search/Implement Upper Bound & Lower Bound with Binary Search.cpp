
// #include <bits/stdc++.h>
// using namespace std;

// int Lower_bound(vector<int> &arr,int n, int val)
// {
//     int l = 0, r = n - 1;

//     while (r-l >1)
//     {
//         int mid = (l + r) / 2;
//         if (arr[mid] < val)
//             l = mid + 1;
//         else
//             r = mid;
//     }

//     if(arr[l]>= val) return l;
//     if(arr[r]>= val) return r;

//     return -1;
// }

// int Upper_bound(vector<int> &arr,int n, int val)
// {
//     int l = 0, r = n - 1;

//     while (r-l >1)
//     {
//         int mid = (l + r) / 2;
//         if (arr[mid] <= val)
//             l = mid + 1;
//         else
//             r = mid;
//     }

//     if(arr[l]> val) return l;
//     if(arr[r]> val) return r;

//     return -1;
// }

// int main()
// {
//     vector<int> v = {1, 4, 6, 2, 9, 8, 11, 12, 14, 16};
//     int len = v.size();
//     sort(v.begin(), v.end());

//     cout << "Lower Bound: " << (Lower_bound(v,len,11) != -1 ? v[Lower_bound(v,len,11)]: -1 )<< endl;
//     cout << "Upper Bound: " << (Upper_bound(v,len,13)!= -1 ? v[Upper_bound(v,len,13)]: -1)<< endl;

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else {  // nums[mid] >= target
             right = mid - 1;

        }
    }
    return left;
}

int upperBound(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        } else { //nums[mid] > target
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    vector<int> nums = {1, 4, 6, 2, 9, 8, 11, 56, 223, 34};
    sort(nums.begin(), nums.end());

    int target = 11;
    int lb = lowerBound(nums, target);
    int ub = upperBound(nums, target);

    cout << "Lower Bound: " << lb << endl;
    cout << "Upper Bound: " << ub << endl;

    return 0;
}

