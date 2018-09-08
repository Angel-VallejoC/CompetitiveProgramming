#include <iostream>
#include <vector>
#include<climits>
using namespace std;

long long eval(long long &t, vector<long long> &v){
	long long count = 0;
	for(auto i: v){
		count += t/i;
	}
	return count;
}

int main(){

	long long n, m, tk, start = 0, end = 1L << 50, middle;
	vector<long long> times;
	
	cin >> n >> m;
	
	while(n--){
		cin >> tk;
		times.push_back(tk);
	}

	while(start < end){		
		middle = (start+end)/2;
		if(eval(middle, times) < m){
			start = middle+1;
		}
		else{
			end = middle;
		}
	}
	
	cout << start;
	
	
	return 0;
}
