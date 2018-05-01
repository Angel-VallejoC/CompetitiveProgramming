#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	int n = input.size() - (input.size()/2);
	int numbers[n];
	
	for(int i = 0, j = 0; i < n; i++, j+=2 ){
		char a = input[j];
		int ia = a - '0';
		numbers[i] = ia;
	}
	
	vector<int> nvector (numbers, numbers+n);
	sort(nvector.begin(), nvector.end());
	
	for(int i = 0; i < n; i++){
		if(i==n-1)
			cout << nvector[i];
		else 
			cout << nvector[i] << '+';
	}
	
	
	return 0;
}
