#include<iostream>
#include<math.h>
#include<vector>

using namespace std ;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i = 0 , j = 0  ;
    int temp = -1 ;
    vector<int> v ;
    int n = a.size() , m = b.size() ;
    
    while(i < n && j < m){
        if(a[i] < b[j]){
            if(a[i] != temp){
                v.push_back(a[i]) ;
                temp = a[i] ;
            }
            i++ ;
        }
        else if(b[j] < a[i]){
            if(b[j] != temp){
                v.push_back(b[j]) ;
                temp = b[j] ;
            }
            j++ ;
        }
        else{
            if(temp != a[i]){
                v.push_back(a[i]) ;
                temp = a[i] ;
            }
            i++ ;
            j++ ;
        }
    }

    while(i < n){
        if(temp != a[i]){
            v.push_back(a[i]) ;
            temp = a[i] ;
        }
        i++ ;
    }

    while(j < m){
        if(temp != b[j]){
            v.push_back(b[j]) ;
            temp = b[j] ;
        }
        j++ ;
    }

    return v ;
}