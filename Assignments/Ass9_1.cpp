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
    int n ;
    int i = 2;
    vector<int> vect;
    cout << "Enter n to get primes : ";
    cin >> n;

    while (i < n){
        if (n%i == 0){
            cout << n << "is not a prime." << endl;
        }
        else {
            cout << n << "is a prime number." << endl;
        }
        i++;
    }
    return 0;
}
int main(){

    // areaOfCircle();
    // factorial();
    prime();
    return 0;
}