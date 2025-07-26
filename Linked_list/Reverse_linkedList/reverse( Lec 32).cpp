#include<bits/stdc++.h>
using namespace std;
class ListNode {
    public:
    int value;
    ListNode * next;
    ListNode(int data)
    {
     value = data;
        next = NULL;
    }
};

ListNode * createList(int *a,  int size, int index)
{
    if(index == size)
    {
        return NULL;
    }
    ListNode * temp = new ListNode(a[index]);
    temp->next = createList(a, size, index+1);
    return temp;
}
ListNode * reverse(ListNode * &head, vector<int> &ans)
{
    ListNode * tail = head;
    while(tail)
    {
        ans.push_back(tail->value);
        tail= tail->next;
    }
    int i= ans.size()-1;
    
    tail= head;
    while(tail)
    {
        tail->value = ans[i];
        tail = tail->next;
        i--;
    }
    return tail;
}

int main() {
    ListNode * head =NULL;
    int arr[]={1,2,3,4,5};
    int size = 5;
    
    head=createList(arr,size,0);
    vector<int>ans;
    reverse(head, ans);
    
    ListNode * temp = head;
    while(temp)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

