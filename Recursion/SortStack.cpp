//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
    stack<int> temp ;
    int num = s.top() ;
    s.pop() ;
    temp.push(num) ;
    while(!s.empty()){
        num = s.top() ;
        s.pop() ;
    
        while(!temp.empty() && temp.top() < num ){
            int n = temp.top() ;
            temp.pop() ;
            s.push(n) ;
        }
    
        temp.push(num) ;
        
        while(!s.empty() && s.top() < temp.top()){
            int n = s.top() ;
            s.pop() ;
            temp.push(n) ;
        }
    }
    while(!temp.empty()){
        int n = temp.top() ;
        s.push(n) ;
        temp.pop() ;
    }
}