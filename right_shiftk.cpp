#include<iostream>
using namespace std;

void right_Shift(int arr[], int store[], int k, int n){
    for(int i = 0; i < k; i++) {
        store[i] = arr[n - k + i];
    }
    for (int i = n - k - 1; i >= 0; i--) {
        arr[k+i] = arr[i];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = store[i];
    }
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
    int k  = 3;
    int store[k];


    cout << "Original array: ";
    printArray(arr, n);
    right_Shift(arr, store,k, n);
    cout << "Array after right shift: ";
    printArray(arr, n);
    return 0;
}