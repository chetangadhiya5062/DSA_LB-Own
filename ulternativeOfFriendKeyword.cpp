#include <iostream>
using namespace std;

class A{
    private :
    int x;

    public :
    //ctor
    A(int _val) : x (_val){};

    //getter
    int getX() const {return x;};
    void setX(int _val) {x = _val;}
    //setter

    void print() const {
        cout << x << endl;
    }



    // for making friend, item = function, class should be outside of the real world = main function.
    // friend class B;
    // friend void print( const A &);// we can make a function to friend, too.
};

class B{
    public :
    void print (const A&a){
        cout << a.getX() << endl; 
        //we can not use private x directly here without making B the friend of A.
        // cout << a.x << endl;

        a.print();
        //if we have used const only in this print function then it will show an error bcz via getter it can be any X.
        // so to solve the error we need to use const in getter of class A, too.
    }
};

// void print (const A &a){
//     cout << a.x << endl;
// }

int main(){
    A a(5);//initialization of a as a object of A
    B b;// initialization of b as a object of B
    b.print(a);
    // print (a);
    return 0;
}

