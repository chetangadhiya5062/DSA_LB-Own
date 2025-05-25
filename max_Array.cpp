#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[][3], int rows, int cols) {
    int minEle = INT_MAX;
    
    
    for(int i = 0; i < rows; i++){
        for (int j = 0; j< cols; j++){
            if (arr[i][j] < minEle) {
                minEle = arr[i][j];
            }
        }
    }
    return minEle; // Return minEle when found
}

int findMax(int arr[][3], int rows, int cols) {
    int maxEle = INT_MIN;
    
    
    for(int i = 0; i < rows; i++){
        for (int j = 0; j< cols; j++){
            if (arr[i][j] > maxEle) {
                maxEle = arr[i][j];
            }
        }
    }
    return maxEle; // Return maxEle when found
}
int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    int minVal = findMin(arr, rows, cols);
    int maxVal = findMax(arr, rows, cols);

    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;// Placeholder for minEle
    return 0;
}