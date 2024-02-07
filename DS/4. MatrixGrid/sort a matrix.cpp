#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int SIZE = 100; // Adjust the maximum size as needed

void sortMat(int mat[SIZE][SIZE], int n) {
    // Create a vector to hold all elements of the matrix
    vector<int> elements;

    // Copy all elements of the matrix into the vector
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            elements.push_back(mat[i][j]);
        }
    }

    // Sort the vector
    sort(elements.begin(), elements.end());

    // Copy the sorted elements back into the matrix
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = elements[index++];
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int mat[SIZE][SIZE];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    sortMat(mat, n);

    cout << "Sorted matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
