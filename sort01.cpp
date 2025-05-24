#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void sort_ptr(int arr[], int n){
    int *left = &arr[0];
    int *right = &arr[n - 1];

    while (left < right) {
        if (*left == 0) {
            left++;
        } else if (*right == 1) {
            right--;
        } else {
            swap(*left, *right);
            left++;
            right--;
        }
    }
}
void sort_Count(int arr[], int n) {
    int count0 = 0, count1 = 0;

    for (int i = 0; i < n ; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
    }

    for (int i = 0; i < count0; i++) {
        arr[i] = 0;
    }

    for (int i = count0; i < n; i++) {
        arr[i] = 1;
    }
}

void printArray(int arrSorted[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arrSorted[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {0, 0, 1, 0, 1, 0, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort_Count(arr, arrSorted, n);
    sort_ptr(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
