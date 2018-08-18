#include <iostream>
#include <vector>

using namespace std;

int find(vector< pair<int, int> > &numbers, int n){
	
	int start = 0, end = numbers.size()-1, middle;
	
	while(start <= end){
		middle = (start+end)/2;
		if( n >= numbers[middle].first && n <= numbers[middle].second )
			return middle+1;
		else if( n < numbers[middle].first )
			end = middle-1;
		else 
			start = middle+1;
	}
	
	return -1;
}


int main(){
	
	int n, ai, m, qm;
	vector< pair<int, int>> numbers;
	
	cin >> n;
	cin >> ai;
	numbers.push_back(make_pair(0, ai));
	n--;
	
	while(n--){
		cin >> ai;
		numbers.push_back(make_pair(numbers.back().second+1, numbers.back().second+ai));
	}
	
	cin >> m;
	while(m--){
		cin >> qm;
		cout << find(numbers, qm) << '\n';
	}
	
	return 0;
}
