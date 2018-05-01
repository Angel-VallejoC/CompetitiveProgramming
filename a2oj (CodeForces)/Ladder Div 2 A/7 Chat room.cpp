/*
	Accepted solution to: http://codeforces.com/problemset/problem/58/A
*/
#include<iostream>
using namespace std;

int main(){
	
	string word;
	cin >> word;
	bool h = false, e = false, l1 = false, l2 = false, o = false;
	
	for(int i = 0; i < word.size(); i++){
		if( !h ){
			if( word[i] == 'h' )
				h = true;
		}
		else if( !e ){
			if( word[i] == 'e' )
				e = true;
		}
		else if( !l1 ){
			if( word[i] == 'l' )
				l1 = true;
		}
		else if( !l2 ){
			if( word[i] == 'l' )
				l2 = true;
		}
		else{
			if( word[i] == 'o' )
				o = true;
		}
	}
	
	if(h&&e&&l1&&l2&&o){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	
	return 0;
}
