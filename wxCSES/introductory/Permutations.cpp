//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
     int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    else if (n < 4) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> perm;
    for (int i = 2; i <= n; i += 2) {
        perm.push_back(i);
    }
    for (int i = 1; i <= n; i += 2) {
        perm.push_back(i);
    }
  
    for (int i = 0; i < n; i++) {
        cout << perm[i] << " ";
    }
    cout << endl;


    r0;
}