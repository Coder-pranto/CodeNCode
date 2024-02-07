//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()
// 3 2 1 0 ---index of binary bits
// 1 0 1 0 ---binary number


//*right shift
int n = 10;
int i = 2;

if ((n>>i)&1 !=0)
{
  cout<<"set"<<el;
}
else
{
    cout<<"not set"<<el;
}




//* left shift

int m = 10;
int j =2;

if(n&(1<<j) != 0){
    cout<<"set"<<el;
}else{
    cout<<"not set"<<el;
}
    r0;
}