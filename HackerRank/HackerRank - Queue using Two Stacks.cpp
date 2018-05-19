#include <iostream>
#include <stack>
using namespace std;

void dequeue(stack<unsigned long long> &s1, stack<unsigned long long> &s2){    
    if( s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();    
        }
        s2.pop();
    }
    else {
        s2.pop();
    }    
}

void print(stack<unsigned long long> &s1, stack<unsigned long long> &s2){
    if( s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();    
        }
        cout << s2.top() << endl;
    }
    else {
        cout << s2.top() << endl;
    }  
}


int main() {
    unsigned int q;
    short operation;
    stack<unsigned long long> s1, s2;
    cin >> q;
    
    while( q-- > 0){
        cin >> operation;
        switch(operation){
            case 1:
                unsigned long long x;
                cin >> x;
                s1.push(x);
                break;
            
            case 2:
                dequeue(s1, s2);
                break;
                
            case 3:
                print(s1, s2);
                break;                
        }      
							          
    }    
    
    return 0;
}