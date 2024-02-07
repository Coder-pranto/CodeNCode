#include <bits/stdc++.h>
using namespace std;

bool cmp3(pair<int,int> &a , pair<int,int> &b){
  if(a.first != b.first)
  return a>b;
  else return a<b;
}

int main()
{

   vector<pair<int,int>>vp = {{4,5},{3,6}, {5,6}, {5,2},{9,10}};
   sort(vp.begin(), vp.end(), cmp3);

   for(auto u: vp)
   cout<<u.first<<" "<<u.second<<endl;
   

  return 0;
}