/*
	Accepted solution to: http://codeforces.com/problemset/problem/268/A
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
	short n;
	cin >> n;
	vector<short> teams(n*2, 0);
	short temp;
	
	for(int i = 0; i < n*2; i++){
		cin >> temp;
		teams[i] = temp;
	}
	
	short count = 0;
	for(int i = 0; i < n*2; i+=2){		
		for(int j = 0; j < n*2; j+=2){
			if(teams[i]== teams[j+1]) count++;
		}
	}
	cout << count;
	
	return 0;
}
