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

int main() {
    string p = "qwertyuiopasdfghjklzxcvbnm";
    string q = "abcdefghijklmnopqrstuvwxyz";

    string s;
    cin >> s;

    for (char c : s) {
        if (islower(c)) {
            char mappedChar = q[p.find(c)];
            cout << mappedChar;
        } else {
            cout << c;
        }
    }

    cout << endl;

    return 0;
}


/*  string p = "qwertyuiopasdfghjklzxcvbnm";
    string q = "abcdefghijklmnopqrstuvwxyz";

    string s;
    cin >> s;

    map<char,char>mp;
    for(auto i =0; i<26; i++){
        mp[p[i]] = q[i]; 
    }

    for(auto &u : s){
        cout<<mp[u];
    } */