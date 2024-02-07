//BISMILLAHIR RAHMANIR RAHIM

//*https://www.codechef.com/problems/XORSN

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long                        ll;


long long getxor(long long n){
    switch (n % 4)
        {
        case 0:
            return n;
        case 1:
            return 1;
        case 2:
            return n + 1;
        case 3:
            return 0;
        }
}

int main()
{
    optimize()

        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        cout<<getxor(n)<<"\n";
        
    }

    r0;
}

