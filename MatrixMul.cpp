#include <iostream>     //importing library
using namespace std;

const int MAX_ROWS = 100;       //defining constants for max rows and max cols of any matrix
const int MAX_COLS = 100;

void read(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {                //the read function is defined to fill the matrix with values passed by user passed in its parameters. 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }
}

void multiply(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2) {         //this multiply finction takes 3 matrices in parameter, with respective rows and columns and multiply 2 of them, and save the result to the third matrix. 
    if (cols1 != rows2) {
        cout << "cannot multiply the matrices, since number of columns in first matrics are not equal to number of rows in second matrix" << endl;              //condition for checking if the matrixs will multiply or not. 
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            int sum = 0;
            for (int k = 0; k < cols1; ++k) {
                sum += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }
}

void print(int mat[MAX_ROWS][MAX_COLS], int rows1, int cols2) {     //this function prints the matrix passes in its arguments. 
  
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2 ;++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS];       //creating first matrix
    int mat2[MAX_ROWS][MAX_COLS];       //creating second matrix
    int result[MAX_ROWS][MAX_COLS];     //creating resultant matrix

    int rows1, cols1, rows2, cols2;

    //taking number of rows and columns as user input. 
    cout << "Enter the number of rows and columns of matrix 1: "<<endl;
    cin >> rows1 >> cols1;
    cout << "Enter the elements of matrix 1:" << endl;
    read(mat1, rows1, cols1);

    cout << "Enter the number of rows and columns of matrix 2: "<<endl;
    cin >> rows2 >> cols2;
    cout << "Enter the elements of matrix 2:" << endl;
    read(mat2, rows2, cols2);

    multiply(mat1, mat2, result, rows1, cols1, rows2, cols2);

    cout << "Result of matrix multiplication:" << endl;
    print(result, rows1, cols2);

    return 0;
}
