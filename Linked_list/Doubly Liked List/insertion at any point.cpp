#include<iostream>
#include<vector>
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
    vector<int> arr = {2,3,4,5,6};
    
    Node * curr, *head;
    head = curr =NULL;
    
    for(int i=0; i<5; i++)
    {
        Node * temp = new Node (arr[i]);
        if(head == NULL)
        {
            head = temp;
            curr = head;
        }
        else
        {
            temp->prev = curr;
            curr->next = temp;
            curr = temp;
        }
    }
    int pos =3;
    Node * cur=head;
    while(--pos)
    {
        cur = cur->next;
    }
    Node * temp = new Node(10);
    temp->next = cur->next;
    temp->prev = cur;
    cur->next = temp;
    temp->next->prev = temp;
    
    Node * print = head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print->next;
    }
    
}

