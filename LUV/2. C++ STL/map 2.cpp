#include <bits/stdc++.h>
using namespace std;

int main()
{   


// delete specific value by using direct value or using iterator
map<int, string> mp = {

    {0, "zero"},
    {10, "ten"},
    {20, "twenty"},
    {30, "thirty"},
    {41, "forty one"},
    {42, "forty two"},
    {43, "forty three"},
    {44, "forty four"},
    {45, "forty five"},

};

for (auto it2 : mp)
{
  cout << it2.first << " = " << it2.second;
  cout << endl;
}

mp.erase(42);

for (auto it2 : mp)
{
  cout << it2.first << " = " << it2.second;
  cout << endl;
}

auto it = mp.find(30);

if (it == mp.end())
  cout << "no value found!";
else
{
  cout << "value found and deleted!\n";
  mp.erase(it);
  for (auto it2 : mp)
  {
    cout << it2.first << " = " << it2.second;
    cout << endl;
  }
}

   return 0;
}