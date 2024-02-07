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


// two pointer technique
void printSorted(int a[], int n)
{

    int front = -1, back = -1;

    for (auto i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            front = i - 1;
            break;
        }
    }

    for (auto i = n - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            back = i + 1;
            break;
        }
    }

    if (back == -1 and front == -1)
    {
        for (auto i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << el;
    }

    while (front <= back)
    {
        swap(a[front], a[back]);
        front++;
        back--;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    optimize();

     int a[] = { 1, 7, 6, 5, 4, 3, 2, 8 };
    int n = sizeof(a) / sizeof(a[0]);
    printSorted(a, n);

    r0;
}