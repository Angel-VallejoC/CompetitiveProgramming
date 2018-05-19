#include<iostream>
#include<iomanip>
#include<map>
using namespace std;


int main(){
	
	unsigned int tests;	
	cin >> tests;
	cin.ignore();
	string temp;
	getline(cin, temp);
	
	for(int i = 1; i <= tests; i++){		
		map<string, unsigned int> trees;	
		double count = 0;
		string tree;		
		
		while (getline(cin, tree) &&  !tree.empty()  ){			
			if( trees.count(tree) == 0 ){
				trees[tree] = 1;
			}
			else {
				trees[tree] += 1;
			}
			count++;			
		}
				
		for(auto i : trees)		{			
			cout << i.first << " " << fixed << setprecision(4) << (( i.second * 100)/count) << endl;			
		}
		if(  !(i== tests)  )
			cout << endl;
	}	
	
	
	
	return 0;
}