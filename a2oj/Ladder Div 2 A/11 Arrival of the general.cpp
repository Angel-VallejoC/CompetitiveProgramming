/*
	Accepted solution to: http://codeforces.com/problemset/problem/144/A
*/
#include<iostream>
using namespace std;

int main(){
	
	int n, aux, count = 0;
	cin >> n;	
	int soldiers[n];
	int maximum = 0, minimum = 0;
	
	for(int i = 0; i < n; i++){
		cin >> soldiers[i];						
		if(soldiers[i] > soldiers[maximum]) maximum = i;
		if(soldiers[i] <= soldiers[minimum]) minimum = i;				
	}
	if(maximum > minimum) minimum++;	
	count = maximum + (n-1-minimum);		
	cout << count;
	
	
	return 0;
}
