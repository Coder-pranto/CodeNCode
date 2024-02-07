//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();

    long long int a, b;
    cin >> a >> b;

    long long int c, p = 1e18;
    c = p / a;
    if (b > c)
        cout << "overflow\n";
    else
    {
        cout << "ok\n";
    }

    r0;
}
/* if a*b > 1e18 then 
    we can use this approach
    b>(p/a) or c = p/a , therefore b>c then return "overflow" */