#include<iostream>
using namespace std;

void print_Pairs(int arr[], int n){
    for (int i = 0; i < n ; i ++) {
        for (int j = n-i-1; j >= 0; j--){
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
        }
    }
}
int main(){
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_Pairs(arr,n);
    return 0;
}