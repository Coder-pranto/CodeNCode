#include <bits/stdc++.h>
using namespace std;

double eps = 1e-7;

void square_root(int n)
{
  double l = 1, r = n, mid;

  while (r - l > eps)
  {
    mid = l + (r - l) / 2;
    if (mid * mid < n)
    {
      l = mid;
    }
    else
    {
      r = mid;
    }
  }

  cout << setprecision(8) << "square root of " << n << " : " << r << " " << l << endl;
  cout << "checking: " << pow(n, 1.0 / 2) << endl;
}

double multiply(int x, int n)
{
  double ans = 1;
  for (int i = 0; i < n; i++)
  {
    ans *= x;
  }
  return ans;
}

void nth_square_root(int val, int n)
{
  double l = 1, r = val, mid;

  while (r - l > eps)
  {
    mid = l + (r - l) / 2;
    if (multiply(mid, n) < val)
    {
      l = mid;
    }
    else
    {
      r = mid;
    }
  }

  cout << setprecision(8) << "n-th root of " << val << " : " << r << " " << l << endl;
  cout << "checking: " << pow(val, 1.0 / n) << endl;
}

int main()
{

  square_root(2);         // time complexity: log(N*(10^d)) (d = decimalpoint)
  nth_square_root(27, 3); // time complexity: p*log(N*(10^d)) (d = decimalpoint, p = p-th root)
  return 0;
}
