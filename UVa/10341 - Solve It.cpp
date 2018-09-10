#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	
	int p,q,r,s,t,u;
	
	while(cin >> p >> q >> r >> s >> t >> u)	{
		double low = 0, high = 1, mid, res = -1;
		
		for(int i = 1; i <= 100; i++){
			mid = (low+high)/2;
			double eq =  (p*exp(-mid)) + (q*sin(mid)) + (r*cos(mid)) + (s*tan(mid)) + (t*(mid*mid)) + u; 
			if( eq > 0){
				low = mid;
			}
			else {
				high = mid;
			}
		}
		double e =  (p*exp(-mid)) + (q*sin(mid)) + (r*cos(mid)) + (s*tan(mid)) + (t*(mid*mid)) + u; 
		if( fabs(e) < 1e-9)
			cout << setprecision(4) <<  fixed << mid << endl;
		else 
			cout << "No solution" << endl;
	}
	
	return 0;
}
