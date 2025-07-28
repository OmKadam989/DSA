https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        // Step 1: Count total nodes
        while (temp) {
            count++;
            temp = temp->next;
        }

        int total = count - n;

        // Step 2: Special case - remove head
        if (total == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Step 3: Move to the (count - n)th node
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (total--) {
            prev = curr;
            curr = curr->next;
        }

        // Step 4: Remove curr
        prev->next = curr->next;
        delete curr;

       return head; 
    }
    
    };
