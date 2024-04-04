#include<iostream>
#include<vector>
#include<string>

using namespace std ;

vector<string> printNTimes(int n) {
	if(n == 1){
		vector<string> v ;
		v.push_back("Coding Ninjas") ;
		return v ;
	}

	vector<string> v ;
	v = printNTimes(n-1) ;
	v.push_back("Coding Ninjas") ;

	return v ;
}