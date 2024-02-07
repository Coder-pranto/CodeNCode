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


int findSplitPoint(int arr[], int n){

    int left , right ;
    left = right =0;
    left = accumulate(arr, arr+n, 0);

    for(int i=n-1;i>=0; i--){

        right +=arr[i];
        left -=arr[i];
        if(left == right){
            return i;
        }
    }

    return -1;

}



void printTwoParts(int arr[], int n)
{
    int splitPoint = findSplitPoint(arr, n);
  
    if (splitPoint == -1 || splitPoint == n )
    {
        cout << "Not Possible" <<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(splitPoint == i)
            cout << endl;
        cout << arr[i] << " " ;
    }
}
int main()
{
    optimize();
    int arr[] = {1 , 2 , 3 , 4 , 5 , 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printTwoParts(arr, n);
    r0;
}

