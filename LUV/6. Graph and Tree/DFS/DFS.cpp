
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];
bool vis[N];

void dfs(int vertex)
{
    vis[vertex] = true;
    for (int child : graph[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
}

//O(v+e)~~O(v+(2*e))

int main()
{
    int E, N;
    cin>>E>>N;

    for(int i =0; i<E; i++){
        int x , y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
 
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5+10;
// vector<int>graph[N];
// bool vis[N];

// void dfs(int vertex){
//     //* 1. take action on vertex after entering the vertex
//      vis[vertex] = true;
//      for(int child: graph[vertex]){
//         if(vis[child]) continue;
//         //* 2. take action on child before entering the child node
//         dfs(child);
//         //* 3. take action child after exiting child node
//      }

//      //* 4. take action on vertex before exiting the vertex.

     
// }

// //O(v+e)~~O(v+(2*e))



// int main()
// {
//     int E, N;
//     cin>>E>>N;

//     for(int i =0; i<E; i++){
//         int x , y;
//         cin>>x>>y;
//         graph[x].push_back(y);
//         graph[y].push_back(x);
//     }
 
//     return 0;
// }

