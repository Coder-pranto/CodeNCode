// C++ program to sort an array
// with 0, 1 and 2 in a single pass
#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int arr_size)
{
	int lo = 0;
	int mid = 0;
	int hi = arr_size - 1;


	while (mid <= hi) {
		switch (a[mid]) {

		// If the element is 0
		case 0:
			swap(a[lo++], a[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}


void sortArr(int arr[], int n)
{
	int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;

	// Count the number of 0s, 1s and 2s in the array
	for (i = 0; i < n; i++) {
		switch (arr[i]) {
		case 0:
			cnt0++;
			break;
		case 1:
			cnt1++;
			break;
		case 2:
			cnt2++;
			break;
		}
	}

	// Update the array
	i = 0;

	// Store all the 0s in the beginning
	while (cnt0 > 0) {
		arr[i++] = 0;
		cnt0--;
	}

	// Then all the 1s
	while (cnt1 > 0) {
		arr[i++] = 1;
		cnt1--;
	}

	// Finally all the 2s
	while (cnt2 > 0) {
		arr[i++] = 2;
		cnt2--;
	}
}


void printArray(int arr[], int arr_size)
{
	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort012(arr, n);
    // printArray(arr, n);
    sortArr(arr, n);
    printArray(arr, n);

    return 0;
}
