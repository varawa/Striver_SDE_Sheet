#include<iostream>
#include<string>

using namespace std ;
bool palindrome(int n)
{
    // Write your code here
    string ans ;
    int x = n ;
    if(x == 0){
        return true ;
    }
    while(x != 0){
        ans.push_back(x%10 + '0') ;
        x = x/10 ;
    }

    int a = stoi(ans) ;
    if(a == n){
        return 1 ;
    }
    return 0 ;

}