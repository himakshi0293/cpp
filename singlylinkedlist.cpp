#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // ~Node(){
    //     int value = this -> data;
    //     //free memory
    //     if(this -> next != NULL){
    //         delete next;
    //         this -> next = NULL;
    //     }
    // }
};

//insert at start
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//insert at last
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail= temp;
}

//insert at any given position
void insertAtMiddle(Node* &tail,Node* &head,int position, int d){
    Node* temp = head;
    int count =1;

    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    if(position ==1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
    }
    else{
        Node* current = head;
        Node* prev = NULL;
        
        int count =1;
        while(count <= position){
            prev = current;
            current = current -> next;
            count++;
        }
        prev -> next = current -> next;
        current -> next = NULL;
    }
}

//printing function
void printLL(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    printLL(head);
    insertAtTail(tail, 12);
    printLL(head);

    insertAtTail(tail, 13);
    printLL(head);

    insertAtTail(tail, 14);
    printLL(head);

    insertAtMiddle(tail,head,2,22);
    printLL(head);
    // cout<<"hey";
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deleteNode(6,head);
    printLL(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    return 0;
}