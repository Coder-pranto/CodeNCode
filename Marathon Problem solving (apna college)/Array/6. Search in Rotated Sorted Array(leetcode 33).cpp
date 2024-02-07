

//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

int searchInRotatedSortedArray(vector<int>&nums, int target){
    int n = nums.size();
    int left = 0;
    int right = n-1;

    int mid;
    

    while (left<=right)
    {
        mid = left +(right-left)/2;

        if(nums[mid] == target) return mid;

        else if(nums[mid]>= nums[left]){
            if(target>= nums[left] and target<=nums[mid]){
                right = mid -1;
            }else{
                left = mid+1;
            }

        }else{
            if(target<= nums[right] and target>=nums[mid]){
                left = mid+1;
            }else{
                right = mid -1;
            }

        }
    }
    return -1;
}

int main() {
    vector<int> nums = { 5, 6, 7, 8, 0, 1, 2, 3, 4};
    int target = 6;
    int index = searchInRotatedSortedArray(nums, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}