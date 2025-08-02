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
    Node * print = head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print -> next;
    }
    
}