/*
	Accepted solution to: http://codeforces.com/problemset/problem/71/A
*/
#include <iostream>
using namespace std;

int main(){
	
	int n;
	string cadena;
	cin >> n;
	
	for(int i = 1; i<=n; i++){
		cin >> cadena;
		
		if(cadena.size() <= 10)
			cout << cadena << '\n';
		
		else 
			cout << cadena[0] << cadena.size()-2 << cadena[cadena.size()-1] << '\n';								
	}
	
	return 0;
}
