// 1 2 9 10 25
// 4 3 8 11 24
// 5 6 7 12 23
// 16 15 14 13 22
// 17 18 19 20 21

//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0
typedef long long       ll;

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        ll r, c, ans = 0;
        cin >> r >> c;

        if (r < c)
        {
            if (c & 1)
            {
                ans = c * c - r + 1;
            }
            else
            {
                ans = ((c - 1) * (c - 1)) + r;
            }
        }
        else
        {
            if (r & 1)
            {
                ans = (r - 1) * (r - 1) + c;
            }
            else
            {
                ans = r * r - c + 1;
            }
        }

        cout << ans << el;
    }

    r0;
}

//formula :

/* r<c

c&1 == true, c^2 - r+1;
c&1 == false , (c-1)^2 + r;


r>c

r&1 == true, (r-1)^2 +c
r&1 == false , r^2 - c+1;

r == c

(r-1)^2 +1

 */

