//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

        int n = 29;
    int cnt = 0;

    //* right shift(best approach)
    while (n != 0)
    {
        if (n & 1)
            cnt++;

        n = n >> 1;
    }

    cout << cnt << el;

    cnt = 0;

    //* left shift
    int m = 29;
    for (int i = 0; i < 31; i++)
    {
        if (m & (1 << i))
            cnt++;
    }

    cout << cnt << el;



    //* brian_kerninghan method?

    int x = 84;
    cnt =0;

    while(x>0){
        x = x&(x-1);
        cnt++;
    }

    cout<<cnt<<el;



    r0;
}