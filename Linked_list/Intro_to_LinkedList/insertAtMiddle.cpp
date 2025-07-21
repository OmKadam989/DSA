#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main() {
    Node *head= NULL;
    Node *tail = NULL;
    
    int arr[]={34,2,34,55};
    
    for(int i=0; i<4; i++)
    {
        Node * newNode = new Node(arr[i]);
        if(head == NULL)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int x=3;
    Node *temp = head;
    x--;
    while(x--)
    {
        temp = temp->next;
    }
   Node *temp2= new Node(28);
   temp2->next = temp->next;
   temp->next = temp2;
   
   
   
//   ____________________
    Node * print=head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print->next;
    }
}
