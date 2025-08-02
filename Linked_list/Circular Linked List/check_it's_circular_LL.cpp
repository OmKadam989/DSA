// problem link
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
    bool check(vector<Node *> &visited, Node * curr)
    {
        for(int i=0; i<visited.size(); i++)
        {
            if(visited[i] == curr)
            return 1;
        }
        return 0;
    }
    bool detectLoop(Node* head) {
        // code here
        vector<Node *> visited;
        Node * curr= head;
        
        while(curr)
        {
            if(check(visited, curr))
            return 1;
            
            visited.push_back(curr);
            curr= curr-> next;
        }
        return 0;
    }
};
