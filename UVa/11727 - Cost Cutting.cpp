#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	short tests;
	vector<int> numbers(3);
	cin >> tests;
	
	for(int i = 0; i < tests; i++){
		cin >> numbers[0] >> numbers[1] >> numbers[2];
		sort(numbers.begin(), numbers.end());
		cout << "Case " << (i+1) << ": " << numbers[1] << '\n';		
	}		
	
	return 0;
}
