class Solution {
public:
    int passThePillow(int n, int time) {
        
        int total_cycles = time/(n-1) ;

        return (total_cycles % 2 == 0) ? time%(n-1) + 1 : n - (time%(n-1)) ;
    }
};