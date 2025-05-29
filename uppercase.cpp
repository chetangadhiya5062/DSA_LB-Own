#include<iostream>
#include<string.h>
using namespace std;

int uppercase(char str[], int n){
    for (int i = 0 ; i < n ; i ++){
        
        // Check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            //METHOD : 1
                // Convert to uppercase by subtracting 32
            // str[i] = str[i] - 32;
            //METHOD : 2
                // Convert to uppercase using ASCII value
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return 0; 
}
int main(){
    char str[] = "jay Swaminarayan";
    int n = strlen(str);
    cout << "Original string: " << str << endl;
    // Convert to uppercase
    uppercase(str, n);

    cout << "Uppercase string: " << str << endl;
    return 0;
}