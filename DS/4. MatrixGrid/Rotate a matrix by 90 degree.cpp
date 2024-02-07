#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix, bool clockwise) {
    int n = matrix.size();

    // Step 1: Find the Transpose of the Matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    if (clockwise) {
        // Step 2: Reverse the Rows of the Transpose (Clockwise)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                swap(matrix[i][j], matrix[i][n - 1 - j]);
            }
        }
    } else {
        // Step 2: Reverse the Columns of the Transpose (Counterclockwise)
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n; j++) {
                swap(matrix[i][j], matrix[n - 1 - i][j]);
            }
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    cout << "Rotated Matrix (Clockwise):" << endl;
    rotateMatrix(matrix, true);
    printMatrix(matrix);

    cout << "Rotated Matrix (Counterclockwise):" << endl;
    rotateMatrix(matrix, false);
    printMatrix(matrix);

    return 0;
}
