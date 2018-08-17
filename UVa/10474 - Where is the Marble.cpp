#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n,q,m,Q, c = 1;
	
	while(cin >> n >> q && n!= 0){
		
		vector<int> numbers;
		while(n--){
			cin >> m;
			numbers.push_back(m);
		}
		
		sort(numbers.begin(), numbers.end());
		cout << "CASE# " << c << ":\n";
		
		while(q--){
			cin >> Q;
			vector<int>::iterator low;
			low = lower_bound(numbers.begin(), numbers.end(), Q);
			if(numbers[low-numbers.begin()] == Q){
				cout << Q << " found at " << (low-numbers.begin())+1 << '\n';	
			}
			else {
				cout << Q << " not found\n";
			}	
		}
		
		c++;
	}
	
	return 0;
}
