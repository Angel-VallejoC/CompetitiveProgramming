#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<ll> getPrimes(const ll &number){
	vector<ll> factorization;
	ll n = number;
	for(int i = 2; i*i <= n; i++ ){
		while(n%i == 0){
			factorization.push_back(i);
			n /= i;
		}
	}
	if(n>1)
		factorization.push_back(n);
	return factorization;
}


int main() {
	
	ll n, a, b;
	vector<pair<ll, ll>> list;
	
	cin >> n;
	
	while(n--){
		cin  >> a >> b;
		list.push_back(make_pair(a,b));
	}
	
	vector<ll> f1 = getPrimes(list[0].first);
	vector<ll> f2 = getPrimes(list[0].second);
	
	ll answer = -1;
	for(auto prime: f1){
		bool wcd = true;	
		for(auto p: list){
			if( p.first%prime != 0  && p.second%prime != 0  ){
				wcd = false;
				break;
			}				
		}
		if(wcd){
			answer = prime;
		}
	}
	
	for(auto prime: f2){
		bool wcd = true;	
		for(auto p: list){
			if( p.first%prime != 0  && p.second%prime != 0  ){
				wcd = false;
				break;
			}				
		}
		if(wcd){
			answer = prime;
		}
	}
	
	cout << answer << '\n';
	
	return 0;
}
