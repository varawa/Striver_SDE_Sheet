class Solution {
public:
    bool isPalindrome(string s) {
        string str = s ;
    int i = 0 , j = str.length() - 1 ;
    while(i < j){
        swap(str[i] , str[j]) ;
        i++ ;
        j-- ;
    }

    return s == str ;
    }
};