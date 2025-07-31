#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node * prev;
    Node (int value)
    {
        data = value;
        next, prev = NULL;
    }
};
void print(Node * curr)
{
    while(curr)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
Node * createNode(vector<int>arr, int size, int index, Node * back)
{
    if(index == size) return NULL;
    
    Node * temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createNode(arr,size, index+1, temp);
    return temp;
}
int main () {
    vector<int> arr={1,2,3,4,5};
    Node * head = NULL;
    int size = 5;
    head = createNode(arr,size,0,NULL);
  
    // delete at any Node
    int pos = 3;
    Node * tail = head;
    while(--pos)
    {
        tail = tail->next;
    }
    tail->prev->next = tail->next;
    tail->next->prev = tail->prev;
    delete tail;
    
    
    
    print(head);
    
}

// covers the edge cases

#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node * prev;
    Node (int value)
    {
        data = value;
        next, prev = NULL;
    }
};
void print(Node * curr)
{
    while(curr)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
Node * createNode(vector<int>arr, int size, int index, Node * back)
{
    if(index == size) return NULL;
    
    Node * temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createNode(arr,size, index+1, temp);
    return temp;
}
int main () {
    vector<int> arr={1,2,3,4,5};
    Node * head = NULL;
    int size = 5;
    head = createNode(arr,size,0,NULL);
  
    // delete at any Node
    // delete at start
    int pos = 2;
    if(pos == 1)
    {
        Node * temp = head;
        delete temp;
        head = NULL;
    }
    else
    {
    Node * tail = head;
    while(--pos)
    {
        tail = tail->next;
    }
    
    if(tail->next == NULL)
    {
        // we are at the last node
        tail->prev->next = NULL;
        delete tail;
    }
    else
    {
        // we are at the Middle 
    tail->prev->next = tail->next;
    tail->next->prev = tail->prev;
    delete tail;
    }
    }
    
    
    
    print(head);
    
}
