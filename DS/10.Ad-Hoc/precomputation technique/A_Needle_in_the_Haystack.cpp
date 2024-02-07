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

    kase
    {
    string a, b;
        cin >> a >> b;

        vector<int> freqA(26, 0), freqWindow(26, 0);

        for (char c : a) {
            freqA[c - 'a']++;
        }

        int aLength = a.length();
        int bLength = b.length();
        bool found = false;

        for (int i = 0; i < bLength; i++) {
            if (i >= aLength) {
                // Remove the leftmost character from the window
                freqWindow[b[i - aLength] - 'a']--;
            }

            // Add the current character to the window
            freqWindow[b[i] - 'a']++;

            if (freqWindow == freqA) { //compare two vector whether they are similar or not              
              found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << "\n";
    }

    r0;
}