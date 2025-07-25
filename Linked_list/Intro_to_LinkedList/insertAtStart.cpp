#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next= NULL;
    }
};
int main() {
    Node *head;
    head = new Node(28);
    Node *temp;
    temp= new Node(32);
    
    temp->next = head;
    head = temp;
    
    
    Node *print;
    print= head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print-> next;
    }
}
// if linked list is empty
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next= NULL;
    }
};
int main() {
    Node *head=NULL;
    if(head == NULL)
    {
        head = new Node(28);
    }
    // head = new Node(28);
    
    Node *temp;
    temp= new Node(32);
    
    temp->next = head;
    head = temp;
    
    
    
    Node *print;
    print= head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print-> next;
    }
}

// **************************************************************************************************************88
// with recursion
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

Node * createLinked(int arr[], int size, int index)
{
    if(index == size)
    return NULL;
    
    Node * temp;
    temp = new Node(arr[index]);
    temp->next = createLinked(arr,size, index+1);
    return temp;
}
void printList(Node * head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head ->next;
    }
};

int main() {
    Node * head= NULL;
    int arr[] = {23,2,3,222,34};
    int size=5;
    head=createLinked(arr,size,0);

    if(head != NULL)
    {
        Node * temp = head;
        head = head ->next;
        delete temp;
    }
    
    printList(head);
    
}