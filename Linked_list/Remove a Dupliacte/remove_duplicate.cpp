// problem link
// https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

// using arr approach   
/*
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
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        vector<int> ans;
        ans.push_back(head->data);
        
        Node * curr = head;
        while(curr)
        {
            if(ans[ans.size()-1] != curr->data)
            ans.push_back(curr->data);
            
            curr = curr->next;
        }
        curr = head;
        
        int index=0;
        Node * prev = NULL;
        while(index < ans.size())
        {
            curr->data = ans[index++];
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        return head;
        
        
    }
    
    
};


// without using any extrra space
/*
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
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node * curr = head->next, *prev = head;
        while(curr)
        {
            if(prev->data == curr->data)
            {
                prev->next = curr->next;
                delete curr;
                curr =prev ->next;
            }
            else
            {
                prev = prev->next;
                curr = curr->next;
            }
        }
        return head;
    }
};