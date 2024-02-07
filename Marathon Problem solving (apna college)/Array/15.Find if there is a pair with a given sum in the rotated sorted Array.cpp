//Find if there is a pair with a given sum in the rotated sorted Array

/* 

Approach: First find the largest element in an array which is the pivot point also and the element just after the largest is the smallest element. Once we have the indices of the largest and the smallest elements, we use a similar meet-in-middle algorithm (as discussed here in method 1) to find if there is a pair. 

The only thing new here is indices are incremented and decremented in a rotational manner using modular arithmetic.

Follow the steps mentioned below to implement the idea:


    We will run a for loop from 0 to N-1, to find out the pivot point. 
    Set the left pointer(l) to the smallest value and the right pointer(r) to the highest value.
    To restrict the circular movement within the array we will apply the modulo operation by the size of the array.
    While l ! = r, we shall keep checking if arr[l] + arr[r] = sum.
        If arr[l] + arr[r] is greater than X, update r = (N+r-1) % N.
        If arr[l] + arr[r] is less than X, update l = (l+1) % N.
        If arr[l] + arr[r] is equal to the value X, then return true.
    If no such pair is found after the iteration is complete, return false. */

#include <bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(vector<int> arr, int n, int x)
{
    int start = 0, end = n - 1;
    for(auto i =0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            start = (i+1)%n;
            end = i;
            break;
        }
    }

    while(start != end){
        if(arr[start]+arr[end] == x){
            return true;
        }else if(arr[start]+arr[end] < x){
            start = (start+1)%n;
        }else{
            end = (n+end - 1)%n;
        }
    }

    return false;
}

int main()
{
	vector<int>arr = { 11, 15, 6, 8, 9, 10 };
	int X = 16;
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	if (pairInSortedRotated(arr, N, X))
		cout << "true";
	else
		cout << "false";

	return 0;
}
