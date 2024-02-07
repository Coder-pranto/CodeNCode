#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n;
long long m;
long long trees[N];

bool isWoodSufficient(int h)
{
  long long wood = 0;
  for (int i = 0; i < n; i++)
  {
    if (trees[i] >= h)
      wood += (trees[i] - h);
  }
  return wood >= m;
}

int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> trees[i];
  }

  long long l = 0, r = 1e9, mid;
  while (r - l > 1)
  {
    mid = (l + r) / 2;
    if (isWoodSufficient(mid))
    {
      l = mid;
    }
    else
    {
      r = mid - 1;
    }
  }

  if (isWoodSufficient(l))
    cout << l << endl;
  else
    cout << r << endl;
  return 0;
}
