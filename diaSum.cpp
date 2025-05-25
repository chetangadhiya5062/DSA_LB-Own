#include<iostream>
using namespace std;

void diaSum(int arr[][3], int rows){
    int sum = 0;
    for (int i= 0; i< rows; i++){

            sum += arr[i][i];
        
    }
    cout << "Sum of dia is : " << sum << endl ;
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << "2D Array: " << endl;
    diaSum(arr, rows);
    cout << endl;

    return 0;
}