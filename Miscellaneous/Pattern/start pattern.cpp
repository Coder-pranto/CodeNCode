//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define r0 return 0


int main()
{
int n = 5;

//* increasing order
/* 
for(int i =1; i<=n; i++){
    for(int j =1; j<=i; j++){
        cout<<"* ";
    }
    cout<<el;
}
 */
//* decreasing order

/* for (int i = 1; i <= n; i++)
{
    for (int j = i; j <= n; j++)
    {
        cout << "* ";
    }
    cout << el;
}
 */

//* right triangle

/* for (int i = 1; i <= n; i++)
{
    for (int j = i; j <= n; j++)
    {
        cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
        cout << "* ";
    }

    cout << el;
} */

//*left triangle

/*  cout<<el;
for (int i = 1; i <= n; i++)
{
   for(int j =1; j<=i; j++){
        cout<<"  ";
    }
    for (int j = i; j <= n; j++)
    {
        cout << "* ";
    }

    cout << el;
}
 */



//* Hill pattern

/* for (int i = 1; i <= n; i++)
{
    for (int j = i; j <= n; j++)
    {
        cout << "  ";
    }
    for(int j =1; j<i; j++){
        cout<<"* ";
    }
    for(int j =1; j<=i; j++){
        cout<<"* ";
    }
    cout << el;
}
 */

//* Hill pattern (reverse pattern)
/*  for (int i = 1; i <= n; i++)
{
    for(int j =1; j<=i; j++){
        cout<<"  ";
    }
    for (int j = i; j < n; j++)
    {
        cout << "* ";
    }
    for (int j = i; j <= n; j++)
    {
        cout << "* ";
    }
    cout << el;
} */


//*Diamond pattern (hiil pattern + reverse hill pattern)

for (int i = 1; i < n; i++)
{
    for (int j = i; j <= n; j++)
    {
        cout << "  ";
    }
    for(int j =1; j<i; j++){
        cout<<"* ";
    }
    for(int j =1; j<=i; j++){
        cout<<"* ";
    }
    cout<<el;
}

for (int i = 1; i <= n; i++)
{
    for(int j =1; j<=i; j++){
        cout<<"  ";
    }
    for (int j = i; j < n; j++)
    {
        cout << "* ";
    }
    for (int j = i; j <= n; j++)
    {
        cout << "* ";
    }
    cout<<el;
}



//* pyramid
/* for(int i =1; i<=n; i++){
    for(int j =i; j<=n; j++){
        cout<<" ";//give one space
        }
        for(int j =1; j<=i; j++ ){
            cout<<"* ";
        }
        cout<<el;
}
 */
//* double hill

/*   for (int i = 1; i <= n; i++)
  {
      for (int j = i; j < n; j++)
      {
          cout << " "; // give one space
      }
      for (int j = 1; j <= i; j++)
      {
          cout<<" *";
          
      }

      for (int j = i; j < n; j++)
      {
          cout << "  ";
      }
      for (int j = 1; j <= i; j++)
       {
        cout<<"* ";
       }

      cout << el;
  } */

    r0;
}