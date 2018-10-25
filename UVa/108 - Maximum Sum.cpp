#include <bits/stdc++.h>
using namespace std;

int kadane(const vector<int> &numbers){
	int maxSum = numbers[0], sum = 0; 
	
	for(int i = 0; i < numbers.size(); i++){				
		sum += numbers[i];		
		if(maxSum < sum)
			maxSum = sum;
		if(sum < 0)
			sum = 0;
	}
	return maxSum;
}


int main(){	
	int n;
	while(cin >> n){
		int max = INT_MIN;
		vector<vector<int>> arr;
	
		for(int i = 0; i < n; i++){
			vector<int> temp(n);
			for(int j = 0; j < n; j++){
				cin >> temp[j];
			}
			arr.push_back(temp);
		}
		
		
		for(int l = 0; l < n; l++){
			vector<int> k(n,0);
			for(int r = l; r < n; r++){			
				for(int i = 0; i < n; i++)
					k[i] += arr[r][i];
					
				int maxi = kadane(k);
				max = (maxi > max)? maxi: max;
				
			}
		}
		
		cout << max << '\n';
	}
	
	return 0;
}
