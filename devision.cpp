#include<iostream>

using namespace std;

int getQuotient(int devidend, int devisor){
    int s = 0;
    int e = devidend;
    int ans = -1;
    int mid = s + (e - s) / 2;
    int md = mid*devisor;
    while(s<=e) {
        if(md == devidend) {
            ans = mid;
            return ans;
        }
        else if(md < devidend) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
        md = mid*devisor;
    }
    if (devidend == 0 && devisor == 0){
        cout << "0/0 is not allowed." << endl;
    }
    else if (devisor == 0){
        cout << "Division by zero is not allowed." << endl;
        return -1; // Indicating an error
    }

    
    return ans;
    }

int main(){
    int devidend = 9;
    int devisor = 65;
    int sign = 1;
    if(devisor < 0 || devidend < 0 ){
        sign = -1;
    }
    if(devisor < 0 && devidend < 0){
        sign = 1;
    }

    int ans = sign * getQuotient(abs(devidend), abs(devisor));
    cout << "The " << devidend << "/" << devisor << " is: " << ans << endl; 


    return 0;
}