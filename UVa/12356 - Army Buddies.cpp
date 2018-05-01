#include<iostream>
#include<vector>
using namespace std;

int main(){
	int soldiers, records, left, right;
	vector<int> leftBuddies(100010);
	vector<int> rightBuddies(100010);
	
	while(cin >> soldiers >> records && soldiers!=0){		
		for(int i = 0; i <= soldiers+2; i++){
			leftBuddies[i] = i-1;
			rightBuddies[i] = i+1;
		}
		
		while( records-- > 0 ){
			cin >> left >> right;
			
			if(leftBuddies[left] > 0 && rightBuddies[right] <= soldiers)
				cout << leftBuddies[left] << " " << rightBuddies[right];
			else if(leftBuddies[left] <= 0 && rightBuddies[right] <= soldiers)
				cout << "* " << rightBuddies[right];
			else if(leftBuddies[left] > 0 && rightBuddies[right] > soldiers)
				cout << leftBuddies[left] << " *" ;
			else 
				cout << "* *";						
			cout << '\n';
			
			leftBuddies[rightBuddies[right]] = leftBuddies[left];
			rightBuddies[leftBuddies[left]] = rightBuddies[right];
		}
		
		cout << "-\n";
		
	}
	
	return 0;
}
