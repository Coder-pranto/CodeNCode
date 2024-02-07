#include<bits/stdc++.h>
using namespace std;
const int N = 5;
int A[N][N];
bool visited[N][N];

int dx[] = {-1, 1,  0, 0, -1, -1,  1, 1};
int dy[] = {0,  0, -1, 1, -1,  1, -1, 1};

bool valid(int x, int y){
    return (x >= 0 && x < N && y >= 0 && y < N && !visited[x][y]);
}

void dfs(int x, int y){
    // visit the cell
    visited[x][y] = 1;

    for (int i = 0; i < 8; i++){
       int next_x = x + dx[i];
       int next_y = y + dy[i];

        if (valid(next_x, next_y)){
            dfs(next_x, next_y);
        }
   }
}

struct node{
    int x;
    int y;
};

void bfs(int sx, int sy){
    queue < node > Q;
    Q.push({sx, sy});
    visited[sx][sy] = 1;

    while(!Q.empty()){
        int x = Q.front().x;
        int y = Q.front().y;
        Q.pop();

        for (int i = 0; i < 8; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if (valid(next_x, next_y)){
                visited[next_x][next_y] = 1;
                Q.push({next_x, next_y});
            }
       }
    }
}


int main()
{
    dfs(2, 2);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << visited[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl<<endl;
    bfs(2, 2);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << visited[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


































/* //BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1}; //* top, bottom, left, right, top-left, top-right, bootom-left, bottom-right
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

void dfs(int x, int y)
{

    // make sure the cell falls within the grid
    if (x < 0 || x >= 5)
        return;
    if (y < 0 || y >= 5)
        return;

    // visit the cell
    if (visited[x][y])
        return;
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        dfs(next_x, next_y);
    }
}

int dir[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};


void dfs(int x, int y)
{
   // make sure the cell falls within the grid
   if (x < 0 || x >= 5)
    return;
   if (y < 0 || y >= 5)
    return;

   if (visited[x][y])
    return;
   visited[x][y] = true;

   for (int i = 0; i < 4; i++)
   {
    int next_x = x + dx[i][0];
    int next_y = y + dy[i][1];
    dfs(next_x, next_y);
   }
}


int main()
{
    optimize();

    r0;
}
 */