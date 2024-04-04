#include<iostream>
#include<vector>

using namespace std ;

vector<int> printNos(int x) {
    if(x == 1){
        vector<int> v ;
        v.push_back(1) ;
        return v ;
    }

    vector<int> v = printNos(x-1) ; 
    v.push_back(x) ;

    return v ;
}