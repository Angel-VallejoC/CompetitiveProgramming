#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(const string &b){
	stack<char> result;
	for(int i = 0; i < b.size(); i++){	
		if( b[i] == '[' || b[i] == '{' || b[i] == '(')	result.push(b[i]);
		else if( b[i] == ']' ){
			if(!result.empty() && result.top() == '[')
				result.pop();
			else 
				return false;
		}
		else if( b[i] == '}' ){
			if(!result.empty() && result.top() == '{')
				result.pop();
			else 
				return false;
		}
		else {
			if(!result.empty() && result.top() == '(')
				result.pop();
			else 
				return false;
		}		
	}
	if(result.empty())
		return true;
	return false;
}

int main() {
	int tests;
	string brackets;
	cin >> tests;
	cin.ignore(300, '\n');
	
	while(tests-- > 0){
		getline(cin, brackets);			
		if( isBalanced(brackets) )
			cout << "YES";
		else
			cout << "NO";
		cout << '\n';
	}
	
	return 0;
}
