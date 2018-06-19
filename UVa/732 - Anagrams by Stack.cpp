#include<iostream>
#include<set>
using namespace std;

set<string> result;

void anagram(string &original, string &target, string word, bool operation, string sequence , string s1, string s2){
	if(  (s1.compare("") == 0 && !operation) ||  (word.compare("") == 0 && operation)    ||   ( !s2.empty() && (s2.compare( target.substr(0, s2.length())) != 0 )  ))
		return;
	
	// false -> pop
	// true -> push
	if(operation){
		s1.append(  string( 1, word[0]) );
		word = word.substr(1, word.length()-1);
		sequence.append("i");
	}
	else {
		s2.append(    string(1, s1[s1.length()-1])    );
		s1 = s1.substr(0, s1.length()-1);
		sequence.append("o");
	}
		
	anagram(original,target,word, false, sequence, s1, s2);
	anagram(original,target,word, true, sequence, s1, s2);
	
	if( s2.compare(target) == 0){
		result.insert(sequence);
	}
	
}



int main() {
	string word, target;
	while( cin >> word >> target){
		anagram(word,target, word, true,"", "", "");
		
		cout << "[\n";
		for(auto s : result){
			for(int i = 0; i < s.length(); i++){
				cout << s[i];
				if ( i != s.length()-1 )	cout << " ";
			}
			cout << "\n";
		}
		cout << "]\n";

		result.clear();
	}
	
	return 0;
}
