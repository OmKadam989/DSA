https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
     
        int count=0;
        Node * tail = head;
        while(tail)
        {
            count++;
            tail = tail->next;
        }
        
        k = k % count;
        if(head->next == NULL || k==0) return head;
        Node * temp = head;
        
        Node * front= head;
        Node * curr = NULL;
        
        while(k)
        {
            curr = front;
            front = front->next;
            k--;
        }
        
        curr->next = NULL;
        head = front;
        
        while(front->next)
        {
            front = front->next;
        }
        front->next = temp;
        
        return head;
        
    }
};