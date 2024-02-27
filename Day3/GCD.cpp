int calcGCD(int n, int m){
    // Write your code here.
    int big , small ;
    if(n == m){
        return n ;
    }

    if(m>n){
        big = m ;
        small = n ;
    }
    else{
        big = n ;
        small = m ;
    }
    while (big != 0) {
        if(small > big){
            int temp = small ;
            small = big ;
            big = temp ;
        }
        big = big%small ; 
    }
    return small ;
}