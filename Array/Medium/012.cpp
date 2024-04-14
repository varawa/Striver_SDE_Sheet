#include<iostream>
#include<math.h>
#include<vector>

using namespace std ;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size() ;
        int red = 0 , white = 0 , blue = 0 ;
       for(int i = 0 ; i < n ; i++){
            if(arr[i] == 0){
                red++ ;
            }
            if(arr[i] == 1){
                white++ ;
            }
            if(arr[i] == 2){
                blue++ ;
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(red != 0){
                arr[i] = 0 ;
                red-- ;
            }
            else if(white != 0 && red == 0){
                arr[i] = 1 ;
                white-- ;
            }
            else{
                arr[i] = 2 ;
            }
        }
    }
};