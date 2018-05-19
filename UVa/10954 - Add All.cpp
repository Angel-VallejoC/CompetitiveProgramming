#include<iostream>
#include<queue>
#include<unordered_map>

using namespace std;

int main(){		
	int n;
	while(cin >> n && n!= 0){
		priority_queue <unsigned int, vector<unsigned int>, greater<unsigned int> > numbers;
		unsigned long long temp;
		unsigned long long sum = 0, cost = 0;
		
		while(n-- > 0){
			cin >> temp;
			numbers.push(temp);		
		}					
					
		while( numbers.size() > 1 )	{
			sum = numbers.top();
			numbers.pop();
			sum += numbers.top();
			numbers.pop();
			numbers.push(sum);
			cost += sum;						
		}
		
		
		cout << cost << endl;
		
	}		
	
	return 0;
}