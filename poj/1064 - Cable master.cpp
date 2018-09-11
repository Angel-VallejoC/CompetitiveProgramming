#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int eval(const double &m, const vector<double> &cables){
	int count = 0;
	for(int i = 0; i < cables.size(); i++){
		count += cables[i]/m;
	}
	return count;
}

int main(){
	
	int n, k;
	double ni;
	vector<double> cables;
	cin >> n >> k;
	
	while(n--){
		cin >> ni;
		cables.push_back(ni);
	}
	
	
	double low = 0, high = 1000000, mid;
	
	for(int i = 0; i < 100; i++){
		mid = (low+high)/2;
		if(eval(mid, cables) >= k){
			low = mid;
		}
		else {
			high = mid;
		}
	}
	cout << setprecision(2) << fixed << floor(low*100)/100 << '\n';
	
	return 0;
}
