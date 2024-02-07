//*Find the two non-repeating elements in an array of repeating elements/ Unique Numbers 2
#include <bits/stdc++.h>
using namespace std;

// sorting approach.
void get2NonRepeatingNos(int nums[], int n)
{

    sort(nums, nums + n);

    vector<int> ans;
    for (int i = 0; i < n - 1; i = i + 2)
    {
        if (nums[i] != nums[i + 1])
        {
            ans.push_back(nums[i]);
            i--;
        }
    }

    if (ans.size() == 1)
        ans.push_back(nums[n - 1]);

    cout << "The non-repeating elements are " << ans[0]
         << ", " << ans[1]<<endl;
}

// mapping approach
void get2NonRepeatingNos2(int arr[], int n)
{

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    cout << "The non-repeating elements are ";
    for (auto &x : m)
    {
        if (x.second == 1)
        {
            cout << x.first << ", ";
        }
    }
}

int main()
{
    int arr[] = {2, 3, 7, 9, 11, 2, 3, 11};
    int n = sizeof(arr) / sizeof(*arr);
    get2NonRepeatingNos(arr, n);
    get2NonRepeatingNos2(arr, n);
}
