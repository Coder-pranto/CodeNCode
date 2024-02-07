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

//* Naive approach

int equilibrium(int arr[], int n)
{
    int left, right;

    for (int i = 0; i < n; i++)
    {

        left = 0;
        for (int j = 0; j < i; j++)
        {
            left += arr[j];
        }
        right = 0;
        for (int j = i + 1; j < n; j++)
        {
            right += arr[j];
        }

        if (left == right)
            return i;
    }

    return -1;
}

//* Array-sum approach
int equilibrium2(int arr[], int n)
{

    int sum = accumulate(arr, arr + n, 0);
    int left = 0;

    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];

        if (sum == left)
        {
            return i;
        }

        left += arr[i];
    }

    return -1;
}


//* Prefix-sum approach
int equilibrium3(int arr[], int n)
{

    if (n == 1)
        return 0;

    int left[n] = {0};
    int right[n] = {0};

    left[0] = arr[0];
    right[n-1] = arr[n-1];

    for(auto i =1; i<n; i++){
        left[i] = left[i-1]+arr[i];
    }
    for(auto i=n-2; i>=0; i--){
        right[i] = right[i+1]+arr[i];
    }

    for(auto i =0; i<n; i++){
       if(left[i] == right[i])
       return i;
    }

    return -1;
}

//* Two pointer approach
int equilibrium4(int arr[], int n)
{

    if (n < 3)
        return 0;

   int pivot , left, right;
   pivot = left = right =0;

   right  = accumulate(arr+1, arr+n, 0);
   while(pivot< n- 1 && left != right){
    pivot++;
    right -= arr[pivot];
    left += arr[pivot - 1];
   }

   return (left == right) ? pivot : -1;

}

int main()
{
    optimize();

    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << equilibrium4(arr, arr_size);
    // cout << equilibrium3(arr, arr_size);
    // cout << equilibrium2(arr, arr_size);

    r0;
}
