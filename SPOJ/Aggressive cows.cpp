#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool eval(vector<int> &stalls, int &cows, int value){
	int count = 1, last = 0;
	
	for(int i = 1; i < stalls.size(); i++){
		if( stalls[i]-stalls[last] >= value ){
			count++;
			last = i;
		}
		if(count == cows)	return true;
	}

	return false;
}


int main(){
	
	int tests, n, c, s;
	cin >> tests;
	
	while(tests--){
		cin >> n >> c;
		vector<int> stalls;
		
		while(n--){
			cin >> s;
			stalls.push_back(s);
		}
		
		sort(stalls.begin(), stalls.end());
		
		
		int start = 0, end = stalls[stalls.size()-1], middle, answer;
		
		while(start <= end){
			middle = (start+end)/2;
			
			if( eval(stalls,c,middle) ){
				start = middle+1;
				answer = middle;
			}
			else {
				end = middle-1;
			}
		}
		
		cout << answer << '\n';
		
	}
	
	
	return 0;
}


