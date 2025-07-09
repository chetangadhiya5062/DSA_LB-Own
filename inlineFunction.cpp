// before Inline used..
#include <iostream>

using namespace std;

void numberShow(int num){
    cout << num << endl;
}

int main(){
    int n = 6;
    numberShow(n);// it is not bad to call one basic code like this using the function.
    // but it increases the function calling overHead when the call of the function is reaches to thousands and millions of time.
    // for the solution of this func. calling overHead there is inline Function.
    numberShow(n);
    numberShow(n);
    numberShow(n); // numShow(n) == cout << 6 << endl;
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);
    numberShow(n);



    
    return 0;
}

//after Inline Used..
// compiler does this..
// removes the function numShow and assigns the inside written code to  all the called function.

// #include <iostream>

// using namespace std;

// // inline void numberShow(int n){
// //     cout << n << endl;
// // }
// int main(){
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     cout << 6 << endl;
//     return 0;
// }




