#include<iostream>
#include<string>

using namespace std ;

string compareIfElse(int a, int b) {
	// Write your code here
	string x ;

	(a==b)?(x = "equal"):((a>b)?(x = "greater"):(x = "smaller")) ;

	return x ;
}
