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

int main()
{
    optimize();
  string s;
  cin>>s;
  int n = sz(s);
  for(auto i =0; i<=n -26; i++){

    vector<int>v(50);
    int flag=1;

    for(auto j =i; j<i+26; j++){
        if('A'<= s[j] and 'Z'>=s[j]){
            v[(s[j]-'A')]++;
        }
    }

    for(auto &u : v){
        if(u>1) flag =0;
    }

    if(flag){
        for(auto j =i; j<i+26; j++){
            if(s[j] =='?'){
                for(auto k =0; k<26; k++){
                    if(!v[k]){
                       s[j] = 'A'+ k;
                       v[k]++;
                       break;
                    }
                }
            }
        }

        for(auto j =0; j<n; j++){
            cout<<(s[j] == '?'? 'A': s[j]);
        }
        return 0;
    }

  }

  puts("-1");

   r0;
}