/*
  Given Q queries, Q<=10^5
  In each query given V,
  Print subtree sum of V & Number of even numbers 
  in subtree of V

  */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];
int subtree_sum[N];
int even_cnt[N];
int val[N];

void dfs(int vertex, int parent = 0)
{
  if (vertex % 2 == 0)
  {
    even_cnt[vertex]++;
  }
  subtree_sum[vertex] += vertex;
  // subtree_sum[vertex] += val[vertex];

  for (int child : graph[vertex])
  {
    if (child == parent)
      continue;
    dfs(child, vertex);
    subtree_sum[vertex] += subtree_sum[child];
    even_cnt[vertex] += even_cnt[child];
  }
}

//O(v+e)~~O(v+(2*e))



int main()
{
   int n ;
   cin>>n;


    for(int i =0; i<n-1; i++){
        int x , y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1,0); 

  /*   for(int i =1; i<=n; i++)
    cout<<subtree_sum[i]<<" "<<even_cnt[i]<<endl; */

    // int q ;
    // cin>>q;
    // while (q--)
    // {
    //     int v ;
    //     cin>>v;
    //     dfs(v);
    //    cout<<subtree_sum[i]<<" "<<even_cnt[i]<<endl;
    // }
    
 
    return 0;
}

/* input:
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11



 */