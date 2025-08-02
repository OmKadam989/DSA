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
// covers  the edge cases
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
    
    int pos=3;
    
    // edge case: at starting if we have to insert at start we are pointing toward the 2 node instead of 1st
    // edge case: at end we are pointing temp->next->prev towards null->prev which will give segmentation fault
    
    // insert at start
    if(pos == 0)
    {
        // linked linst exist 
        if(head == NULL)
        {
            head = new Node (22);
        }
        // linked list is already existed
        else
        {
            Node * temp = new Node (22);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        // check if it's last or middle we have to go for the pos place
        Node * tail = head;
        while(--pos)
        {
            tail = tail->next;
        }
        
        // insert at end
        if(tail->next == NULL)
        {
            Node * temp = new Node (22);
            tail->next = temp;                   
            temp->prev = tail;
        }
        // insert at middle
        else                                     
        {
            Node * temp = new Node(22);
           temp->next = tail->next;
           tail->next = temp;
           temp->prev = tail;
           temp->next->prev = temp;
            
        }
        
    }
    
    
    print(head);
    
}

