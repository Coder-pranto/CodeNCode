#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<int, multiset<string>> m;
  for (size_t i = 0; i < n; i++)
  {
    int x;
    string s;
    cin >> s >> x;
    m[x].insert(s);
  }

  //auto it = --m.end();
  auto it = m.rbegin();

  while (true)
  {
    auto &student = (*it).second;
    auto &mark = (*it).first;
    for (auto &ptr : student)
    {
      cout << ptr << " " << mark << endl;
    }

   // if (it == m.begin())
    if (it == m.rend())
      break;
    it--;
  }

  return 0;
}