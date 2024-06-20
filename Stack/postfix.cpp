//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        string postfix;
        stack<char> stk;

        for (int i = 0; i < s.length(); i++) {
            if (isAl(s[i])) {
                postfix += s[i];
            } else if (s[i] == '(') {
                stk.push(s[i]);
            } else if (s[i] == ')') {
                while (!stk.empty() && stk.top() != '(') {
                    postfix += stk.top();
                    stk.pop();
                }
                if (!stk.empty() && stk.top() == '(') {
                    stk.pop(); 
                }
            } else { 
                while (!stk.empty() && prec(stk.top()) >= prec(s[i])) {
                    postfix += stk.top();
                    stk.pop();
                }
                stk.push(s[i]);
            }
        }

        while (!stk.empty()) {
            postfix += stk.top();
            stk.pop();
        }

        return postfix;
    }
    
    bool isAl(char c){
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
            return true ;
        }
        if(c >= '0' && c <= '9' ){
            return true ;
        }
        return false ;
    }
    
    int prec(char c){
        switch(c){
            case '+': 
                    return 1 ;
                    break ;
            case '-': 
                    return 1 ;
                    break ;
            case '*': 
                    return 2 ;
                    break ;
            case '/': 
                    return 2 ;
                    break ;
            case '^': 
                    return 3 ;
                    break ;
            default :
                return -1 ;
        }
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends