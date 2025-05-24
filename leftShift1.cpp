#include<iostream>
using namespace std;

void left_Shift(int arr[], int n){
    int initial = arr[0];
    for (int i = 0; i <n; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n-1] = initial;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);
    left_Shift(arr, n);
    cout << "Array after left shift: ";
    printArray(arr, n);
    return 0;
}