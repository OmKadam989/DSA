#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node * prev;
    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
int main () {
    Node * head = new Node(5);
    if(head == NULL)
    {
        head = new Node(5);
    }
    else
    {
        Node * temp = new Node(10);
        temp->next = head;
        head->prev = temp;
        head = temp;
        
    }
     
    Node * temp = new Node (23);
    Node * curr = head;
    while(curr->next )
    {
        curr = curr->next;
    }
    temp->prev = curr;
    curr->next = temp;
    
    Node * print = head;
    while(print){
        cout<<print->data<<" ";
        print = print-> next;
    }
}

// what if the node is not present 

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node * prev;
    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
int main () {
    Node * head = NULL;
    // Node * head = new Node(5);
    // if(head == NULL)
    // {
    //     head = new Node(5);
    // }
    // else
    // {
    //     Node * temp = new Node(10);
    //     temp->next = head;
    //     head->prev = temp;
    //     head = temp;
        
    // }
    if(head == NULL)
    {
        head = new Node(24);
        
    }
    else
    {
    Node * temp = new Node (23);
    Node * curr = head;
    while(curr->next )
    {
        curr = curr->next;
    }
    temp->prev = curr;
    curr->next = temp;
    }
    Node * print = head;
    while(print){
        cout<<print->data<<" ";
        print = print-> next;
    }
    
}
