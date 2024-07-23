//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        map<long long, int> preSumMap ;
        
        long long sum = 0 ;
        int maxLen = 0 ;
        
        for(int i = 0; i < n; i++){
            sum += a[i] ;

            if(sum == k){
                maxLen = max(maxLen, i + 1) ;
            }
        
            long long rem = sum - k ;

            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem] ;
                maxLen = max(maxLen, len) ;
            }

            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i ;
            }
        }

        return maxLen ;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends