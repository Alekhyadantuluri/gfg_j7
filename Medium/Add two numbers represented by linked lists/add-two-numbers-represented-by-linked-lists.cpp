//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* reverse(struct Node * head){
        Node *prev = NULL,*next = NULL;
        Node *cur = head;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node *h1 = reverse(first);
        Node *h2 = reverse(second);
        int c1 = 0;
        Node *n1 = NULL;
        while(h1!= NULL && h2!= NULL){
            int c = c1+(h1->data+h2->data);
            c1 = c/10;
            Node *temp = new Node(c%10);
            temp->next = n1;
            n1=temp;
            h1=h1->next;
            h2=h2->next;
        }
        while(h1!=NULL){
            int c = c1+h1->data;
            c1 = c/10;
            Node *temp = new Node(c%10);
            temp->next = n1;
            n1=temp;
            h1=h1->next;
        }
        while(h2!=NULL){
            int c = c1+h2->data;
            c1 = c/10;
            Node *temp = new Node(c%10);
            temp->next = n1;
            n1=temp;
            h2=h2->next;
        }
        if (c1 != 0){
            Node *temp = new Node(c1);
            temp->next = n1;
            n1 = temp;
        }
        return n1;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends