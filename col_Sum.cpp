#include<iostream>
using namespace std;

void rowSum(int arr[][3], int rows, int cols){
    for (int i= 0; i< cols; i++){
        int sum = 0;
        for (int j= 0; j < rows; j++){
            sum += arr[j][i];
            
        }
        cout << "Sum of col " << i << " is : " << sum << endl ;
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << "2D Array: " << endl;
    rowSum(arr, rows, cols);
    cout << endl;

    return 0;
}