// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;


void printSecondaryDiagonal(int mat[][10], int n) {
    cout << "Secondary Diagonal: ";

    for (int i = 0; i < n; i++) {
        cout << mat[i][n - i - 1];
        if (i < n - 1) {
            cout << ", ";
        }
    }

    cout << endl;
}

int main() {
    
    return 0;
}