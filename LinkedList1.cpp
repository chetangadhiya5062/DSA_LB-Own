#include <iostream>
using namespace std;

class Node{
    public : 
        int data;
        Node* next;// Node* ptr., but name ptr is changed to next.

        Node(){ // default ctor.
            // cout << "This is Default" << endl;
            this -> next = NULL;
        }

        Node(int data){//parametrize ctor.
            // cout << "This is Parametrize." << endl;
            this -> data = data;
            this -> next = NULL;

        }
};

void printLL(Node* head){
    // never use the original ptr to traverse the LL.
    Node* temp = head;

    while(temp != NULL){
        cout << temp-> data << "->";
        temp = temp-> next;
    }
    cout << endl;
    
}

void lengthLL(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length ++;
        temp = temp->next;
    }
    cout << "length : " << length << endl;
}
int main(){//it doesn't matter that you create obj static or dynamic.,
    // but if it has no argument then automatically it calls the default constructor.

    // node creation.
    // Node a;// static object.
    
    //dynamic object.having data = given parameter but next = NULL.
    // all object creation.
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    // Allocating the nexts.

    first -> next = second;
    second -> next = third;
    third -> next = forth;
    forth -> next = fifth;
    fifth -> next = sixth;
    // no need to write below line because it already has NULL
    // sixth -> next = NULL; 

    Node* head = first;// we can directly use first. no compulsion of head but it is better practice to make copy to head and then use it.

    cout << "Printing the LL." << endl;
    printLL(head);
    lengthLL(head);

    return 0;
}