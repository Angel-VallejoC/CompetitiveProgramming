#include<iostream>
#include<queue>
using namespace std;

int main(){
	
	int tests;
	cin >> tests;
	
	while (tests-- > 0){
		int battleFields, greenLemmings, blueLemmings, temp;
		priority_queue<int> greenArmy, blueArmy, tempGreen, tempBlue;
		
		cin >> battleFields >> greenLemmings >> blueLemmings;           
		
		while (greenLemmings-- > 0){
			cin >> temp;
			greenArmy.push(temp);
		}
		
		while (blueLemmings-- > 0){
			cin >> temp;
			blueArmy.push(temp);
		}
		
		while ( !greenArmy.empty() &&  !blueArmy.empty() ){
			for ( int i = 0; i < battleFields; i++ ){
				if ( greenArmy.empty() ||  blueArmy.empty() )
					break;
				tempGreen.push( greenArmy.top()  );
				greenArmy.pop();
				tempBlue.push( blueArmy.top() );
				blueArmy.pop();
			}
			
			while ( !tempGreen.empty() ){
				int g, b;
				g = tempGreen.top();
				tempGreen.pop();
				b = tempBlue.top();
				tempBlue.pop();
				if (g > b)
					greenArmy.push( g-b  );
				else if ( b > g )
					blueArmy.push( b-g );
			}
		}
		
		if (  greenArmy.empty() && blueArmy.empty()  )
				cout << "green and blue died" << endl;
		else if ( !greenArmy.empty() && blueArmy.empty() ){
					cout << "green wins" << endl;
					while ( !greenArmy.empty()  ){
						cout << greenArmy.top() << endl;
						greenArmy.pop();
					}
		}
		else {
				cout <<  "blue wins" << endl;
				while ( !blueArmy.empty()  ){
						cout << blueArmy.top() << endl;
						blueArmy.pop();
				}
		}
		if (tests != 0) cout << endl;
	}
	
	return 0;
}
