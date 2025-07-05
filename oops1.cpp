#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student{
private :
    string gf;

public :
    int id;
    int age;
    bool present;
    string name;
    int nos;

    // ctor : default ctor : assigns garbage value
    // no khokhala student

    //parametrize ctor: (constructor with parameters given)
    // if two different type of ctor present in the class., it is called polymorphism.
    Student (int age, bool present, string name, int nos, string gf){
        this -> id = id;
        this -> name = name;
        this -> age = age;
        this -> present = present;
        this -> nos = nos;
        this -> gf = gf;

        cout << "Student Parametrized with GF called." << endl;

    }

    Student (int age, bool present, string name, int nos){
        this -> id = id;
        this -> name = name;
        this -> age = age;
        this -> present = present;
        this -> nos = nos;

        cout << "Student Parametrized without GF called." << endl;

    }

int main(){
    
}

}
