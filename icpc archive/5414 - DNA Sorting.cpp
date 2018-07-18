#include <iostream>
#include <vector>
#include <map>
using namespace std;

int unsortedness(string &s){
	int count = 0;
	
	for(int i = 0; i < s.size(); i++){
		for(int j = i+1; j < s.size(); j++){
			if(s[j] < s[i])
				count++;
		}
	}
	
	return count;
}

int main(){
	
	int tests, n, m;
	string s;
	cin >> tests;
	
	while(tests--){
		cin >> n >> m;
		map<int, vector<string> > answer;
		while(m--){
			cin >> s;
			answer[unsortedness(s)].push_back(s);
		}
		
		
		for(auto i : answer){
			for(auto j: i.second){
				cout << j << '\n';
			}
		}
		if(tests!=0) cout << '\n';
		
	}
	
	
	return 0;
}
