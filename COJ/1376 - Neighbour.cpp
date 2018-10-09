#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   
    string n;
    cin >> n;
    
    if(next_permutation(n.begin(), n.end())){
    	cout << n;
	}
	else {
		cout << 0;
	}
    
    return 0;
}


