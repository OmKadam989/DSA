https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

// // code
// /*Linked list Node structure

// struct Node
// {
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }

// };
// */

// time complexity: )(N*K)
// class Solution {
//   public:
//   Node * merge(Node * head1, Node * head2)
//   {
//       Node * head = new Node(0);
//       Node * tail = head;
      
//       while(head1 && head2)
//       {
//           if(head1->data <= head2->data)
//           {
//               tail->next = head1;
//               head1 = head1->next;
//               tail = tail->next;
//               tail->next = NULL;
//           }
//           else
//           {
//               tail->next= head2;
//               head2 = head2->next;
//               tail = tail->next;
//               tail->next = NULL;
//           }
//       }
//       if(head1) tail->next = head1;
//       if(head2) tail->next = head2;
      
//       return head->next;
//   }
//     Node* mergeKLists(vector<Node*>& arr) {
//         // Your code here
//         Node * head = arr[0];
//         for(int i=1; i<arr.size(); i++)
//         {
//             head = merge(head,arr[i]);
//         }
//         return head;
//     }
// };


// using merge sort
// time complexity: 0(logN * K)
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

// class Solution {
//   public:
//   Node * merge(Node * head1, Node * head2)
//   {
//       Node * head = new Node(0);
//       Node * tail = head;
      
//       while(head1 && head2)
//       {
//           if(head1->data <= head2->data)
//           {
//               tail->next = head1;
//               head1 = head1->next;
//               tail = tail->next;
//               tail->next = NULL;
//           }
//           else
//           {
//               tail->next= head2;
//               head2 = head2->next;
//               tail = tail->next;
//               tail->next = NULL;
//           }
//       }
//       if(head1) tail->next = head1;
//       if(head2) tail->next = head2;
      
//       return head->next;
//   }
//   void  mergesort(vector<Node * > &arr, int start, int end)
//   {
//       if(start >= end) return;
      
//       int mid = start + (end - start) /2;
      
//     //   left part
//       mergesort(arr,start,mid);
//     // right part
//       mergesort(arr,mid+1,end);
      
//     //   merge
//     arr[start] = merge(arr[start], arr[mid+1]);
      
//   }
//     Node* mergeKLists(vector<Node*>& arr) {
//         // Your code here
//         Node * head = arr[0];
//       mergesort(arr,0,arr.size()-1);
//       return arr[0];
//     }
// };