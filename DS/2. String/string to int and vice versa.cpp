//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

    //! String to number
           string s = "1234";
           int n =0;
           for(int i = 0; i<s.size(); i++){
            int x = s[i] - '0';
            n = n*10 + x;
           }
           cout<<n<<el;



//* for more fast calculation
    // string s = "1234";
    // int n = 0;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     n = (n << 3) + (n << 1) + (s[i] - '0'); // equivalent to n*10 + (s[i] - '0')
    // }
    // cout << n << endl;


    //! Number to string 

    int num = 1234;
    string ss;

    while (num!=0)        
    {
        int reminder = num%10;
        num = num/10;
        ss = (char)(reminder + '0') + ss; //very very impotant
    }

    cout<<ss<<el;
    
    r0;
}