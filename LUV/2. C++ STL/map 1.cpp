#include <bits/stdc++.h>
using namespace std;
/* given N strings, print unique strings in lexicographical order with their frequency. */
int main()
{   
map<string, int> m;

int n ;
cin>> n;
for (size_t i = 0; i < n; i++)
{
  string s;
  cin>>s;
  m[s]++;
}

 cout<<"\nunique word :"<<endl;
for(auto u: m){
  cout<<u.first<<" "<<u.second<<"\n";

}

   return 0;
}