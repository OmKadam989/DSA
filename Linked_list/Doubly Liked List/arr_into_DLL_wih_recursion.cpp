#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node * next = NULL;
    Node * prev = NULL;
    Node( int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
void print(Node * curr)
{
    while(curr)
    {
        cout<<curr->data<<" ";
        curr= curr->next;
    }
}
Node * createDLL(vector<int> &arr, int size, int index, Node * back)
{
    if(index == size) return NULL;
    
    Node * temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr,size,index+1, temp);
    return temp;
}
int main () {
    vector<int> arr= {1,2,3,4,5};
    int size = arr.size();
    Node * head;
    head= createDLL(arr, size,0, NULL);
    
    print(head);
}
