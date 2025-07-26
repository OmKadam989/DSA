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

    // Reverse the list
    Node * prev = NULL;
    Node * curr = head;
    Node * fut = NULL;

    while(curr)
    {
        fut = curr->next;   // ✅ Step 1: Save next node
        curr->next = prev;  // ✅ Step 2: Reverse current node's pointer
        prev = curr;        // ✅ Step 3: Move prev ahead
        curr = fut;         // ✅ Step 4: Move curr ahead
    }

    head = prev;  // ✅ New head after reversal

    print(head);
}
