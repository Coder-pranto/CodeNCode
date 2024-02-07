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


int findMin(int arr[], int n)
{
    int cnt = 0;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (arr[l] == arr[r])
        {
            l++;
            r--;
        }
        else if (arr[l] > arr[r])
        {
            cnt++;
            arr[r - 1] += arr[r];
            r--;
        }
        else if (arr[l] < arr[r])
        {
            cnt++;
            arr[l + 1] += arr[l];
            l++;
        }
    }

    return cnt;
}

int main()
{
    optimize();
int arr[] = { 2,3,1,4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int min = findMin(arr, n);
	cout<<"The minimum number of operations required is : "<< min;
    r0;
}

/* Time Complexity: O(n)
Space Complexity: O(1) */