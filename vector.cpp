#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    
    // vector< vector<int> > arr(5, vector<int> (10,0));
    vector < vector <int> > brr;


    vector<int> v1(5,0);
    vector<int> v2(5,1);
    vector<int> v3(5,2);
    vector<int> v4(5,3);
    

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);





    for (int i = 0; i < brr.size(); i++){
        for (int j = 0; j < brr[i].size(); j++){
            cout << brr[i][j] << " "; // Example initialization
        }
        cout << endl; // New line for each row
    }

    // cout << arr.size() << endl; // Output the size of the vector
    // cout << arr.capacity() << endl; // Output the capacity of the vector
    // for(int i = 0 ; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    


    return 0;
}