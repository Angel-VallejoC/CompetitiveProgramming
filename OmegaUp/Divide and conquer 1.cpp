#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
	int n, aux;
	vector<int> numbers;
	cin >> n;
	
	while(n--){
		cin >> aux;
		numbers.push_back(aux);
	}
	
	ll maxSum = numbers[0], sum = 0; 
	
	for(int i = 0; i < numbers.size(); i++){				
		sum += numbers[i];		
		if(maxSum < sum)
			maxSum = sum;
		if(sum < 0)
			sum = 0;
	}
	
	cout << maxSum;
		
	return 0;
}
