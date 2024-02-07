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

// for c = 1
void findXMedian(int arr[], int n)
{
    sort(arr, arr + n);
    int x; // Stores the median
    // Only one median if n is odd
    if (n % 2 != 0) {
        x = arr[n / 2];
    }
    // Two medians if n is even and every value between them is optimal print any of them
    else {
        int a = arr[n / 2 - 1];
        int b = arr[n / 2];
        x = a;
    }
  
    int sum = 0;

    // Find minimum sum
    for (int i = 0; i < n; i++) {
        sum += abs(arr[i] - x);
    }
  
    cout << sum <<"\n";
}

//for c= 2
void findXAverage(int arr[], int n)
{
    // Store the sum
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
  
    // Store the average of numbers
    double x = sum / n;
  
    double minSum = 0;
  
    for (int i = 0; i < n; i++) {
        minSum += pow((arr[i] - x), 2);
    }
  
    cout << minSum<<"\n";
}
 
  
int main()
{
    optimize();
    int arr1[] = { 1, 2, 9, 2, 6 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
  
    findXMedian(arr1, n1);
    findXAverage(arr1, n1);

    r0;
}