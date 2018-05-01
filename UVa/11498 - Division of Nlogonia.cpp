#include<iostream>
using namespace std;

int main(){
	
	int queries, divisionN, divisionM, coordinateX, coordinateY;
	
	while(cin >> queries && queries != 0){
		cin >> divisionN >> divisionM;
		while(queries-- > 0){
			cin >> coordinateX >> coordinateY;
			if(
			 coordinateX == divisionN || coordinateX == divisionM ||
			 coordinateY == divisionN || coordinateY == divisionM		 
			)
				cout << "divisa\n";
			else if( coordinateX > divisionN){
				if( coordinateY > divisionM)
					cout << "NE\n";
				else
					cout << "SE\n";				
			}
			else if( coordinateX < divisionN){
				if( coordinateY > divisionM)
					cout << "NO\n";
				else
					cout << "SO\n";				
			}	
		}
		
	}
	
	
	return 0;
}
