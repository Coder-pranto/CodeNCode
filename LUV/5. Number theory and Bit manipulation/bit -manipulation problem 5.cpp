//* Find the element that appears once

/* Array [] : [a, a, a, b, b, b, c, c, c, d] 
Mathematical Equation = ( 3*(a+b+c+d) – (a + a + a + b + b + b + c + c + c + d) ) / 2
In more simple words: ( 3*(sum_of_array_without_duplicates) – (sum_of_array) ) / 2 */

#include <bits/stdc++.h>
using namespace std;

int singleNumber(int a[], int n)
{
	unordered_set<int> s(a, a + n);

	int arr_sum = accumulate(a, a + n, 0); // sum of array

	int set_sum = accumulate(s.begin(), s.end(), 0); // sum of set

	// applying the formula.
	return (3 * set_sum - arr_sum) / 2;
}


//Using map

int singlenumber2(int a[],int N)
{
    unordered_map<int,int>fmap;

    for(int i = 0; i < N;i++)
    {
        fmap[a[i]]++;
    }
    for(auto it:fmap)
    {
        if(it.second == 1)
        {
            return it.first;
        }
    }
}

// driver function
int main()
{
	int a[] = { 12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7 };

	int n = sizeof(a) / sizeof(a[0]);

	cout << "The element with single occurrence is " << singleNumber(a, n)<<endl;
	cout << "The element with single occurrence is " << singlenumber2(a, n)<<endl;
}

// This code is contributed by Mohit Kumar 29 (IIIT gwalior)
