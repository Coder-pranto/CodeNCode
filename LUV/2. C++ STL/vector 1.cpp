//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;


int main()
{

    //* rows are fixed and columns are dynamic
  vector<int> v[3];

  for(int i =0; i<3; i++){
    int x;
    cin>>x;
    for(int j =0; j<x; j++){
        int n ;
        cin>>n;
        v[i].emplace_back(n);
    }
  }

  /// print
  cout<<"\nVectors of array: "<<el;
  for(auto u : v)
  {
    for(auto w: u)
    cout<<w<<" ";
    cout<<"\n";
  }

  //* rows and columns are also dynamic.

  vector<vector<int>> v2;

  for(int i = 0; i<3; i++){
    int x ;
    cin>>x;

    vector<int> temp;
    for(int j =0; j<x; j++){
        int y ;
        cin>>y;
        temp.emplace_back(y);
    } 
    v2.emplace_back(temp);
  }
///print
cout<<"\nVector of vector: \n";
  for(auto u : v2){
    for(auto w: u){
        cout<<w<<" ";
    }

    cout<<"\n";
  }


  //*(or) rows and columns are also dynamic.

  vector<vector<int>> v3;

  for(int i = 0; i<3; i++){
    int x ;
    cin>>x;

    v3.emplace_back(vector<int>());
    for(int j =0; j<x; j++){
        int y ;
        cin>>y;
        v3[i].emplace_back(y);
    } 
  }
///print
cout<<"\nVector of vector: (or) \n";
  for(auto u : v3){
    for(auto w: u){
        cout<<w<<" ";
    }

    cout<<"\n";
  }

    r0;
}
