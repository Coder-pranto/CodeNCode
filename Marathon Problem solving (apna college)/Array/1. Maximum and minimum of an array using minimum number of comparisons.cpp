//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;



typedef long long       ll;
#define endl "\n"


//* 1st approach : sorting 
// void getMinMax(int arr[], int n, int& minValue, int& maxValue)
// {
// 	sort(arr, arr + n);

// 	minValue = arr[0];
// 	maxValue = arr[n - 1];
// }

// int main()
// {
// 	int arr[] = { 1000, 11, 445, 1, 330, 3000 };
// 	int arr_size = sizeof(arr) / sizeof(arr[0]);

// 	int minValue, maxValue;
// 	getMinMax(arr, arr_size, minValue, maxValue);

// 	cout << "Minimum element is " << minValue << "\n";
// 	cout << "Maximum element is " << maxValue << "\n";

// 	return 0;
// }
// /* The time complexity of this approach is O(n log n), where n is the number of elements in the array, as we are using a sorting algorithm. The space complexity is O(1), as we are not using any extra space. */


//* 2nd approach : linear search
#include <iostream>
using namespace std;

void getMinMax(int arr[], int n, int& minValue, int& maxValue)
{
	if (n == 0) {
		cerr << "Array is empty." << endl;
		return;
	}

	minValue = maxValue = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] < minValue)
			minValue = arr[i];
		if (arr[i] > maxValue)
			maxValue = arr[i];
	}
}

int main()
{
	int arr[] = { 1000, 11, 445, 1, 330, 3000 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	int minValue, maxValue;
	getMinMax(arr, arr_size, minValue, maxValue);

	cout << "Minimum element is " << minValue << endl;
	cout << "Maximum element is " << maxValue << endl;

	return 0;
}


/* Time Complexity: O(n)
Auxiliary Space: O(1) as no extra space was needed.

In this method, the total number of comparisons is 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case. 
In the above implementation, the worst case occurs when elements are sorted in descending order and the best case occurs when elements are sorted in ascending order. */