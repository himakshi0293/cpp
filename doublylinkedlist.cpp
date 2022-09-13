#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this -> data= d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    temp -> prev = tail;
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,int position,int d){
    
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    // int n;
    // cin>>n;
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    //cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,14);
    print(head);

    return 0;
}