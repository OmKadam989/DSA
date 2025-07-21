#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main() {
    Node *head=NULL;
    if(head == NULL)
    {
        head= new Node(24);
    }
    Node *temp;
    temp = new Node(23);
    
    head->next = temp;
    
    Node *print;
    print = head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print->next;
    }
    
}


// **************************************************************************************************

#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node *next;
	Node(int value)
	{
		data = value;
		next = NULL;
	}
};
int main() {
	Node * head = NULL;
	Node *tail = NULL;

	int arr[]= {34,32,34,223,4};
	for(int i=0; i<5; i++)
	{
		Node *newNode = new Node(arr[i]);
		if(head == NULL)
		{
			head = newNode;
			tail = head;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	Node * temp = new Node(23);
	temp->next = head;
	head = temp;

	Node *print;
	print = head;
	while(print)
	{
		cout<<print->data<<" ";
		print = print->next;
	}
}

// _______________________________________________________________________________________________________________

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main() {
    Node *head= NULL;
    Node *tail = NULL;
    
    int arr[]={34,2,34,55};
    
    for(int i=0; i<4; i++)
    {
        Node * newNode = new Node(arr[i]);
        if(head == NULL)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node *temp = new Node(100);
    tail->next = temp;

    Node * print=head;
    while(print)
    {
        cout<<print->data<<" ";
        print = print->next;
    }
}

