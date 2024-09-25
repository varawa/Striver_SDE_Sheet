#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        makeHeap(nums);
        for (int i = nums.size() - 1; i > 0; i--) {
            swap(nums[0], nums[i]); 
            heapify(nums, 0, i); 
        }
        return nums;
    }
    
    void heapify(vector<int>& nums, int i, int size) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        
        if (left < size && nums[left] > nums[largest])
            largest = left;
        
        if (right < size && nums[right] > nums[largest])
            largest = right;
        
        if (largest != i) {
            swap(nums[i], nums[largest]);
            heapify(nums, largest, size);
        }
    }
    
    void makeHeap(vector<int>& heap) {
        int n = heap.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(heap, i, n);
        }
    }
};