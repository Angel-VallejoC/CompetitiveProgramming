/*
	Accepted solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2899
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	short t,n;
	cin >> t;
	
	for(int i = 0; i < t; i++){		
		cin >> n;
		vector<short> creatures(n);
		short max = -1;
		for(auto &speed : creatures){
			cin >> speed;
			max = (speed > max) ? speed : max;
		}		
		cout << "Case " << (i+1) << ": " << max << '\n';		
	}
	
	return 0;
}
