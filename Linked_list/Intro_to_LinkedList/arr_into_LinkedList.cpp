#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int next;
};
int main() {
    Node *head;
    head = new Node();
    head->data =24;
    head->next=242;
    
    cout<<head->data<<endl;
    cout<<head->next;
}

// statically
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int next;
};
int main() {
    Node A1;
    A1.data=23;
    A1.next=100;
    
    cout<<A1.data<<endl<<A1.next;
}

// by using a function
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
    Node *head;
    head = new Node(24);
    
    cout<<head;
}
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
    Node * head = NULL;
    Node *tail = NULL;
    
    int arr[]={34,32,34,223,4};
    for(int i=0; i<5; i++)
    {
        Node *newNode = new Node(arr[i]);
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
    
    Node *print;
    print = head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print->next;
    }
}

