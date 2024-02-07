#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; // Size of the grid
    cin >> n;

    vector<vector<int>> value(n + 1, vector<int>(n + 1));
    vector<vector<int>> sum(n + 1, vector<int>(n + 1));

    // Input the values in the grid
    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            cin >> value[y][x];
        }
    }

    // Initialize base cases
    for (int y = 0; y <= n; y++) {
        sum[y][0] = 0;
        sum[0][y] = 0;
    }

    // Calculate the maximum sum path using dynamic programming
    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            sum[y][x] = max(sum[y][x - 1], sum[y - 1][x]) + value[y][x];
        }
    }

    // The maximum sum path from upper-left corner to lower-right corner is sum[n][n]
    cout << "Maximum sum path: " << sum[n][n] << endl;

      for (int y = 0; y <= n; y++) {
        for (int x = 0; x <= n; x++) {
            cout << sum[y][x]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


/* 5
3 7 9 2 7
9 8 3 5 5
1 7 9 8 5
3 8 6 4 10
6 3 9 7 8

ans = 67
 */