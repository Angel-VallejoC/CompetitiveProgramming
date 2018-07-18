#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
	
	int n, year = 1;
	string permutation, word;
	
	while(cin >> n && n != 0){
		cin >> permutation;
		
		unordered_map <char, int> order;
		unordered_map <int, char> chars;
		vector< vector<int> > words;
		for(int i = 0; i < permutation.size(); i++){
			order[permutation[i]] = i;
			chars[i] = permutation[i];
		}
		
		while(n--){
			cin >> word;
			vector<int> newWord(word.size());
			for(int i = 0; i < word.size(); i++){
				newWord[i] = order[word[i]];
			}
			words.push_back(newWord);
		}
		
		sort(words.begin(), words.end());
		
		cout << "year " << year++ << '\n';
		for(auto i: words){
			for(auto j: i){
				cout << chars[j];
			}
			cout << '\n';
		}
	}
	
	
	return 0;
}
