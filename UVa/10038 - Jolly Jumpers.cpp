#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
	int n;
	
	while( cin >> n && n >0 && n <= 3000){
		vector<int> numbers(n);
		vector<int> diff(n-1);
		bool jolly = true;
		for(auto &i : numbers) 
			cin >> i;		
		for (int i = 0; i < n-1 ; i++) 
			diff[i] = abs( numbers[i] - numbers[i+1] );			
		sort( diff.begin(), diff.end() );
		for(int i = 0; i < n-1; i++){
			if( diff[i] != i+1){
				jolly = false;
				break;
			}
		}
				
		if(jolly)
			cout << "Jolly" << '\n';
		else
			cout << "Not jolly" << '\n';
		
	}
		
	return 0;
}
