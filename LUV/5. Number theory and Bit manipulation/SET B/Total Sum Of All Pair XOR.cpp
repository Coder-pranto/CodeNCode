//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

    vector<int> v= {3, 5, 9};
    int len = v.size();
    int ans = 0; 
    for(int i =0 ; i<31; i++){
        int ones = 0, zeros = 0;
        for(auto &u : v){
          if(u&(1<<i)) ones++;
          else zeros++;
        }
        ans += (ones*zeros)*(1<<i);
    }
    cout<<ans<<el;

    r0;
}