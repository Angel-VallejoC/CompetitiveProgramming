#include <bits/stdc++.h>
using namespace std;

unordered_set<int> sieve(const int &n){
	vector<bool> primes(n+2, true);
	unordered_set<int> primeSet;
	
	for(int i = 4; i <= n; i += 2)
		primes[i] = false;
	for(int i = 3; i*i <= n; i+= 2){
		if(primes[i]){			
			for(int j = i*i; j <= n; j += 2*i)
				primes[j] = false;
		}
	}
	for(int i = 3; i <= n; i+=2) 
		if(primes[i])
			primeSet.insert(i);
			
	return primeSet;
}

int main(){
	
	int n;
	unordered_set<int> primes = sieve(1000000);
	
	while(cin >> n && n != 0){
		
		int a = -1, b = -1;
			
		for(int i = 3; i < n; i+=2){
			if( primes.count(i) > 0 && primes.count(n-i) > 0 && i>b){
				a = i, b = n-i;	
				break;
			}
				
		}

		cout << n << " = " << a << " + " << b << '\n';
	}
	
	
	return 0;
}
