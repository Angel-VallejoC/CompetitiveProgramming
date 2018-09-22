#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;




int main(){
	
	ll n;
	vector<bool> criba(1299709+10, true);
	criba[0] = criba[1] = false;
	for(int i = 4; i<=1299710; i+=2)
		criba[i] = false;
	for(int i = 3; i*i <= 1299710; i+=2 ){
		if(criba[i]){
			for(int j = i*i; j <= 1299710; j+=2*i )
				criba[j] = false;
		}
	}
	
	/*for(int i = 0; i<= 30; i++)
		cout << i << ':' << criba[i] << '\n';*/
	
	
	while(cin >> n && n != 0){
		if(!criba[n]){
			int l=n,r=n;
			while( criba[l-1] != true ) l--;
			while( criba[r+1] != true ) r++;			
			l--,r++;
			
			cout << r-l << '\n';
			//cout << r-l  << " r:" << r << " l: " << l << '\n';
		} 
		else {
			cout << "0\n";
		}
	}
	
	return 0;
}
