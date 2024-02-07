//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();

    long long n;
    cin>>n;
    if(n == 1){

        cout<<"1"<<el;
        return 0;
    }
    else{
        cout<<n<<" ";
        while (n!=1)        
        {
            if(n&1){
                n = n*3 + 1;
                cout<<n<<" ";
            }else{
                n = n/2;
                cout<<n<<" ";
            }
        }
        cout<<el;
        
    }

    r0;
}