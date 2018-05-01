/*
	Accepted solution to: http://codeforces.com/problemset/problem/122/A
*/
#include<iostream>
using namespace std;

int main(){	
	int n;
	cin >> n;	
	if
	(
		(
			n==4 || n==7 || n==47 || n==74 || n==444 || n==447 || n==474 || n==477 || n==744 || n==747 || n==777
		)
		||
		(
			n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%447==0 ||
			n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%777==0
		)
	)
		cout << "YES";
	else
		cout << "NO";
	

	
	return 0;
}
