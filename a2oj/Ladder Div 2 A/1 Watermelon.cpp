/*
	Accepted solution to: http://codeforces.com/problemset/problem/4/A	    
*/
#include <iostream>
using namespace std;


int main(){
	
	int a;
	cin >> a;
	
	if(a%2==0 && a!=2)
		cout << "YES";
	else 
		cout << "NO";
	
	return 0;
}
