#include<iostream>
using namespace std;

void binarySearch(int arr[], int n , int key, int left, int right){
    while(left <= right){
        int mid = (left + right)/2 ;
        if(arr[mid] == key){
            cout << "Element " << key << " found at Index : " << mid << endl;
            return;
        }
        else if (arr[mid] < key){
            left = mid + 1;
        }
        else if (arr[mid] > key){
            right = mid - 1;
        }
        else {
            cout << "Element " << key << " not found in the array." << endl;
            return;
        }
        mid = (left + right)/2 ;
    }
}
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    int left = 0, right = n - 1;

    binarySearch(arr,n,key,left,right);;
    return 0;
}