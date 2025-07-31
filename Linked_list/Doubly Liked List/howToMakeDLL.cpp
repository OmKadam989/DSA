#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node * prev;
    Node(int value)
    {
        data = value;
        prev - NULL;
        next = NULL;
    }
};
int main () {
    Node * head = new Node(5);
    cout<<head->data<<endl;
    cout<<head->prev<<" "<<head->next;
    
}