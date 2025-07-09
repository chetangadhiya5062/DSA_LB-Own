#include <iostream>
using namespace std;

class Base{
    public: 
    // ctor of base.
    // virtual Base(){ == this is the virtual Ctor.. it is not possible.
    Base(){
        cout << " Base Ctor " << endl;
    }

    virtual ~Base(){ //  virtual Dtor can be possible.
        cout << " Base Dtor " << endl;
    }
};

class Derived : public Base{// syntax of inheritance
public :

    int *a;
    Derived(){
        a = new int[1000];// allocation o f heap
        cout << " Derived Ctor " << endl;
    }

    ~Derived(){
        delete[] a;// it is mendatory to de allocate the heap.
        // but without making base dtor a virtual, this derived dtor can not be called.,
        // in this case the memory couldn't be deallocated.
        cout << " Derived Dtor " << endl;
    }
};

int main(){
    Base *b = new Derived();// allocated ptr by own..
    delete b;// because we allocated the ptr by own.

    return 0;
}