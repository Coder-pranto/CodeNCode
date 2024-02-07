// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0
typedef long long ll;
#define optimize()       ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void dfs(int i, int j, int initColor, int newColor, vector<vector<int>> &image)
{
    int n = image.size();    // row
    int m = image[0].size(); // column

    if (i < 0 || j < 0)
        return;
    if (i >= n || j >= m)
        return;
    if (image[i][j] != initColor)
        return;
    image[i][j] = newColor;
    dfs(i - 1, j, initColor, newColor, image);
    dfs(i + 1, j, initColor, newColor, image);
    dfs(i, j - 1, initColor, newColor, image);
    dfs(i - 1, j + 1, initColor, newColor, image);
}//o(V+E)

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    int initColor = image[sr][sc];
    int newColor = color;

    if(initColor != newColor){
        dfs(sr,sc, initColor, newColor, image);
    }
    return image;
}

int main()
{
    optimize()
       

    r0;
}