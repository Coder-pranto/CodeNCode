//BISMILLAHIR RAHMANIR RAHIM

//*https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/find-the-numbers-75f24949/

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
  optimize()
  
   int n;
  cin >> n;
  int arr[n];
  int x = 0;

  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
    x ^= arr[i];
  }

  int pos = floor(log2(x) + 1); // leftmost set bit;
  int a=0, b=0;
  for (auto &u : arr)
  {
    (u & (1 << (pos - 1)) ? a ^= u : b ^= u);
  }

  if (a > b)
  {
    cout << b << " " << a << el;
  }
  else
    cout << a << "" << b << el;

  r0;
}