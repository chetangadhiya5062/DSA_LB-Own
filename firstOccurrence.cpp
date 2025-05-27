#include <iostream>
#include <algorithm>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            ans = mid;
            right = mid - 1; // Keep looking left
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            ans = mid;
            left = mid + 1; // Keep looking right
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 4, 5, 9, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    sort(arr, arr + n); // Sort only once in main()

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if (first != -1 && last != -1) {
        int totalOccurrences = last - first + 1;
        cout << "Total occurrences of " << key << " is: " << totalOccurrences << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
