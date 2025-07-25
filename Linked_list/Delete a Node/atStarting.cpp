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
Node * fun(int arr[], int size, int index)
{
    if(index == size)
    {
        return NULL;
    }
    Node * temp;
    temp = new Node(arr[index]);
    temp->next=fun(arr,size,index+1);
    return temp;
}
void print(Node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

int main() {
    int arr[]={23,34,32,21};
    int size=4;
   Node * head= fun(arr,size,0);
   
   if(head != NULL){
   Node *temp = head;
   head = head-> next;
   delete temp;
   }
   
   
   print(head);
}

// 2nd option
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
Node * fun(int arr[], int size, int index)
{
    if(index == size)
    {
        return NULL;
    }
    Node * temp;
    temp = new Node(arr[index]);
    temp->next=fun(arr,size,index+1);
    return temp;
}
void print(Node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

void del(Node * head)
{
    if(head != NULL)
    {
        Node * temp=head;
        head= head->next;
        delete temp;
    }
     while (head != NULL)
     {
         cout<<head-> data<<" ";
         head = head->next;
     }
}

int main() {
    Node * head = NULL;
    int arr[]={23,34,32,21};
    int size=4;
    head= fun(arr,size,0);
   
   del(head);
   
   
//   print(head);
}

// 3rd option
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
Node * fun(int arr[], int size, int index)
{
    if(index == size)
    {
        return NULL;
    }
    Node * temp;
    temp = new Node(arr[index]);
    temp->next=fun(arr,size,index+1);
    return temp;
}
void print(Node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

void del(Node * &head)
{
    if(head != NULL)
    {
        Node * temp=head;
        head= head->next;
        delete temp;
    }
    
}

int main() {
    Node * head = NULL;
    int arr[]={23,34,32,21};
    int size=4;
    head= fun(arr,size,0);
   
   del(head);
   
  print(head);
}