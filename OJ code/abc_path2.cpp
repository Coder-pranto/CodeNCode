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
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)




int dx[] = {-1, 1,  0, 0, -1, -1,  1, 1};
int dy[] = {0,  0, -1, 1, -1,  1, -1, 1};
int maxPathLen = 0;

bool isValid(vector<vector<char>> &grid, int cur_row, int cur_col)
{
    return !(cur_row < 0 || cur_row >= grid.size() || cur_col < 0 || cur_col >= grid[cur_row].size());
}

void dfs( vector<vector<char>> &grid,
         vector<vector<int>> &visited, int cur_row, int cur_col, int cur_len = 1)
{
    if (visited[cur_row][cur_col])
        return;
    visited[cur_row][cur_col] = 1;
    maxPathLen = max(maxPathLen, cur_len);

    for (auto i = 0; i < 8; i++)
    {
        int next_x = cur_row + dx[i];
        int next_y = cur_col + dy[i];

        if (isValid(grid, next_x, next_y))
        {
            if (grid[next_x][next_y] - grid[cur_row][cur_col] == 1)
            {
                dfs(grid, visited, next_x, next_y, cur_len + 1);
            }
        }
    }
}

void dfsFull(vector<vector<char>> &grid,
             vector<vector<int>> &visited)
{

    for (int i = 0; i < grid.size(); ++i)
    {
        for (int j = 0; j < grid[i].size(); ++j)
        {
            if (grid[i][j] == 'A')
            {
                dfs(grid, visited, i, j);
            }
        }
    }
}


int main()
{
     optimize();

    int row, col, k = 0;

    while (cin >> row >> col)
    {
        if (!row && !col)
        {
            break;
        }

        vector<vector<char>> grid(row, vector<char>(col));
        vector<vector<int>> visited(row, vector<int>(col));

        for (auto i = 0; i < row; i++)
        {
            for (auto j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }

        dfsFull(grid, visited);
        cout << "Case " << ++k << ": " << maxPathLen << '\n';
        maxPathLen = 0;
    }

   r0;
}