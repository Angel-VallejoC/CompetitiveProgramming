#include<iostream>
using namespace std;

Node* Delete(Node* head, int position){	
	if(head == NULL) return NULL;
	if(position == 0){
		if(head->next == NULL)
			head = NULL;
		else
			head = head->next;
	}
	else {
		int count = 1;
		Node *temp = head;
		while(count < position){
			temp = temp->next;
			count++;			
		}
		if(temp->next->next == NULL)
			temp->next = NULL;
		else
			temp->next = temp->next->next;						
	}
	return head;
}





