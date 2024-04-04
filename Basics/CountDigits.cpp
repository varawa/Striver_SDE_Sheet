int countDigits(int n){
	// Write your code here.
	int x = n , count = 0 ;
	while(x != 0){
		if(x%10 != 0){
            if (n % (x % 10) == 0) {
                count++;
            }
        }
        x = x/10 ;
	}	
	return count ;	
}