#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node{

    public:
    int data;
    Node*next;

    Node(int val){
        data = val;
        next=NULL;
    }
};

class List{
    Node*head;
    Node*tail;

    public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){

        Node* newnode = new Node(val);
        if(head==NULL){
            head = tail = newnode;
            return;
        }

        else{
            newnode->next = head;
            head=newnode;
        }
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head = tail = newnode;
            return;
        }

        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    void print(){
        Node* temp = head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp ->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);

    ll.print();
    

    
    return 0;
}