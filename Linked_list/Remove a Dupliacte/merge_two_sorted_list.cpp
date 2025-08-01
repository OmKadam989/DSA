// problem link
https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab



/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* dummy = new Node(0);
        Node* curr = dummy;

        // Safe merging while both are non-null
        while (head1 && head2) {
            if (head1->data <= head2->data) {
                curr->next = head1;
                head1 = head1->next;
            } else {
                curr->next = head2;
                head2 = head2->next;
            }
            curr = curr->next;
        }

        // Attach remaining nodes
        if (head1) curr->next = head1;
        if (head2) curr->next = head2;

        Node* result = dummy->next;
        delete dummy;  // Cleanup dummy node
        return result;
    
    }
};
//with disconnecting the node 
/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node * head = new Node(0);
        Node *curr= head;
        while(head1 || head2)
        {
            if(head1->data <= head2->data)
            {
                curr->next = head1;
                head1 = head1->next;
                curr = curr->next;
            }
            else
            {
                curr->next = head2;
                head2 = head2->next;
                curr = curr->next;
            }
        }
        curr =head;
        head = head->next;
        return head;
    }
};