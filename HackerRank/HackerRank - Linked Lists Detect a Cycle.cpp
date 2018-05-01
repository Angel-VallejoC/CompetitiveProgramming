#include<iostream>
#include<vector>
using namespace std;

bool isAlreadyVisited(const Node *node, const vector<Node*> &p){
	for(Node* n: p){
		if(n == node)
			return true;
	}
	return false;
}

bool has_cycle(Node* head) {    
    if(head == NULL)	return false;
    vector<Node*> pointers;
    Node *temp = head;
    while(temp != NULL){
    	pointers.push_back(temp);
		if( isAlreadyVisited(temp->next, pointers) )
    		return true;
    	else
    		temp = temp->next;	    		    		
	}
	return false;
}


