#include<iostream>
using namespace std;
void all_Pairs(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            
        }
    }
}
void all_triplates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
            }
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,12,31,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // all_Pairs(arr, n);
    // cout << "Total pairs: " << (n * (n ))  << endl; // Total pairs formula
    all_triplates(arr, n);
    return 0;
}