#include<iostream>
#include<string.h>
using namespace std;

int strReverse(char str[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        // Swap characters at start and end
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;

        // Move towards the middle
        s++;
        e--;
    }
}
int main(){

    char str[] = "jay Swaminarayan";
    int n = strlen(str);

    cout << "Original string: " << str << endl;
    // Reverse the string
    strReverse(str, n);
    cout << "Reversed string: " << str << endl;
    return 0;

}