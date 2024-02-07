//BISMILLAHIR RAHMANIR RAHIM
//* Check the ith bit is set or not 
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()
   int n, i;
   cin>>n>>i;
   bool ck = n&(1<<(i-1));
   cout<<(ck?"YES":"NO")<<el;

    r0;
}