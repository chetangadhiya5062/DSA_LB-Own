#include <iostream>
using namespace std;


void printArray(int arr[], int size){
    for (int i = 0 ; i< size; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
    int n = 6;
    int arr1[n] = {1, 2, 3, 4, 5, 6};
    int arr2[n];

    for (int i = 0 ; i< n; i++){
        arr2[i] = arr1[n-i-1];
    }

    cout << " Reversed Array: " << endl;
    printArray(arr2, n);
}