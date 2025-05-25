#include<iostream>
using namespace std;

void found(int arr[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                cout << "Element found at position: (" << i << ", " << j << ")" << endl;
                return;
            }
        }
    }
    cout << "Element not found" << endl;
}
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int target = 5;

    found(arr, rows, cols, target);
    return 0;
}