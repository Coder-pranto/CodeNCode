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
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)



ll power(int base, int times){
    ll res=1;
    while(times--){
        res*=base;
    }
    return res;
}

int main()
{
    optimize();
 

    kase{
        ll x ;
        cin>>x;
        ll sum =0, n =1;

        while(x>=sum){
            sum += 9*n*power(10,n-1);
            n++;
        }
        n--;

        ll digits_away = (sum - x)/n;
        ll reminder =(sum - x)%n;

        ll number = (power(10,n)-1)-digits_away;
        string result = to_string(number);
        cout<<result[result.length() -1 - reminder]<<el;
    }

    r0;
}

//*Approach
/* 

1. sum = 9* summation of(i to n) i*10^(i-1);
2.digit_away and number = (sum - x)/n;
3.reminder = (sum - x)%n;
4. number = 10^n - 1- reminder;

 */