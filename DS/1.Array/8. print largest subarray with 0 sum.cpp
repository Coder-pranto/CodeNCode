#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


//* Hashing Approach

pair<int, int> findLargestSubarrayWithZeroSum(int arr[], int n)
{
    unordered_map<int, int> hashTable;
    int sum = 0;
    int maxLength = 0;
    pair<int, int> result = {-1, -1};

    hashTable[0] = -1; // Insert the initial sum and index into the hash table to handle subarrays starting at index 0.

    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];

        if (hashTable.find(sum) != hashTable.end()) // Check if the current sum already exists in the hash table.
        {
            int currentLength = i - hashTable[sum];
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                result = {hashTable[sum] + 1, i};
            }
        }
        else
        {
            hashTable[sum] = i; // Insert the current sum and index into the hash table.
        }
    }

    return result;
}

int main()
{
    optimize();
    int arr[] = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = sizeof(arr) / sizeof(arr[0]);

    pair<int, int> output = findLargestSubarrayWithZeroSum(arr, n);
    if (output.first != -1 && output.second != -1)
    {
        cout << "Largest subarray with 0 sum found from Index " << output.first << " to " << output.second << endl;
    }
    else
    {
        cout << "No subarray with 0 sum found." << endl;
    }

    r0;
}
