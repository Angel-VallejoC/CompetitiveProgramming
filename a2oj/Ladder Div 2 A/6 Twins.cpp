/*
	Accepted solution to: http://codeforces.com/problemset/problem/160/A
*/
#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;


int main(){
	short n;
	cin >> n;
	vector<int> numbers(n,0);		
	
	for(int i = 0; i < n; i++){
		cin >> numbers[i];
	}
	
	sort(numbers.begin(), numbers.end());
	
	int sum1, sum2;
	for(int i = n-1, coin = 1; i >= 0; i--, coin++){
		if(i == 0){
			cout << n;
			break;
		}
		
		sum1 = accumulate(numbers.begin(), numbers.begin()+i, 0);
		sum2 = accumulate(numbers.begin()+i, numbers.end(), 0);		
		
		if(sum1==sum2){
			cout << ++coin;
			break;
		}
		else if(sum2 > sum1){
			cout << coin;
			break;
		}		
	}
		
	return 0;
}
