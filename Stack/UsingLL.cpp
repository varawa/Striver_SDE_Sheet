//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends

//{ Driver Code Starts

/*struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};*/


//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode* temp = top ;
    top = new StackNode(x) ;
    top->next = temp ;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top == nullptr)
        return -1 ;
        
    StackNode* t = top ;
    
    int popped = top->data ;
    
    top = top->next ;
    
    delete t ;
        
    return popped ;
}

