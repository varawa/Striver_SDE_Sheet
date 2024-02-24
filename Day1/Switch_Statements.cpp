#include<iostream>
#include<vector>
#include<math.h>

using namespace std ;

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	
	double x = 0.0 ;
	
	switch(ch){
		case 1:
			
			x = M_PI*a[0]*a[0] ;
			
			break;
			
		case 2:
			x = a[0]*a[1] ;
			break;
			
	}
	return x ;
}
