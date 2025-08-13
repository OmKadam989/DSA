// https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// /*
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     Node* intersectPoint(Node* head1, Node* head2) {
//         //  Code Here
//         int count1=0, count2=0;
//         Node * curr1= head1, *curr2= head2;
        
//         while(curr1)
//         {
//             count1++;
//             curr1= curr1->next;
//         }
//         while(curr2)
//         {
//             count2++;
//             curr2= curr2->next;
//         }
//         curr1=head1, curr2= head2;
        
//         if(count1 > count2)
//         {
//             int count= count1- count2;
//             while(count--)
//             {
//                 curr1= curr1->next;
//             }
//         }
//         else
//         {
//             int count = count2 - count1;
//             while(count --)
//             {
//                 curr2 = curr2->next;
//             }
//         }
        
//         while( curr1 != curr2)
//         {
//             curr1 = curr1->next;
//             curr2 = curr2->next;
//         }
        
//         return curr1;
//     }
    
    
// };


// /*
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     Node* intersectPoint(Node* head1, Node* head2) {
//         //  Code Here
//         Node * curr1 = head1;
//         while(curr1->next)
//         {
//             curr1 = curr1->next;
//         }
//         curr1->next = head1;
        
//         Node * slow = head2, *fast = head2;
//         while(fast && fast->next)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
            
//             if(slow == fast)
//             break;
//         }
        
//         slow = head2;
//         while(slow != fast)
//         {
//             slow= slow->next;
//             fast = fast->next;
//         }
//         return slow;
        
//     }
// };