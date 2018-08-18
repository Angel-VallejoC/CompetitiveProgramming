/*
	Accepted solution to: http://codeforces.com/problemset/problem/263/A
*/
#include<iostream>
using namespace std;

int main(){
	
	int matrix[5][5];
	int x, y, count = 0;
	
	for(int i = 0; i < 5; i++ ){
		for(int j = 0; j<5; j++){
			cin >> matrix[i][j];
			if(matrix[i][j] == 1){
				x = i;
				y =j;
			}			
		}
	}
	
	if(x>=2)
		count += (x-2);
	else
		count += (2-x);

	if(y>=2)
		count += (y-2);
	else
		count += (2-y);
		
	cout << count;
	
	return 0;
}
