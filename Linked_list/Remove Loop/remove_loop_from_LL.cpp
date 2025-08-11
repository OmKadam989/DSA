https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node  * slow = head, * fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            break;
        }
        if(fast == NULL || fast ->next== NULL)
        return ;
        
        slow = head;
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        while(slow->next != fast)
        {
            slow = slow->next;
        }
        slow->next = NULL;
        
        
    }
};



/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node * slow =head, *fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) break;
        }
        if(fast== NULL || fast->next == NULL) return;
        
        int count =1;
        slow = slow->next;
        while(slow != fast)
        {
            count++;
            slow = slow->next;
        }
        
        slow = head;
        fast = head;
        while(count--)
        {
            fast = fast->next;
        }
        
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        while(slow->next != fast)
        {
            slow = slow->next;
        }
        slow->next = NULL;
        
    }
    
};