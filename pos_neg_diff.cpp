#include<iostream>
#include<vector>
using namespace std;

void separateNegPos(vector<int>& arr) {
    int* left = &arr[0];
    int* right = &arr[0];

    int n = arr.size();

    while (right < &arr[0] + n) {
        if (*right < 0) {
            swap(*left, *right);
            left++;
        }
        right++;
    }
}

int main() {
    vector<int> arr = {3, -1, 5, -6, 2, -4, 7};

    separateNegPos(arr);

    cout << "Rearranged array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}






// METHOD 2

// #include<iostream>
// #include<vector>

// using namespace std;

// void swap(vector<int>& arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// void approach(vector<int>&arr, int i, int right){
//     for (int i = 0 ; i <= arr.size() - 1; i++){
//         if (arr[i] < 0){
//             swap(arr, arr[i], arr[right]);
//             right--;
//         }
//     }
// }
// void diff(){
//     vector<int> arr = {1, 2, -3, 4, -5};
//     int left = 0, right = arr.size() - 1;
//     vector<int> pos, neg;
//     for(int i = 0; i < arr.size(); i++){
//         if(arr[i] >= 0){
//             pos.push_back(arr[i]);
//         } else {
//             neg.push_back(arr[i]);
//         }
//     }

//     neg.insert(neg.end(), pos.begin(), pos.end());
//     pos.clear();
//     for (int num : neg){
//         cout << num << " ";
//     }

//     cout << "pointer/ swapping approach: " << endl;
//     approach(arr, left, right);
//     for (int num : arr){
//         cout << num << " ";
//     }
// }
// int main(){
//     diff();
//     cout << endl;
    
//     return 0;
// }