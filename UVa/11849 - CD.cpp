#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	unsigned long long n, m, cd;
	
	while(cin>>n>>m  && n!=0 && m!=0){
		unordered_set<unsigned long long> cds;
		unsigned long long count = 0;
		
		while (n-- > 0){
			cin >> cd;
			cds.insert(cd);	
		}
		
		while (m-- > 0){
			cin >> cd;
			if ( cds.count(cd) > 0 ){
				count++;
			}
			else {
				cds.insert(cd);	
			}
		}
		
		cout << count << endl;
	}
	
	
}