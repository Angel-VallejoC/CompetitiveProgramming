#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

class Compare{
public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second>n2.second  || ( n1.second == n2.second &&  n1.first > n2.first ) ;
    }
};


int main(){
	
	string temp;
	int id, period, k, found = 0;
	priority_queue<pair<int,int>,vector<pair<int,int>>, Compare> periods, ptemp, result;
	
	while( cin >> temp && temp.compare("#") != 0){
		cin >> id >> period;
		periods.push(make_pair(id, period));
	}
	
	cin >> k;
	
	for (int i = 1; i <= 3000; i++){
		ptemp = periods;
		
		while( !ptemp.empty() && found != k ){
			if (i%ptemp.top().second == 0 ){
				result.push( make_pair( ptemp.top().first, i )  );
				found++;	
			}
			ptemp.pop();
		}
	}
	
	for(int i = 0; i < k; i++){
		cout << result.top().first  << '\n';
		result.pop();
	}
	
}
