#include <iostream>
using namespace std;

class Node{
public: 
    //args.
    int data;
    Node* next;

    //default ctor
    Node(){
        this -> next = NULL;
    }


    //parametrize ctor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        
    }

};

void insertHead(Node* &head, Node* tail, int data){
    if (head == NULL){
        // empty LL case

        // step1 : create new node
        Node * temp = new Node(data);

        // step2 : update head
        head = temp;

    }
    else {
        // create node to be inserted. =  temp
        // Node* temp = head;// this is allocating temp name to head.
        // so that is not the correct way to create the node.
        
        Node* temp = new Node(data);// created the correct node.
        temp -> next = head;
        head = temp;// update head to new inserted node.
        tail = temp;
        // if you pass the head by value then it will not add anything.
        // so you must need to pass the head by reference.

    }
}

int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length ++;
        temp = temp->next;
    }


    return length;
}

void insertTail(Node* head, Node*tail, int data){
    if (head == NULL){
        // empty LL case

        // step1 : create new node
        Node * temp = new Node(data);

        // step2 : update head
        head = temp;
        tail = temp;

    }
    else {
        // create node to be inserted. =  temp
        // Node* temp = head;// this is allocating temp name to head.
        // so that is not the correct way to create the node.
        
        Node* temp = new Node(data);// created the correct node.
        tail -> next = temp;
        tail = temp;// update head to new inserted node.
    
        // if you pass the head by value then it will not add anything.
        // so you must need to pass the head by reference.

    }
}

void insertAtPos(Node* head, Node*tail, int data, int pos){
    int length = getLength(head);

    if(pos <= 1){
        insertHead(head, tail, data);
    }
    else if(pos > length){
        insertTail(head, tail, data);
    }
    else{
        // insert middel of LL
        // step : 1 create new Node

        Node* temp = new Node(data);
        //step2 : traverse pre // curr to position
        Node* prev = NULL;
        Node* curr = head;

        while(pos != 1){
            prev = curr;
            curr = curr -> next;
            pos--;
        }
        prev -> next = temp;
        temp -> next = curr;
    }
}
void printLL(Node* head){
    // always create the temp node to access other nodes.
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp -> next;
    }
    cout << endl;
}

void creatTail(Node* &head, Node* &tail){
    Node* temp = head;

    while (temp!= NULL){
        temp = temp -> next;
    }
    tail = temp;
}
int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    // linking the list

    node1 -> next = node2;
    node2 -> next = node3;

    Node* tail = node3;
    Node* head = node1;

    cout << "Before Insertion : " ;
    printLL(head);

    cout << "After Insertion : ";
    // insertHead(head);// head must be pass by reference into the function.
    // insertTail(head, tail, 500);
    insertAtPos(head, tail, 40, 3);
    printLL(head);

    return 0;
}