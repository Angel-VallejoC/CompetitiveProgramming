#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
	
	vector<bool> prime(1000, true);
	
	for(int i = 4; i <= 1000; i+=2)
		prime[i] = false;
	
	for(int i = 3; i <= 1000; i += 2){
		if(prime[i]){
			for(int j = i*i; j <= 1000; j += i)
				prime[j] = false;
		}
	}
	
	int t;
	cin >> t;
	string n;
	
	
	while(t--){
		cin >> n;
		ll sum = 0;
		for(auto c: n)
			sum += c - '0';
		
		if(prime[sum])
			cout << "UltraPrimo\n";
		else
			cout << "No UltraPrimo\n";
	}
	return 0;
}
