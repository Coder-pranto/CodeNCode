//BISMILLAHIR RAHMANIR RAHIM
//*count the number of set bits;
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

    int n = 10;
    int cnt =0;
    while(n>0){
        cnt++;
        n = n & n-1;
    }

    cout<<cnt<<endl;

    r0;
}   