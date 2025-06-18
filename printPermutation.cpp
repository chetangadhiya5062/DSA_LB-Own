#include <iostream>
using namespace std;

void printPermutation(string str, int i){

    //base case
    if(i >= str.length()){
        cout << str << " ";
        return;
    }

    for (int j = i ; j < str.length() ; j ++){
        swap(str[i] , str[j]);
        //recursion
        printPermutation(str , i+1);
        //backtracking is must iff str given by reference.
        // swap(str[i], str[j]);
    }
}

int main(){
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
}

/*
NOTE : 
---> if you pass string by reference = string &str 
    -> then we must have to back Track..
---> if you not pass string by reference = string str 
    -> then it is not mendatory to backtrack..in this 
    situation, you either use or not use both will give 
    same ans.
*/