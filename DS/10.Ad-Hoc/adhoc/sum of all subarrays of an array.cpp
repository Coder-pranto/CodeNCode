#include <iostream>
#include <vector>

using namespace std;
//O(N)
int main() {
   
    vector<int> arr = {3, 2, 4, 1};
    int n = arr.size();

    // Compute sum of all subarrays
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i] * (i + 1) * (n - i);//this is the formula
    }

    cout << "Sum of all subarrays: " << sum << endl;

    return 0;
}



//  Simple C++ program to compute sum of
//  subarray elements(O(N^2))
// #include <bits/stdc++.h>
// using namespace std;


// long int SubArraySum(int arr[], int n)
// {
// 	long int result = 0, temp = 0;


// 	for (int i = 0; i < n; i++) {
		
// 		temp = 0;
// 		for (int j = i; j < n; j++) {
			
// 			temp += arr[j];
// 			result += temp;
// 		}
// 	}
// 	return result;
// }


// int main()
// {
// 	int arr[] = { 1, 2, 3 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << "Sum of SubArray : " << SubArraySum(arr, n)
// 		<< endl;
// 	return 0;
// }
