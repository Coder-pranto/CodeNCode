//BISMILLAHIR RAHMANIR RAHIM

//https://cses.fi/problemset/task/1622/

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();

    string s;
    cin>>s;
    sort(s.begin(), s.end());
    vector<string>v;
    
    v.push_back(s);
    while(next_permutation(s.begin(), s.end())){
        v.push_back(s);
    }
    cout<<v.size()<<el;
    for(auto u: v){
        cout<<u<<el;
    }

    r0;
}