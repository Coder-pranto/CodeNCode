#include<bits/stdc++.h>
using namespace std;
#define el  "\n"


int BinaryExpo(int a, int n, int m)
{ //* O(log(N))
    int res = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            res = (res *1LL* a)%m;
            n--;
        }
        else
        {
            a = (a *1LL* a)%m;
            n /= 2;
        }
    }

    return res;
}
int main()
{

    cout<<BinaryExpo(2,31,45);

    return 0;
}


//* short

// int BinaryExpo(int a, int n)
// { //* O(log(N))
//     int res = 1;
//     while (n)
//     {
//         if (n % 2 == 1)
//         {
//             res = (res *1LL* a);
//         }
//         a = (a *1LL* a);
//         n /= 2;
//     }

//     return res;
// }
// int main()
// {

//     // cout<<BinaryExpo(2,31,45);
//     cout<<BinaryExpo(2,5);

//     return 0;
// }


//*without mod
// #include<bits/stdc++.h>
// using namespace std;
// #define el  "\n"


// int BinaryExpo(int a, int n)
// { //* O(log(N))
//     int res = 1;
//     while (n)
//     {
//         if (n % 2 == 1)
//         {
//             res = res *1LL* a;
//             n--;
//         }
//         else
//         {
//             a = (a *1LL* a);
//             n /= 2;
//         }
//     }

//     return res;
// }
// int main()
// {

//     cout<<BinaryExpo(2,3);

//     return 0;
// }
