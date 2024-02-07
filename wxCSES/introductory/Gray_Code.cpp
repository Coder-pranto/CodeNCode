//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<int> deciToBin(int decimalNum, int length)
{
  vector<int> v;
  for (int i = length - 1; i >= 0; i--)
  {
    int shift = decimalNum >> i;
    (shift & 1) ? v.pb(1) : v.pb(0);
  }

  return v;
}

vector<int> grayCode(vector<int> &v)
{
  vector<int> v1;
  v1.pb(v[0]);

  for (int i = 0; i < sz(v) - 1; i++)
  {
    v1.pb(v[i] ^ v[i + 1]);
  }

  return v1;
}

int main()
{
  optimize();
  int n;
  cin >> n;
  int len = 1 << n;
  vector<int> bin, gray;

  for (int i = 0; i < len; i++)
  {
    bin = deciToBin(i, n);
    gray = grayCode(bin);
    for (auto &u : gray)
    {
      cout << u;
    }
    cout << el;
    bin.clear();
    gray.clear();
  }
  r0;
}