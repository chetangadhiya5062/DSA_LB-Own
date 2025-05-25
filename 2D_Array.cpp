#include<iostream>
using namespace std;

void print2DArray(int arr[][3], int rows, int cols){
    for (int i= 0; i< rows; i++){
        for (int j= 0; j < cols; j++){
            cout << arr[i][j] << " " ;

        }
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << "2D Array: " << endl;
    print2DArray(arr, rows, cols);
    cout << endl;

    return 0;
}