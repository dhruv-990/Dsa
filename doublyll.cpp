#include <iostream>
using namespace std;

class Node {
public:
    int data; 
    Node *prev;
    Node *next;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class Doubly {
    Node *head;
    Node *tail;

public:
    Doubly() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node *newnode = new Node(val);

        if (head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void print() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push_back(int val){
         Node *newnode = new Node(val);
         if(head==NULL){
            head = tail = newnode;
         }

         else{
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
         }

    }
};

int main() {
    Doubly dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_front(4);


    
    dll.print();

   

    return 0;
}
