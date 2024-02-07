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
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<int>>v(n, vector<int>(n, 0));

        int maxlen = 1; 
         string ans ="";

        for(auto diff = 0; diff<n; diff++){
            for(auto i =0, j = diff+i; j<n; j++, i++){
                if(i == j){
                    v[i][j] = 1;
                }else if(diff == 1){
                    v[i][j] = (s[i] == s[j])? 2 : 0;
                }else{
                    if(s[i] == s[j] and v[i+1][j-1]){
                        v[i][j] = v[i+1][j-1] + 2;
                    }
                }
                if(v[i][j]){
                    maxlen = max(maxlen, j-i+1) ;
                    ans = s.substr(i, maxlen);
                }
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