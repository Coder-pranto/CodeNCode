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
    bool wordPattern(string p, string s) {
        unordered_map<char, string>m;
         unordered_map<string, char>n;

        istringstream iss(s);
        vector<string> words;
        string word;
    
        while (iss >> word) {
            words.push_back(word);
        }

        if (p.size() != words.size()) {
            return false; // Check if the sizes match
        }

        for (size_t i = 0; i < p.size(); i++) {
            char c = p[i];
            string w = words[i];
            if (m.count(c) == 0 and n.count(w)==0) { // Check if the key doesn't exist
                m[c] = w;
                n[w] = c;
            } else if (m[c] != w and n[w] != c) { // Check if the assigned value is different
                return false;
            }
        }

        return true;


    }
};






int main()
{
    optimize();

    r0;
}