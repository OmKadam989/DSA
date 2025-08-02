https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // code here
        Node * curr = head;
        unordered_map<Node *, bool> visited;
        
        while(curr)
        {
            if(visited[curr] == 1)
            return 1;
            
            visited[curr] =1;
            curr = curr->next;
        }
        return 0;
    }
};