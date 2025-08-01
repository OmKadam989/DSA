// problem link
https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node * curr = head;
        int count0=0, count1=0, count2=0;
        
        while(curr)
        {
            if(curr->data ==0)
            {
                count0++;
                curr = curr->next;
            }
            else if(curr->data == 1)
            {
                count1++;
                curr = curr->next;
            }
            else
            {
                count2++;
                curr = curr->next;
            }
        }
        curr = head;
        while(count0--)
        {
            curr->data = 0;
            curr = curr->next;
        }
        
        while(count1--)
        {
            curr->data = 1;
            curr = curr->next;
        }
        
        while(count2--)
        {
            curr->data = 2;
            curr = curr->next;
        }
        return head;
    }
};


// without changing the value of node 
class Solution {
  public:
    Node* segregate(Node* head) {
        // Dummy nodes for 0, 1, 2
        Node* zeroD = new Node(0);
        Node* oneD = new Node(0);
        Node* twoD = new Node(0);
        
        // Tail pointers for each list
        Node* zero = zeroD, *one = oneD, *two = twoD;
        
        Node* curr = head;
        
        while (curr) {
            if (curr->data == 0) {
                zero->next = curr;
                zero = zero->next;
            } else if (curr->data == 1) {
                one->next = curr;
                one = one->next;
            } else {
                two->next = curr;
                two = two->next;
            }
            curr = curr->next;
        }
        
        // Connect the sublists
        zero->next = oneD->next ? oneD->next : twoD->next;
        one->next = twoD->next;
        two->next = NULL;

        // Head of the new list
        Node* newHead = zeroD->next;

        // Free dummy nodes
        delete zeroD;
        delete oneD;
        delete twoD;

        return newHead;
    }
};
