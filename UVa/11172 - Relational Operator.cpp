#include<iostream>
using namespace std;

int main(){
	
	short tests;
	cin >> tests;
	long a, b;
	
	while(tests-- > 0){
		cin >> a >> b;
		if(a > b)
			cout << ">\n";
		else if( a < b )
			cout << "<\n";
		else
			cout << "=\n";		
	}

	return 0;
}
