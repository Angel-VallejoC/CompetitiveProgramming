/*
	Accepted solution to: http://codeforces.com/problemset/problem/118/A
*/
#include<iostream>
using namespace std;

int main(){
	string input;
	cin >> input;
	
	for(int i = 0; i < input.size(); i++)	{		
		input[i] = tolower(input[i]);
		
		if( !( input[i] == 97 || input[i] == 101 || input[i] == 105 || 
				input[i] == 111 || input[i] == 117 || input[i] == 121 
			)  		
		){			
			cout << "." << input[i];	
		}
		
	}
	
	return 0;
}
