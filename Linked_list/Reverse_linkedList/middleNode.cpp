#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node * next;
    Node (int value) {
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
    Node * temp =  new Node(a[index]);
    temp->next = createList(a, size, index+1);
    return temp;
}

Node * reverse(Node * &head, Node * prev)
{
    Node * curr = head;
    if(curr == NULL)
    {
        return prev;
    }
    
    Node * fut = curr->next;
    curr->next = prev;
    return reverse(fut, curr);
    
    
}

Node * middle(Node * head)
{
    Node * slow =head;
    Node * fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void print(Node * head)
{
    Node * temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node * head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    head = createList(arr, size, 0);

//   head = reverse(head, NULL);
    head=middle(head);

    print(head);
}
