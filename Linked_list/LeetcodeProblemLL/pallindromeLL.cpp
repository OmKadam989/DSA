https://leetcode.com/problems/palindrome-linked-list/description/

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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return 1;
        int count=0;
        ListNode * temp= head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        count /=2;
        ListNode * prev = NULL, *curr = head;
        while(count--)
        {
            prev = curr;
            curr =curr->next;
        }
        prev->next = NULL;
        // reverse
        ListNode *tail = NULL, *fut= NULL;
        while(curr)
        {
            fut = curr->next;
            curr->next = tail;
            tail = curr;
            curr = fut;
        }
        ListNode * head2 = tail;
        ListNode * head1 = head;

        while(head1)
        {
            if(head1->val != head2->val)
            return 0;
            head1 = head1->next;
            head2= head2->next;
        }
        return 1;
    }
};