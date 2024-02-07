//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0


int main()
{
  int n = 5;


//* increasing order(row-wise)
 
/* for(int i =1,p =1; i<=n; i++,p++){
    for(int j =1; j<=i; j++){
        cout<<p<<" ";
    }
    cout<<el;
}
 
for(int i =1,p =1; i<=n; i++,p++){
    for(int j =1; j<=i; j++){
      if(p&1)
        cout<<1<<" ";
        else{
          cout<<2<<" ";
        }
    }
    cout<<el;
}
cout<<el;
  */

 //* increasing order(column-wise)

/* for(int i =1; i<=n; i++){
  int p =1;
    for(int j =1; j<=i; j++,p++){
        cout<<p<<" ";
    }
    cout<<el;
} */


//* decreasing order(column-wise)
/* for (int i = 1, k = n; i <= n; i++, k--)
{
    int p = k;
    for (int j = 1; j <= i; j++)
    {
        cout << "  ";
    }
    for (int j = i; j <= n; j++)
    {
        cout << p-- << " ";
    }
    cout << el;
}
 */
//*hill pattern
for(int i =1; i<=n; i++){
  int p =1,q =1; 
  for(int j =i; j<=n; j++){
    cout<<"  ";
  }
  for(int j =1; j<i; j++){
    cout<<p++<<" ";
    }
  for(int j =1; j<=i;j++){
    cout<<p--<<" ";
  }

  cout<<el;
}

//*Diamond pattern (hiil pattern + reverse hill pattern)
/* int z = 1;
for (int i = 1; i < n; i++,z++)
{
    for (int j = i; j <= n; j++)
    {
        cout << "  ";
    }
    for(int j =1; j<i; j++){
        cout<<z<<" ";
    }
    for(int j =1; j<=i; j++){
        cout<<z<<" ";
    }
    cout<<el;
}

for (int i = 1; i <= n; i++, z++)
{
    for(int j =1; j<=i; j++){
        cout<<"  ";
    }
    for (int j = i; j < n; j++)
    {
        cout <<z<<" ";
    }
    for (int j = i; j <= n; j++)
    {
        cout <<z<< " ";
    }
    cout<<el;
}

 */


    r0;
}

