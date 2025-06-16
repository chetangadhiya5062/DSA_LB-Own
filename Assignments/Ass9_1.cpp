#include <iostream>
#include<vector>
using namespace std;
float areaOfCircle(){
    float area = 0;
    const float pi = 3.14;
    float r;

    cout << "Enter the Radius r : ";
    cin >> r;
    area = (pi)*r*r;
    cout << "Area of radius " << r << "is : " << area << endl;

}

int factorial(){
    int n;
    cout << "Enter the number n to find factorial : ";
    cin >> n;
    int fact = n;
    for (int i = n-1 ; i > 0 ; i--){
        fact *= i;
    }

    cout << "factorial of " << n << "is : " << fact << endl;

    return 0;
}


int prime(){
    //not completely done
    //display all primes from 1 to n
    int n ;
    
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n;
    

    
    return 0;
}

int printDigits(){
    int num ;
    cout << "Enter an integer : ";
    cin >> num;
    string str = to_string(num);
    
    for (auto i : str){
        cout << i << " ";
    }
}

int binaryRep(){
    int arr[] = {32,16,8,4,2,1};
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < size ; i++){
        if (n >= arr[i]){
            n = n-arr[i];
            cout << "1";
        }
        else{
            cout << 0;
        }

    }
    return 0;
}

int kmtomile(){

    float km;
    float miles;
    cout << "Enter Km : ";
    cin >> km;

    miles = km*(2.16);

    cout << km <<  " km = " << miles << "miles";

    
}

int bitwiseEvenOdd(){
    
    return 0;
}
int main(){

    // areaOfCircle();
    // factorial();
    // prime();
    // printDigits();
    // binaryRep();
    kmtomile();
    return 0;
}