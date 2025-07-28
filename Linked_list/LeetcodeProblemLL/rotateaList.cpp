https://leetcode.com/problems/rotate-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head  || !head->next || k==0) return head;
        int count=0;
        ListNode * temp= head;
        while(temp) {
            count++;
            temp = temp->next;
        }
        
        k %=  count;
        if(k==0) return head;
        count -= k;
        ListNode * prev = NULL;
        ListNode * curr = head;
        while(count--) {
            prev = curr;
            curr= curr->next;
        }
        // Node * fut= curr->next;
        prev->next = NULL;
        ListNode * tail = curr;
       while(tail->next)
       {
        tail = tail->next;
       }
        
        tail->next = head;

        return curr;
    }
};