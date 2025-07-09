#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
private :
    string gf;

public :
    int id;
    int age;
    bool present;
    string name;
    int nos;

    // no empty student
    // ctor : default ctor : assigns garbage value
    Student(){
        cout << "Student ctor called" << endl;
    }
    //parametrize ctor: (constructor with parameters given)
    // if two different type of ctor present in the class., it is called polymorphism.
    Student (int id, int age, bool present, string name, int nos, string gf){
        this -> id = id;
        this -> name = name;
        this -> age = age;
        this -> present = present;
        this -> nos = nos;
        this -> gf = gf;

        cout << "Student Parametrized with GF called." << endl;

    }

    Student (int id, int age, bool present, string name, int nos){
        this -> id = id;
        this -> name = name;
        this -> age = age;
        this -> present = present;
        this -> nos = nos;

        cout << "Student Parametrized without GF called." << endl;

    }

    void study (){
        cout << "Darshan is studying" << endl;
    }

    void sleep (){
        cout << " Prerak is Sleeping " << endl;
    }

    void bunk(){
        cout << "Hil always bunks the class." << endl;
    }

private :
    void gfchatting(){
        cout << "Chatting" << endl;
    }
    
};
int main(){
    
    //copy ctor and ctor doesnot have any return type.
    //this is copy ctor.
    Student s1(1, 12,  1, "Chhota Bheem", 1, "Chutki");// call of parametrize ctor
    // Student s1(1, 12,  1, "Chhota Bheem", 1);// call of parametrize ctor without GF
    Student s2;
    s2 = s1;// s2 is initialized via copy ctor

    cout << s1.name << endl;
    cout << s2.name << endl;

    return 0;
}
