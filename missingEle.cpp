#include<iostream>

using namespace std;

int missingEle(int arr[], int n){
    int left = 0, right = n-1;
    int ans = -1;
    int mid = left + (right - left) / 2;
    
    while(left <= right){
        int diff = arr[mid] - mid; // The difference between the first element and its index
        if(diff == 1){
            left = mid + 1; // Move to the right side
        }
        else {
            ans = mid;
            right = mid-1;
        }
        mid = left + (right - left) / 2; // Recalculate mid
    }
    if (ans+1 == 0){
        return n+1;
    }
    return ans+1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7,  9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = missingEle(arr, n);
    cout << "The missing element is:  " << index << endl;
    

    return 0;
}