// C++ Program Illustrating Naive Approach to
// Find if There is a Pair in A[0..N-1] with Given Sum
// Using Two-pointers Technique

#include <iostream>
#include <algorithm>

using namespace std;

int isPairSum(int A[], int N, int X)
{
    // represents first pointer
    int i = 0;

    // represents second pointer
    int j = N - 1;

    while (i < j)
    {
        if (A[i] + A[j] == X)
            return 1;
        ((A[i] + A[j] < X) ? i++ : j--);
    }
    return 0;
}


int main()
{

	int arr[] = { 2, 3, 5, 8, 9, 10, 11 };
	
	// value to search
	int val = 17;

	int arrSize = *(&arr + 1) - arr;
	
	// array should be sorted before using two-pointer technique
	sort(arr, arr+7);
	
	cout << (bool)isPairSum(arr, arrSize, val);

	return 0;
}
