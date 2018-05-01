#include<iostream>
#include<vector>
using namespace std;

Node* Reverse(Node* head){
	if(head == NULL) return NULL;
	if(head->next == NULL) return head;
	
	vector<Node*> pointers;
	Node *temp = head;
	Node *newHead;
	int count = 1;
	
	pointers.push_back(NULL);
	while(temp->next != NULL){
		pointers.push_back(temp);
		temp = temp->next;
		count++;
	}
			
	newHead = temp;
	while(temp != NULL){
		temp->next = pointers[--count];	
		temp = temp->next;
	}	
	
	return newHead;
}




