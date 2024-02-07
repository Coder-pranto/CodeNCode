//* Given an empty plot of size 3 x n. We want to place tiles such that the entire plot is covered. Each tile is of size 3x 1 and can be placed either horizontally or vertically. If n is 5




#include <iostream>
#include <vector>

using namespace std;

vector<int> memo;

int countWaysToCoverPlot(int n) {
    if (n <= 0 ) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    if (n == 2) {
        return 1;
    }

    if (n == 3) {
        return 2; 
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    int ways = countWaysToCoverPlot(n - 1) + countWaysToCoverPlot(n - 3);
    memo[n] = ways;

    return ways;
}

int main() {
    int n;
    // cout << "Enter the value of n (the width of the plot): ";
    cin >> n;

    memo.assign(n + 1, -1);
    int ways = countWaysToCoverPlot(n);

    // cout << "Number of ways to cover the 3x" << n << " plot: " << ways << endl;
    cout<<ways<<endl;

    return 0;
}
