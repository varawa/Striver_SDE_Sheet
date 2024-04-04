#include<iostream>
#include<math.h>

using namespace std ;


bool checkArmstrong(int n){
	int clone = n , count = 0 ;
	//int check = n ;
	while(clone != 0){
		count++ ;
		clone /= 10 ;
	}
	clone = n ;
	int armstrong = 0 ;
	while(n != 0){
		armstrong += pow(n%10 , count) ;
		n /= 10 ;
	}
	n = clone ;
	return armstrong == n ;
}
