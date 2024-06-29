//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        int right = 0 ;
        int left = 0 ;
        
        int max = 0 ; 
        int length = 0 ;
        
        map<int , int> mpp ;
        
        while(right < N){
            mpp[fruits[right]] += 1 ;
            
            if(mpp.size() > 2){
                mpp[fruits[left]] -- ;
                if(mpp[fruits[left]] == 0){
                    mpp.erase(fruits[left]) ;
                }
                left++ ;
            }
            
            length = right - left + 1 ;
            
            if(length > max)
                max = length ;
            
            right++ ;
        }
        
        return max ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends