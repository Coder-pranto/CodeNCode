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


class Solution {
public: // neetcode-> o(n^2)
    int countSubstrings(string s) {
        int n = s.size(), ans=0;
        for(auto i =0; i<n; i++){
            int l , r ;
            l = r = i; 
            while(l>=0 and r<n and s[l] == s[r]){
                ans++;
                l--;
                r++;
            }

            l = i;
            r = i+1;
            while(l>=0 and r<n and s[l] == s[r]){
                ans++;
                l--;
                r++;
            }
        }

        return ans; 
    }
};

int main()
{
    optimize();

    r0;
}