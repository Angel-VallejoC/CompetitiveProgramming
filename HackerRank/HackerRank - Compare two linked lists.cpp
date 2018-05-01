#include<iostream>
using namespace std;

int CompareLists(Node* headA, Node* headB){
	Node *tempA = headA, *tempB = headB;
	if( tempA == NULL || tempB == NULL )	
		return 0;
	while(tempA != 	NULL && tempB != NULL){
		if(tempA->data == tempB->data){
			tempA = tempA->next;
			tempB = tempB->next;
		}
		else 
			return 0;
	}
	if(tempA == NULL && tempB == NULL)
		return 1;
	
	return 0;	
}


