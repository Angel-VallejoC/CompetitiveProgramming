//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=342
#include<iostream>
using namespace std;

string word;

char getReverse(char c){			
	switch(c){
		case 'A': case 'H': case 'I': case 'M': case 'O': 
		case 'T': case 'U': case 'V': case 'W': case 'X':
		case 'Y': case '1': case '8': 	return c;			
		case 'J': return 'L';
		case 'L': return 'J';
		case 'E': return '3';
		case '3': return 'E';
		case 'S': return '2';
		case '2': return 'S';
		case 'Z': return '5';
		case '5': return 'Z';
		default:  return ' ';			
	}
}

bool isMirrored(const string word){
	string reversed;
	for(int i = 0, j = word.size()-1 ; i<word.size(); i++, j--){
		reversed.append( 1u, getReverse(word[j])  );
	}
	if( word.compare(reversed) == 0 )
		return true;
	else
		return false;
}

bool isPalindrome(const string word, int left, int right){
	if(left == right || left > right)	
		return true;
	if( word[left] == word[right] )
		return isPalindrome(word, left+1, right-1);
	else 
		return false;
}

int main(){
	
	while(cin >> word){
		
		bool palindrome = isPalindrome(word,0,word.size()-1),
			 mirrored = isMirrored(word);
		
		if( !palindrome && !mirrored )
			cout << word << " -- is not a palindrome." << "\n\n";
		else if( palindrome && !mirrored)
			cout << word << " -- is a regular palindrome." << "\n\n";
		else if( !palindrome && mirrored)
			cout << word << " -- is a mirrored string." << "\n\n";
		else
			cout << word << " -- is a mirrored palindrome." << "\n\n";
	}
	
	return 0;
}

