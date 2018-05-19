#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
	
	int n, op, value;
	
	while(cin>>n){
		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;
		int size = 0;
		
		while (n-- > 0){
			cin >> op;
			cin >> value;
			
			if(op == 1){
				s.push(value);
				q.push(value);
				pq.push(value);
				size++;
			}
			else {
				if (!s.empty() && ( s.top() == value)  )
					s.pop();
				if (!q.empty() && ( q.front() == value)  )
					q.pop();		
				if (!pq.empty() && ( pq.top()== value)  )
					pq.pop();
				size--;
			}
		}
		
		if ( s.size() == size ){
			if ( q.size() == size || pq.size() ==  size )
				cout << "not sure\n";
			else 
				cout << "stack\n";
		}
		else if ( q.size() == size ){
			if ( s.size() == size || pq.size() ==  size )
				cout << "not sure\n";
			else 
				cout << "queue\n";
		}
		else if ( pq.size() == size ){
			if ( s.size() == size || q.size() ==  size )
				cout << "not sure\n";
			else 
				cout << "priority queue\n";
		}
		else {
			cout << "impossible\n";
		}
	
		
	}
	
	
	return 0;
}