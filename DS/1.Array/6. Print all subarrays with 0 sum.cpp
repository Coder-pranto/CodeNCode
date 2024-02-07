//BISMILLAHIR RAHMANIR RAHIM
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




//*Naive approach
vector<pair<int, int> > findSubArrays(int arr[], int n)
{
      vector<pair<int, int> > v;

    for (auto i = 0; i < n; i++)
    {
        int prefix = 0;
        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            if (prefix == 0)
            {
                v.emplace_back(i , j );
            }
        }
    }

    return v;
}

//* Hashing Approach

vector<pair<int, int>> printAllSubarraysWithZeroSum(int arr[], int n)
{
    unordered_map<int, vector<int>> hashTable;
    vector<pair<int, int>>v;
    int sum = 0;

    hashTable[0].push_back(-1); // Insert the initial sum and index into the hash table to handle subarrays starting at index 0.

    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];

        if (hashTable.find(sum) != hashTable.end())// Check if the current sum already exists in the hash table.
        { 
            for (auto &index : hashTable[sum])// If it exists, print all subarrays with zero sum.
            { 
               v.emplace_back(index+1, i);
            }
        }

        hashTable[sum].push_back(i); // Insert the current sum and index into the hash table.
    }

    return v;
}

void print(vector<pair<int, int> > output)
{
    for (auto &u : output)
        cout << "Subarray found from Index " << u.first
             << " to " << u.second << endl;
}

int main()
{
    optimize();
      int arr[] = { 6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
//    vector<pair<int, int> > output = findSubArrays(arr, n);
//    print(output);

   vector<pair<int, int> > output2 = printAllSubarraysWithZeroSum(arr, n);
   print(output2);

    r0;
}