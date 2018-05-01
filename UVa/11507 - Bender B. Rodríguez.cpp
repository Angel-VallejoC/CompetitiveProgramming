#include<iostream>
using namespace std;

int main(){
	int wireLength;	
	string direction, result;
	
	while(cin >> wireLength && wireLength != 0){
		result = "+x";
		while(wireLength-- > 1){
			cin >> direction;
			
			if( result == "+x"){
				if(direction != "No")	result = direction;
			}
			else if( result == "-x" ){					
				if(direction == "+z")	result = "-z";
				if(direction == "-z")	result = "+z";
				if(direction == "-x")	result = "+x";
				if(direction == "+y")	result = "-y";
				if(direction == "-y")	result = "+y";				
			}				
			else if( result == "+z" ){					
				if(direction == "+z")	result = "-x";
				if(direction == "-z")	result = "+x";
				if(direction == "-x")	result = "-z";
			}
			else if( result == "-z" ){					
				if(direction == "+z")	result = "+x";
				if(direction == "-z")	result = "-x";
				if(direction == "-x")	result = "+z";					
			}								
			else if( result == "+y" ){				
				if(direction == "+y")	result = "-x";
				if(direction == "-y")	result = "+x";					
			}
			else{					
				if(direction == "+y")	result = "+x";
				if(direction == "-y")	result = "-x";					
			}																			
		}
		cout << result << '\n';
	}
	
	
	return 0;
}
