#include <iostream>
using namespace std;

void extremePrint(int arr[], int size, int left, int right){
    if (left > right){
        return;
    }
    cout << arr[left] << " ";
    if (left != right){
        cout << arr[right] << " ";
    }
    extremePrint(arr, size, left + 1, right - 1);
}
int main(){
    int size = 5;
    int left = 0;
    int right = size -1;

    int arr[size] = {1, 2, 3, 4, 5};

    extremePrint(arr, size, left, right);

}