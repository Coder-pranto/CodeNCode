/* Find a triplet that sum to a given value.  */

#include <bits/stdc++.h>
using namespace std;

void find3Numbers(int arr[], int n, int sum)
{

    int l, r;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        int x = arr[i];
        l = i+1;
        r = n - 1;
        while (l < r)
        {
            if (x + arr[l] + arr[r] == sum)
            {
                cout << x << " " << arr[l] << " " << arr[r]<<"\n";
                
            }
            (x + arr[l] + arr[r] < sum ? ++l : --r);
        }
    }
}

bool find3Numbers2(int A[], int arr_size, int sum)
{

    for (int i = 0; i < arr_size - 2; i++)
    {
        unordered_set<int> s;
        int curr_sum = sum - A[i];
        for (int j = i + 1; j < arr_size; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
            {
                cout << A[i] << " " << A[j] << " " << curr_sum - A[j] << "\n";

                return true;
            }
            s.insert(A[j]);
        }
    }

    return false;
}

int main()
{

   int arr[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int len = sizeof(arr) / sizeof(arr[0]);
  
   
    find3Numbers(arr, len, sum);
    find3Numbers2(arr, len, sum);


    return 0;
}
