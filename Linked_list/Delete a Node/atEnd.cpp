#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node * createlist(int a[], int size, int index)
{
    if(index == size)
    {
        return NULL;
    }
    Node * temp;
    temp = new Node(a[index]);
    temp->next = createlist(a,size,index+1);
    return temp;
}
void print(Node * head)
{
    Node * tail = head;
    while(tail != NULL)
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    }
}
Node *  del(Node * &head)
{
    Node *curr = head;
    Node *prev=NULL;
    while(curr->next != NULL)
    {
        prev = curr;
        curr=curr->next;
    }
    delete curr;
    prev->next = NULL;
    
    return head;
}
int main () {
    Node* head = NULL;
    int arr[]={23,43,45,322,4};
    int size= sizeof(arr) / sizeof(arr[0]);
    
    head=createlist(arr,size,0);
    
    del(head);
    
    print(head);
}

#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node(int value)
    {
        data = value;
        next = NULL;
        
    }
};

Node * createList(int *a, int size, int index)
{
    if(index == size)
    {
        return NULL;
    }
    
    Node * temp;
    temp = new Node(a[index]);
    temp->next= createList(a, size, index +1);
    return temp;
}
void del(Node * &head)
{
    if(head!= NULL)
    {
        Node * curr = head;
        Node * prev = NULL;
        
        while(curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        delete curr;
        prev->next = NULL;
    }
    else
   delete head;
    
}
void print ( Node * head)
{
    Node * tail= head;
    while(tail != NULL)
    {
        cout<<tail->data<<" ";
        tail = tail->next;
        
    }
}

int main () {
    Node * head = NULL;
    int arr[]={};
    int size = sizeof(arr) / sizeof(arr[0]);
    head = createList(arr,size,0);
    
    del(head);
    
    print(head);
}
