/*
	Accepted solution to: http://codeforces.com/problemset/problem/136/A
*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int friends[n];
	for(int i = 0; i < n; i++)
		cin >> friends[i];	
	
	int value = 0;	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(friends[j] == (i+1) ){			
				value = j+1;
				break;
			}
			
		}
		cout << value << " ";
	}
	
	return 0;
}


