/*
	Accepted solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1055
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){	
	int duration, records;
	double payment, loan = -1, valueCar = -2;
	
	while(  cin >> duration && duration>= 0 ){
		cin >> payment >> loan >> records;		
		vector<double> depreciation(duration+1,-1);
		int time = 0;
		double monthlyDiscount = loan/duration;
		
		for(int i = 0; i<records;i++){
			short month;
			double dep;
			cin >> month >> dep;
			depreciation[month] = dep;
		}
		
		valueCar = (loan+payment) * (1-depreciation[0]);
		
		for( int i = 1; i <= duration, loan >= valueCar; i++ ){
			time++;
			if( depreciation[i] == -1 )
				depreciation[i] = depreciation[i-1];
			loan -= monthlyDiscount;
			valueCar *= (1-depreciation[i]);
			
			if( loan < valueCar ) break;			
		}
		
		if( time == 1 ){
			cout << "1 month\n";
		}		
		else {
			cout << time << " months\n";
		}
		
	}
	
	
	return 0;
}
