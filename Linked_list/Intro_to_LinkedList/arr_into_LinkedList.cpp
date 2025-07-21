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