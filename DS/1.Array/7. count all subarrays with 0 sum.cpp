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

int countSubArrays(int arr[], int n){
    int ans = 0;
    int sum = 0;
    unordered_map<ll, int> m;
    m[0]  = 1;

    for(int i =0; i<n; i++){
        sum +=arr[i];
        if(m.find(sum) != m.end()){
            ans +=m[sum];
        }
        m[sum]++;
    }

    return ans;
}

int main()
{
    optimize();
    int arr[] = {6, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int output = countSubArrays(arr, n);
    cout << output << el;

    r0;
}