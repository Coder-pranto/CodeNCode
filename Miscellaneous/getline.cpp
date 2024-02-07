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
    int n;
    cin >> n;
    cin.ignore(); // Consume the newline character from the previous input

    string home;
     getline(cin, home); // Read the home airport name

    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string a, b, c;
        getline(cin, a, '-'); // Read the departure airport
        getline(cin, b, '>'); // Read the arrow (ignored)
        getline(cin, c);      // Read the arrival airport
        m[a]++;
        m[c]++;
    }

    for(auto u: m){
        cout<<u.first<<" "<<u.second<<el;
    }

    cout << (m[home] & 1 ? "contest" : "home") << el;
    r0;
}

/*     is: It is an object of istream class and tells the function about the stream from where to read the input from.

    str: It is a string object, the input is stored in this object after being read from the stream.

    delim: It is the delimitation character which tells the function to stop reading further input after reaching this character.
    
    
     */