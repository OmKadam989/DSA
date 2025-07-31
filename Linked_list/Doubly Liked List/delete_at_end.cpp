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
    int size = 1;
    head = createNode(arr,size,0,NULL);
  
    //   delete at end
    if(head == NULL || head->next == NULL)
    {
        delete head;
        head = NULL;
        
    }
    else
    {
   Node * temp = head;
   while(temp->next != NULL)
   {
       temp = temp->next;
   }
   temp->prev->next = NULL;
   delete temp;
    }
    
    print(head);
    
}
