#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {3,2,4,4,32,1,6};

    // we don't know which sort is used here.
    // that is abstraction.

    sort(v.begin(), v.end());
    for (auto i : v){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}