/* Find all triplets with zero sum

Input: arr[] = {0, -1, 2, -3, 1}
Output: (0 -1 1), (2 -3 1)
Explanation: The triplets with zero sum are 0 + -1 + 1 = 0 and 2 + -3 + 1 = 0 

  */

#include <bits/stdc++.h>
using namespace std;


//* T(O(n^2)) , M(O(n))
void findTriplets2(int arr[], int n)
{

    bool found = false;

    for (int i = 0; i <= n - 2; i++)
    {
        unordered_set<int> st;
        for (int j = i + 1; j <= n - 1; j++)
        {
            int x = -(arr[i] + arr[j]);
            if (st.find(x) != st.end())
            {
                cout << arr[i] << " " << arr[j] << " " << x << endl;
                found = true;
            }
            else
            {
                st.insert(arr[j]);
            }
        }
    }

    cout << (found == false ? "Doesn't exist\n" : "");
}

//* T(O(n^2)) , M(O(1))
void findTriplets(int arr[], int n)
{
    sort(arr, arr + n);
    bool found = false;

    for (int i = 0; i <= n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        while (l < r)
        {
            if ((x + arr[l] + arr[r]) == 0)
            {
                cout << x << " " << arr[l] << " " << arr[r] << endl;
                found = true;
                l++;
                r--;
            }
            ((x + arr[l] + arr[r]) < 0 ? ++l : --r);
        }
    }

    if (found == false)
        cout << "doesn't exist\n";
}

int main()
{

    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, n);
    findTriplets2(arr, n);

    return 0;
}
