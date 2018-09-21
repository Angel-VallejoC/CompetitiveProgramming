#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	long long n,a,b;
	cin >> n;
	
	while(n--){
		cin >> a >> b;
		long long answer = __gcd(a,b);
		if(answer == 1)
			cout << "SI\n";
		else
			cout << "NO\n";
	}
	
	
	return 0;
}
