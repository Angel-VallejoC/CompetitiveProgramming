#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
	string a, b;
	int c = 0;
	
	while(cin >> a >> b && (a.compare("0") != 0 ||  b.compare("0") != 0) ){
		c++;
		int count = 0, carry = 0;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		
		for(int i = 0; i < min(a.size(), b.size()); i++){
			int s = (a[i]-'0')+ (b[i] -'0');
			if(carry > 0)
				s += carry, carry--;
			if(s>9)
				count++, carry++;
		}
		if(a.size()>b.size()){
			int i = b.size();
			while( i < a.size() ){
				int s = (a[i]-'0');
				if(carry > 0)
					s += carry, carry--;
				if(s>9)
					count++, carry++;
				i++;
			}
		}
		if(b.size()>a.size()){
			int i = a.size();
			while( i < b.size() ){
				int s = (b[i]-'0');
				if(carry > 0)
					s += carry, carry--;
				if(s>9)
					count++, carry++;
				i++;
			}
		}					
		
		if(count == 0)
			cout << "No carry operation.\n";
		else if(count == 1)
			cout << "1 carry operation.\n";
		else
			cout << count << " carry operations.\n";		
	}       
	
    return 0;
}

