//BISMILLAHIR RAHMANIR RAHIM
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


#define MX 205
typedef pair<int, int> pii;

char input[MX][MX];
int Fire[MX][MX];
int Jane[MX][MX];
bool visited[MX][MX];

int R, C;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

bool valid(int x, int y){
    return x >= 1 && x <= R && y >= 1 && y <= C && input[x][y] != '#' && visited[x][y] == 0;
}

bool escape(int x, int y){
    return x < 1 || x > R || y < 1 || y > C;
}

void reset(){
    for (int i = 1; i <= R; i++){
        for (int j = 1; j <= C; j++){
            Fire[i][j] = INT_MAX;
            Jane[i][j] = INT_MAX;
        }
    }
}

void resetVisited(){
    for (int i = 1; i <= R; i++){
        for (int j = 1; j <= C; j++){
            visited[i][j] = 0;
        }
    }
}

void FireMultiSourceBFS(vector<pii> fires){
    resetVisited();

    queue<pii> q;
    for (auto fire: fires){
        q.push(fire);
        visited[fire.first][fire.second] = 1;
        Fire[fire.first][fire.second] = 0;
    }

    while(!q.empty()){
        pii current = q.front();
        q.pop();

        for (int i = 0; i < 4; i++){
            int next_x = current.first + dx[i];
            int next_y = current.second + dy[i];

            if (valid(next_x, next_y)){
                Fire[next_x][next_y] = Fire[current.first][current.second] + 1;
                visited[next_x][next_y] = 1;
                q.push({next_x, next_y});
            }
        }
    }
}

int JaneBFS(pii jane){
    resetVisited();

    queue<pii> q;

    q.push(jane);
    visited[jane.first][jane.second] = 1;
    Jane[jane.first][jane.second] = 0;

    while(!q.empty()){
        pii current = q.front();
        q.pop();

        for (int i = 0; i < 4; i++){
            int next_x = current.first + dx[i];
            int next_y = current.second + dy[i];

            if (escape(next_x, next_y)){
                return Jane[current.first][current.second] + 1;
            }

            if (valid(next_x, next_y)){
                if (Fire[next_x][next_y] > Jane[current.first][current.second] + 1){
                    Jane[next_x][next_y] = Jane[current.first][current.second] + 1;
                    visited[next_x][next_y] = 1;
                    q.push({next_x, next_y});
                }
            }
        }
    }
    return -1;
}




int main()
{
    optimize();
kase{
        cin>>R>>C;
        reset();
        vector<pii> fires;
        pii jane;

        for(int i =1; i<=R; i++){
            for(int j =1;j<=C; j++){
              cin>>input[i][j];
              if(input[i][j] == 'F')
              fires.pb({i,j});
              else if(input[i][j] == 'J')
              jane = {i, j};
            }
        }

        FireMultiSourceBFS(fires);
        int ans = JaneBFS(jane);

        cout << "Case " << z << ": ";
        if (ans == -1)
            cout << "IMPOSSIBLE\n";
        else
            cout << ans << "\n";
    }
    r0;
}