
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];
int subtree_sum[N];
int val[N];


void dfs(int vertex, int parent=0)
{  
    subtree_sum[vertex] +=val[vertex-1];
 
  

    for (int child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
        subtree_sum[vertex] +=subtree_sum[child];
 
    }
}



int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1, 0);
    long long ans = 0;
    for (int i = 2; i <= n; ++i)
    {
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - part1;
        ans = max(ans, part1 * 1LL * part2);
    }
     cout<<"Ans: "<<ans<<endl;
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


//similiar: https://www.geeksforgeeks.org/delete-edge-minimize-subtree-sum-difference/