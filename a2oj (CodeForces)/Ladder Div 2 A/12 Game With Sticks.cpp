/*
	Accepted solution to: http://codeforces.com/problemset/problem/451/A
*/
#include<iostream>
using namespace std;

int n,m, matrix;
char turn = 'a';
void solve(int n, int m){
	if(matrix == 0){
		if(turn == 'a')
			cout << "Malvika";
		else
			cout << "Akshat";
		return;			
	}
	
	matrix = matrix - (n-1) - m;
	
	if(turn == 'a')
		turn = 'm';
	else 
		turn = 'a';

	solve(n-1, m-1);	
}

int main(){
	cin >> n >> m;
	matrix = n*m;
	solve(n,m);
	return 0;
}

