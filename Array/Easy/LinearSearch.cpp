#include<iostream>
#include<math.h>
#include<vector>

using namespace std ;

int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i = 0 ; i < n ; i++){
      if (num == arr[i]) {
        return i;
      }
    }
    return -1 ;
}
