#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool canBeReordered(int coaches, vector<int> newOrder) {
	stack<int> station;
	int position = 0;
	for (int i = 1; i <= coaches; i++) {
		if (i == newOrder[position])
			position++;
		else if( !station.empty() && station.top() == newOrder[position] ){
			station.pop();
			position++;
			i--;
		}
		else
			station.push(i);
	}
	if (station.empty())
		return true;

	while (!station.empty()) {
		if (station.top() == newOrder[position]) {
			position++;
			station.pop();
		} else
			return false;
	}
	return true;
}

int main() {
	int coaches;
	while (cin >> coaches && coaches != 0) {
		int check;
		while (cin >> check && check != 0) {
			vector<int> newOrder(coaches);
			newOrder[0] = check;
			for (int i = 1; i < coaches; i++) {
				cin >> newOrder[i];				
			}
			if (canBeReordered(coaches, newOrder))
				cout << "Yes\n";
			else
				cout << "No\n";			
		}
		cout << "\n";
	}

	return 0;
}
