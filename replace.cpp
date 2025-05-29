#include<iostream>

using namespace std;

int replace(char str[], int n , int oldChar, int newChar) {
    for (int i = 0; i < n; i++) {
        // Check if character matches oldChar
        if (str[i] == oldChar) {
            // Replace with newChar
            str[i] = newChar;
        }
    }
    cout << "Modified string: " << str << endl;
    return 0;
}
int main(){
    char str[] = "jay Swaminarayan";
    int n = sizeof(str) / sizeof(str[0]) - 1; // Exclude null terminator

    cout << "Original string: " << str << endl;
    replace(str, n, 'a', 'o');
    return 0;
}
