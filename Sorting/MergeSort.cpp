#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       MergeSort(0 , nums.size() - 1 , nums) ;
       return nums ;
    }

    void MergeSort(int low , int high , vector<int>& nums){
        if(low < high){
            int mid = (low + high) / 2 ;
            MergeSort(low , mid , nums) ;
            MergeSort(mid + 1 , high , nums) ;
            Merge(low , mid , high , nums) ;
        }
    }

    void Merge(int low , int mid , int high , vector<int>& nums){
        int i = low ; 
        int j = mid + 1 ;
        int k = 0 ;
        int copy[high - low + 1] ;

        while(i <= mid && j <= high){
            if(nums[i] <= nums[j]){
                copy[k] = nums[i] ;
                i++ ;
            }else{
                copy[k] = nums[j] ;
                j++ ;
            }
            k++ ;
        }

        while (i <= mid) 
            copy[k++] = nums[i++];

        while (j <= high) 
            copy[k++] = nums[j++];
        
        for (int p = 0 ; p < high - low + 1 ; p++) 
            nums[low + p] = copy[p];

    }
};