//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node* nHead = reverse(head) ;
        Node* temp = nHead ;
        Node* prev = nullptr ;
        
        int sum = 0 ;
        int carry = 0 ;
        
        bool flag = false ;
        
        while(temp){
            
            if(!flag){
                sum = (temp->data + carry + 1)%10 ;
                carry = (temp->data + carry + 1)/10 ;
                flag = true ;
            }else{
                sum = (temp->data + carry)%10 ;
                carry = (temp->data + carry)/10 ;
            }
            temp->data = sum ;
            prev = temp ;
            temp = temp->next ;
        }
        
        if(carry){
            prev->next = new Node(carry) ;
        }
        
        head = reverse(nHead) ;
        
        return head ;
        
    }
    
    Node* reverse(Node* head){
        Node* old = nullptr ;
        Node* temp = head ;
        
        
        while(temp){
            Node* nex = temp->next ;
            temp->next = old ;
            old = temp ;
            temp = nex ;
        }
        
        return old ;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends