https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
public:
    // Iterative reverse (safe for large lists / many TCs)
    Node* reverseIter(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr) {
            Node* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    Node* addTwoLists(Node* head1, Node* head2) {
        // reverse both inputs so we can add from least significant digit
        Node* first = reverseIter(head1);
        Node* second = reverseIter(head2);

        Node* dummy = new Node(0);
        Node* tail = dummy;
        int carry = 0;

        while (first || second || carry) {
            int sum = carry;
            if (first) { sum += first->data; first = first->next; }
            if (second) { sum += second->data; second = second->next; }

            tail->next = new Node(sum % 10);
            tail = tail->next;
            carry = sum / 10;
        }

        // result currently reversed (LSB -> MSB), reverse it to MSB -> LSB
        Node* result = reverseIter(dummy->next);
        delete dummy;

        // remove any leading zeros (but keep one zero if the number is actually 0)
        while (result && result->data == 0 && result->next) {
            Node* tmp = result;
            result = result->next;
            delete tmp;
        }

        return result;
    }
};
