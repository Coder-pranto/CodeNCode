// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0
typedef long long ll;
#define optimize()       ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const int N = 1e5+7;
vector<int>graph[N];
int depth[N], height[N];

void dfs(int vertex, int parent)
{
    for (auto child : graph[vertex])
    {
        if (child != parent)
        {
            depth[child] = depth[vertex] + 1;
            dfs(child, vertex);
            height[vertex] = max(height[vertex], height[child] + 1);
        }
    }
}

int main()
{
    optimize()
       
       int n ,e;
    cin >> n ;
    e = n-1; // for tree 
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, 0);

    cout<<"Node\t"<<"Height\t"<<"Depth\n"<<el;
    for(int i =1; i<=n; i++){
        cout<<i<<"\t"<<height[i]<<"\t"<<depth[i]<<el;
    }

    r0;
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
 10 11 */


/* Output:
Node    Height  Depth

1       4       0
2       3       1
3       3       1
4       2       2
5       2       2
6       0       3
7       0       3
8       1       3
9       0       3
10      1       3
11      0       4
12      0       4
13      0       1
 */



/* void dfs(int vertex, int parent)
{

    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;

        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
    }
}
 */