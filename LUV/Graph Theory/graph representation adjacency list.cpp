// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100000
// vector<int>edge[MAX];

// int main()
// {
    // bi-directional without weight
//     int E, N;
//     cin>>E>>N;

//     for(int i =0; i<E; i++){
//         int x , y;
//         cin>>x>>y;
//         edge[x].emplace_back(y);
//         edge[y].emplace_back(x);
//     }
 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int>edge[MAX];
vector<int>weight[MAX];

int main()
{

    // bi-directional with weight
    int E, N;
    cin>>E>>N;

    for(int i =0; i<E; i++){
        int x , y, w;
        cin>>x>>y>>w;
        edge[x].emplace_back(y);
        edge[y].emplace_back(x);
        weight[x].emplace_back(w);
        weight[y].emplace_back(w);
    }
 
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100000
// vector<int>edge[MAX];
// vector<int>weight[MAX];

// int main()
// {

//     // uni-directional with weight
//     int E, N;
//     cin>>E>>N;

//     for(int i =0; i<E; i++){
//         int x , y, w;
//         cin>>x>>y>>w;
//         edge[x].emplace_back(y);
//         weight[x].emplace_back(w);
//     }
 
//     return 0;
// }

// To know how many node are connected to the specific single node

/* int n ; 
cin>>n;
cout<<edge[n].size(); */

//To know whether p, q node are connected or not
//we have to check does p vector have q in it,

bool check(int m, int n)
{
    for (int i = 0; i < edge[m].size(); i++)
    {
        if (edge[m][i] == n)
        {
            return true;
        }
        return false;
    }
}






#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 +10;
vector<pair<int,int> > graph[N];

int main()
{

    // bi-directional with weight
    int E, N;
    cin>>E>>N;

    for(int i =0; i<E; i++){
        int x , y, w;
        cin>>x>>y>>w;
        graph[x].push_back({y,w});
        graph[y].push_back({x,w});
    }
 
    return 0;
}


// why adjacency list over adjacency matrix?
// ans: reduce space complexity
// in adjMatrix s.c = O(N*N);
// in adjList s.c = O(v+E);

// cons in adjList : 

// in adjmatrix : is i,j id connected? , i,j == wt ?

// if(graph[i][j] == 1)
// {
//     //O(1) connected
// }

// in adjList : 

// for(pair<int, int> child : graph[i]){
//     if(child.first == j){
//         //connected
//         child.second
//     }
// }