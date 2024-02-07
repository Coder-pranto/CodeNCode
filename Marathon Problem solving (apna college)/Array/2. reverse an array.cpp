//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

void rvereseArray1(int arr[], int start, int end)
{
	while (start < end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}	

void revereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
    swap(arr[start], arr[end]);
    // Recursive Function calling
    revereseArray(arr, start + 1, end - 1); 
}     
  


void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	
	int n = sizeof(arr) / sizeof(arr[0]);


	printArray(arr, n);
	rvereseArray1(arr, 0, n-1);
	cout << "Reversed array is" << endl;
	printArray(arr, n);
	

	

	revereseArray(arr, 0, n-1);
	cout << "Reversed array is" << endl;
	printArray(arr, n);
	
	return 0;
}
