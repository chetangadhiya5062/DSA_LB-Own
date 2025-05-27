#include<iostream>
using namespace std;

int searchNearlySorted(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<=e){
        if (arr[mid] == target){
            return mid; // Target found at mid
        }
        if (mid-1 > 0 && arr[mid-1] == target){
            return mid-1; // Target found at mid-1
        }
        if (mid+1 < n-1 && arr[mid+1] == target){
            return mid+1; // Target found at mid+1
        }
        if (arr[mid] < target){
            s = mid + 2; // Move to the right side, skipping the next element
        }
        else {
            e = mid - 2; // Move to the left side, skipping the previous element
        }
        mid = s + (e - s) / 2; // Recalculate mid
    }
    return -1; // Target not found
}
int main(){
    int arr[] = {20,10,30,40,40,70,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;
    int targetIndex = searchNearlySorted(arr, n, target);

    if (targetIndex == -1){

        cout << "The target " << target << " is not found." << endl;
    }
    else {
        cout << "The target " << target << " is found at index: " << targetIndex << endl;
    }
    return 0;
}