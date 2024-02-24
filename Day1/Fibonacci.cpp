#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n ;
        cin>>n ;
        int x = 0 ,y = 0 ;
        
        for(int i = 1 ; i <= n ; i++ ){
                if(i == 1 || i == 2){
                  x = 1 ;
                  y = 1 ;
                }
                else{
                        int z = x ;
                        x = x + y ;
                        y = z ;
                }
        }
       
        cout<<x ;
        return 0 ;
}