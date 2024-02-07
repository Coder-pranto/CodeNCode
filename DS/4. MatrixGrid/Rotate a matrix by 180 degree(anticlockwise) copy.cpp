// transpose-> column reverse -> transpose-> column reverse;

#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix, int degrees) {
    int n = matrix.size();
    int rotations = degrees / 90;

    for (int k = 0; k < rotations; k++) {
        // Find the Transpose of the Matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse the columns of the Transpose (CounterClockwise)
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

    cout << "Rotated Matrix (180 degrees):" << endl;
    rotateMatrix(matrix, 180);
    printMatrix(matrix);

    return 0;
}
