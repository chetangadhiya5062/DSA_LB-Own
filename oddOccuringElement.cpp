#include<iostream>
using namespace std;

int oddOccurringElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<=e){
        
        if (s==e){
            // single element
            return s;
        }
        if (mid & 1){
            if(mid-1 > 0 && arr[mid-1] == arr[mid]){
                // mid is odd and matches with previous element
                s = mid + 1; // Move to the right side
            }
            else {
                e = mid - 1; // Move to the left side
            }
        }
        else{//even
            if(mid+1 < n && arr[mid] == arr[mid+1]){
                // mid is even and matches with next element
                s = mid + 2; // Move to the right side, skipping the next element
            }
            else {
                //ya to right me khada hu
                // ya to ans ke upar khada hu
                // bcz mid - 1 thi ans lost thai shake chhe.
                e = mid;
            }
        }
        mid = s + (e - s) / 2; // Recalculate mid
    }
    return -1; // Target not found
}
int main(){
    int arr[] = {2,2,3,3,4,4,5,6,6,3,3,2,2,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int target = oddOccurringElement(arr, n);

    if (target == -1){

        cout << "The target is not found." << endl;
    }
    else {
        cout << "The target is : " << arr[target] << endl;
    }
    return 0;
}