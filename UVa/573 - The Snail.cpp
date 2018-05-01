#include<iostream>
using namespace std;

int main(){
	
	short wellHeight;
	double climbDistance, slideDistance, fatigueFactor;
	
	while( (cin >> wellHeight >> climbDistance >> slideDistance >> fatigueFactor) && wellHeight != 0  ){		
		
		int day = 1;
		double snailPosition = 0, fatigueDistance = climbDistance * (fatigueFactor/100);
		
		while(true){			
			if ( climbDistance <= 0)  climbDistance = 0;
									
			snailPosition += climbDistance;						
			if( snailPosition > wellHeight){				 
				 cout << "success on day " << day << '\n';
				 break;
			 }
			
			snailPosition -= slideDistance;
			if( snailPosition < 0 ){				 
				 cout << "failure on day " << day << '\n';
				 break;
			 }
			
			climbDistance -= fatigueDistance;			
			day++;			
		}						
	}
	
	return 0;
}
