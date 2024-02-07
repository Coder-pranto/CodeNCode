#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, cows;

long long positions[N];

bool canPlaceCows(int minDist)
{
  int lastPos = -1;
  int cows_cnt = cows;
  for (int i = 0; i < n; ++i)
  {
    if (positions[i] - lastPos >= minDist || lastPos == -1)
    {
      cows_cnt--;
      lastPos = positions[i];
    }
    if (cows_cnt == 0)
      break;
  }
  if (cows_cnt == 0)
    return true;
  else
    return false;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n >> cows;
    for (int i = 0; i < n; i++)
    {
      cin >> positions[i];
    }
    sort(positions, positions + n);
    long long l = 0, r = 1e9, mid;
    while (r - l > 1)
    {
      mid = (l + r) / 2;
      if (canPlaceCows(mid))
      {
        l = mid;
      }
      else
      {
        r = mid - 1;
      }
    }

    if (canPlaceCows(r))
      cout << r << endl;
    else
      cout << l << endl;
  }

  return 0;
}
