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
void del(Node * &head, int x)
{
    Node * curr= head;
    Node *prev = NULL;
    x--;
    while(x--)
    {
        prev = curr;
        curr =  curr->next;
    }
    prev->next = curr->next;
    delete curr;
    
    
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
    int arr[]={2,3,4,21,23};
    int x =3;
    int size = sizeof(arr) / sizeof(arr[0]);
    head = createList(arr,size,0);
    
    del(head,x);
    
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
void del(Node * &head, int x)
{
    if(head != NULL)
    {
    Node * curr= head;
    Node *prev = NULL;
    x--;
    while(x--)
    {
        prev = curr;
        curr =  curr->next;
    }
    prev->next = curr->next;
    delete curr;
    
    }
    else
    {
    Node * temp = head; 
    head = NULL;
    delete temp;
    }
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
    int arr[]={2,3,4,21,23};
    int x =3;
    int size = sizeof(arr) / sizeof(arr[0]);
    head = createList(arr,size,0);
    
    del(head,x);
    
    print(head);
}
