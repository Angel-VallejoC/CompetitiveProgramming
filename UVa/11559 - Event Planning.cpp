/*
	Accepted solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2595
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	unsigned short participants, hotels, weeks, hotelPrice;
	unsigned int budget;	
	
	while(cin >> participants){
		cin >> budget >> hotels >> weeks;
		unsigned int minimumCost = 501000;
		vector<unsigned short> availableBeds(weeks, 0);
		bool enoughBeds = false;
		
		for(int i = 1; i <=hotels; i++ ){
			cin >> hotelPrice; 
			for(auto &nBeds : availableBeds){
				cin >> nBeds;
				if(nBeds >= participants) enoughBeds = true;
			}
			if( participants*hotelPrice <= budget && participants*hotelPrice < minimumCost && enoughBeds   ){
				minimumCost = participants*hotelPrice;
			}			
		}	
		
		if(minimumCost <= budget)
			cout << minimumCost << '\n';
		else
			cout << "stay home" << '\n';
					
	}
	
	return 0;
}
