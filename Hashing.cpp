//HASHING

#include<bits/stdc++.h>
using namespace std ;
    

int main(){
    //Inside main function , an array of type int can at max have a size of 10^6 .
    //But if its declared globally we can declare till 10^7 characters .

    //Inside main function , an array of type bool can at max have a size of 10^7 .
    //But if its declared globally we can declare till 10^8 characters .
    
    int n ;
    cin>>n ;

    int arr[n] ;
    cout<<"Here"<<endl ;

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    cout<<"Here"<<endl ;

    int hashh[13] = {0} ;
    //Pre Compute
    for(int i = 0 ; i < n ; i++){
        hashh[arr[i]] += 1 ;
    }

    int q ;
    cin>>q ;

    while(q--){
        int number ;
        cin>>number ;
        cout<<hashh[number] ;
    }
    
    return 0 ;
}