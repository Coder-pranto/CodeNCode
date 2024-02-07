#include <bits/stdc++.h>
using namespace std;
/* given N strings, print unique strings  with their frequency. */
int main()
{   

unordered_map<string, int> m;

int n ;
cout<<"how may inputs: ";
cin>> n;
for (size_t i = 0; i < n; i++)
{
  string s;
  cin>>s;
  m[s]++; // O(1)
}

 cout<<"\nunique word :"<<endl;
for(auto u: m){
  cout<<u.first<<" "<<u.second<<"\n";

}

   return 0;
}