#include<iostream>
using namespace std;

void readData(int **p){     // this function takes a pointer to a pointer to store a matrix and reads values of matrix from the user
    cout<<"enter values of a 2x3 matrix"<<endl;
        for(int i = 0 ;i<2;i++)
        for(int j = 0;j<3;j++)
        cin>>p[i][j];
}

void print(int **p){       //this function takes a matrix and prints it out
    cout<<"your matrix is: "<<endl;
    for(int i = 0 ;i<2;i++){
        for(int j = 0;j<3;j++)
        cout<<p[i][j]<<" ";

        cout<<endl;
    }
}

int main(){
    int ** matrix = new int *[2];       //creatign a 2D array or matrix using pointer to a pointer
    for(int i = 0;i<2;i++){
        matrix[i] = new int[3];
    }

    readData(matrix);       //reading data from user
    print(matrix);          //printing matrix
}