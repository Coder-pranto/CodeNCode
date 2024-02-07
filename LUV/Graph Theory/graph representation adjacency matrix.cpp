//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define el "\n"

void make_adj_matrix(int N, int E){
	// N is the number of vertices
	// E is the number of edges
    int arr[N][N] ;
    for(int i =0;i<N; i++){
        for(int j =0; j<N; j++){
            arr[i][j] = 0;
            arr[j][i] = 0;
        }
    }

    for (size_t k = 0; k < E; k++)
    {
        int i , j;
        cin>>i>>j;
        arr[i][j] = 1;
        arr[j][i] = 1;
    }
    
		// for a directed graph with an edge pointing from i
		// to j,we just assign arr[i][j] as 1

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

void make_adj_matrix_weight(int N, int E)
{
    int inf = 1e7;
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = inf;
        }
    }

    for (int k = 0; k < E; k++)
    {
        int i, j, weight;
        cin >> i >> j >> weight;
        arr[i][j] = weight;
        arr[j][i] = weight;
    }
    // for a directed graph with an edge pointing from i
    // to j,we just assign arr[i][j] as weight;
}

int main()
{
   make_adj_matrix(4,4);
   make_adj_matrix_weight(4,4);

    return 0;
}


