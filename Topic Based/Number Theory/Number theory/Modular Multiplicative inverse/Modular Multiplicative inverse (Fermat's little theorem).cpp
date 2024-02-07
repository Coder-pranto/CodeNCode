#include<bits/stdc++.h>
using namespace std;
#define el  "\n"

int BigMod1(int a, int n, int m)
{ //* O(log(N))
    int res = 1;
    while (n>0)
    {
        if (n % 2 == 1)
        {
            res = (res * a)%m;
            n--;
        }
        else
        {
            a = (a * a)%m;
            n /= 2;
        }
    }

    return res;
}

int BigMod2(int a, int b, int m)
{ //* O(log(N))

    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        long int x = BigMod2(a, b / 2, m);
        return (x * x) % m;
    }
    else
    {
        return ((long int)a % m * BigMod2(a, b - 1, m)) % m;
    }
}

int main()
{

    int a, b , m;
    a = 6, b =2, m = 5; //(a/b)%m;

    cout<<(((a%m)*BigMod1(b,m-2,m))%m)<<"\n";
    cout<<(((a%m)*BigMod2(b,m-2,m))%m);

    return 0;
}
//ans : 3
