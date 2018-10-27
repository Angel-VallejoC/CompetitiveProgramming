#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n == 1) return false;
	
	for(int i = 2; i*i <= n; i++)	{
		if(n% i == 0)
			return false;
	}
	return true;
}


int factors(int n){
	int count = 0;
	
	for(int i = 1; i*i <= n; i++){
		if( n%i == 0 ){
			count++;
			if(n/i != i)
				count++;			
		}
	}
	
	return count;
}


int main(){
	
	int t, l, r; 
	cin >> t;
	
	while(t--){
		vector<int> result;
		cin >> l >> r;
		for(int i = l; i <= r; i++){			
			if( isPrime( factors(i) ) )
				result.push_back(i);			
		}
		if(result.empty())
			cout << "-1";
		else {
			for(int i = 0; i < result.size(); i++){
				cout << result[i];
				if( i != result.size()-1)
					cout << " ";
			}
		}
		cout << '\n';
	}
	
	
	return 0;
}
