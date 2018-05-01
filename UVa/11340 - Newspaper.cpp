#include<iostream>
#include<iomanip>
#include<unordered_map>
using namespace std;

int main(){
	
	short tests;
	cin >> tests;
	
	while(tests-- > 0){
		
		short nPaidChars;
		int lines;
		double pago = 0;
		unordered_map<char, double> paidChars;
		cin >> nPaidChars;
		
		for(int i = 0; i < nPaidChars; i++){
			char c;
			double p;
			cin >> c >> p;		
			paidChars[c] = p;			
		}		
		cin >> lines;		
		cin.ignore();
		
		for(int i = 0; i < lines; i++){
			string cadena;
			getline(cin, cadena);
			for(const auto c : cadena){
				if( paidChars.count(c) > 0 ){
					pago += paidChars[c];
				}
			}
		}
		cout << fixed << setprecision(2) << (pago/100) << "$" << endl;
	}
	
	
	
	return 0;
}
