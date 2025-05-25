#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void transpose(int arr[][3], int rows, int cols){
    
    for (int i = 0; i < rows; i++){
        for (int j = i+1; j < cols; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Print the transposed array
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // original 2D array is : 1,2,3,4,5,6,7,8,9
    // nedded is : 1,4,7,2,5,8,3,6,9
    int rows = 3;
    int cols = 3;

    cout << "Transposed " << endl;
    transpose(arr, rows, cols);
    cout << endl;

    return 0;
}