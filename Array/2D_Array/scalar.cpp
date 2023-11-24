#include <iostream>
using namespace std;

// Function to create a scalar matrix
void createScalarMatrix(int mat[][100], int size, int scalar, int elem) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                mat[i][j] = scalar * elem;
                cout << mat[i][j] << " ";
            } else {
                mat[i][j] = 0;
                cout << mat[i][j] << " ";
            }
        }
        cout<<endl;
    }
}
int main() {
    int size, scalar, elem;
    cout << "Enter the size of the square matrix: ";
    cin >> size;
    cout << "Enter the multiplication factor: ";
    cin >> elem;
    int mat[size][100];

    cout << "Enter the scalar value (1 0 1 0): ";
    cin >> scalar;

    createScalarMatrix(mat, size, scalar, elem);
//    displayMatrix(mat, size);

    return 0;
}

