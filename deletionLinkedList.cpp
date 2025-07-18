// it is not properly solved., 
//someWhere it call the infinite loop..

#include<iostream>
using namespace std;

class Node{

    public :
        int data;
        Node* next;

    //default ctor.
    Node(){
        this -> next = NULL;
    }

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        cout << endl <<"Dtor called for : " << this -> data << endl;
    }
};

void printLL(Node* head){
    Node* temp = head;// copy node

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp -> next;
    }
    cout << "NULL" << endl; // <-- ADD THIS

}

// void findTail(Node* head){
//     Node* temp = head;
//     Node* tail;
    
//     while(temp != NULL){
//         temp = temp-> next;
//     }
//     tail = temp;

//     // return tail;
// }

int getLength(Node* head){
    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp-> next;
    }
    return length;
}
void deleteAtPosition(Node* &head, Node* &tail, int pos){
    

    int length = getLength(head);
    // Node* prev;
    
    if (head == NULL){
        cout << "Linkedlist is Empty. you can not delete this node." << endl;
        return;
    }

    if (pos == 1){
        //delete from head
        Node* temp = head;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else if (pos == length){
        // delete from tail
        Node* prev = head;
        while (prev -> next != tail){
            prev = prev -> next;
        }
        prev -> next = NULL;
        delete tail;
        tail = prev;
    }

    // delete from middle
    else{
    //step1 :  set prev and curr pointers.
    Node* prev = NULL;
    Node* curr = head;
    while (pos != 1){
        pos --;
        prev = curr;
        curr = curr -> next;
    }    
    //step 2: prev -> next ma curr no next node add karo.
    prev -> next = curr -> next;

    //step 3 : Node isolate karo
    curr -> next = NULL;

    //step 4 : delete Node
    delete curr;
    }
}
int main(){


    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    
    Node* head = first;
    Node* tail = fifth;
    printLL(head);

    deleteAtPosition(head, tail, 1);

    printLL(head);

    return 0;
}