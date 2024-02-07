#include <bits/stdc++.h>
using namespace std;

struct pair_compare
{
  bool operator()(const pair<int, string> &a, const pair<int, string> &b) const
  {
    return (a.first != b.first) ? (a.first < b.first) : (a.second > b.second);
  }
};

int main()
{
  int n;
  cin >> n;
  priority_queue<pair<int, string>, vector<pair<int, string>>, pair_compare> pq;
  for (int i = 0; i < n; i++)
  {
    string s;
    int x;
    cin >> s >> x;

    pq.push({x, s});
  }

  while (!pq.empty())
  {
    cout << pq.top().second << " " << pq.top().first << endl;
    pq.pop();
  }

  return 0;
}