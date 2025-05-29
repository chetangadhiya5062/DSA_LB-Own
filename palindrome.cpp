#include<iostream>

using namespace std;

bool palindrome(char str[], int n){
    for (int i = 0; i < n; i++){
        // Check if characters at symmetric positions are equal
        if (str[i] != str[n - i - 1]) {
            cout << "The string is not a palindrome." << endl;
            return false; // Not a palindrome
        }
        else {
            cout << "The string is a palindrome." << endl;
            return true; // Is a palindrome
        }
    }
}
int main(){
    char str[] = "hi0ih";
    int n = sizeof(str) / sizeof(str[0]) - 1; // Exclude null terminator

    cout << "Original string: " << str << endl;
    palindrome(str, n);
    return 0;
}