#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum = sum + arr[i];

    }
        cout << "the sum is : " << sum << endl;
        
        // cout << "Enter element " << i+1 << ": ";
        // cin >> arr[i];
        // arr[i] = 2*arr[i];
        // cout << arr[i] << endl;



    return 0;

}