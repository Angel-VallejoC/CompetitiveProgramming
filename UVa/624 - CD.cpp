#include <iostream>
#include <queue>
using namespace std;

void fillTape(queue<int> &bestSequence, long long & bestSum, const int &minutes, queue<int> currentSequence, long long currentSum, queue<int>tracks, bool include){
	if( tracks.empty()  ||  currentSum > minutes   )
		return;
		
	if ( include ){
		currentSequence.push( tracks.front()  );
		currentSum += tracks.front();			
	}
	tracks.pop();
	
	if ( currentSum > bestSum && currentSum <= minutes){
		bestSum = currentSum;
		bestSequence = currentSequence;
	}
	
	fillTape(bestSequence, bestSum, minutes, currentSequence, currentSum, tracks, true);
	fillTape(bestSequence, bestSum, minutes, currentSequence, currentSum, tracks, false);
}


int main(){
	
	int n, nTracks;
	
	while( cin >> n >> nTracks ){
		
		queue<int> tracks, bestSequence;
		long long  bestSum = 0;
		int temp;
		
		while ( nTracks-- > 0){
			cin >> temp;
			tracks.push(temp);
		}
		
		queue<int> q;
		fillTape(bestSequence, bestSum, n, q, 0, tracks, true);
		fillTape(bestSequence, bestSum, n, q, 0, tracks, false);
		
		while( !bestSequence.empty() ){
			cout << bestSequence.front() << " ";
			bestSequence.pop();
		}
		cout << "sum:" << bestSum << endl;
		
	}
	
	return 0;
}
