#include <iostream>
using namespace std;
// Function to subtracting two matrices
void subtractedMatrices(int m1[][100], int m2[][100], int diffMat[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            diffMat[i][j] = m1[i][j] - m2[i][j];
            cout << diffMat[i][j] << " ";
        }
        cout<<endl;
    }
}
int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of cols: ";
    cin >> col;
    int m1[row][100];
    int m2[row][100];
    int diffMat[row][100];
    // Input for the first matrix
    cout << "Enter values for the 1st matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter value for row and cols: ";
            cin >> m1[i][j];
        }
    }
    // Input for the second matrix
    cout << "Enter values for the 2nd matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter value for row: ";
            cin >> m2[i][j];
        }
    }
    // function calling
    subtractedMatrices(m1, m2, diffMat, row, col);

    return 0;
}

