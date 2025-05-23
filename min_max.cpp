#include <iostream>
#include <limits.h>
using namespace std;

int main() {

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n ; i++){
        if (arr[i] < min){
            min = arr[i];
        }
        else if (arr[i] > max){
            max = arr[i];
        }

    }
    cout << "Minimum in Array is : " << min << ", Maximum in Array is : " << max << endl;
    return 0;
}