#include<iostream>
using namespace std;

Node* MergeLists(Node* headA, Node* headB) {
	if(headA == NULL && headB == NULL)	return NULL;
	if(headA == NULL)	return headB;
	if(headB == NULL)	return headA;
	
	Node *newHead, *first, *second, *lastChanged;
	
	if(headA->data <= headB->data ){
		newHead = headA;	
		first = headA->next;
		second = headB;
	}		
	else{
		newHead = headB;
		first = headB->next;
		second = headA;
	}
	
	lastChanged = newHead;
		
	while( first != NULL && second != NULL){
		if(second->data <= first->data){
			lastChanged->next = second;
			lastChanged = lastChanged->next;
			second =  second->next;
		}
		else {
			lastChanged->next = first;
			lastChanged = first;
			first = first->next;
		}
					
	}
	
	if(first == NULL){
		lastChanged->next = second;
	}
	else{
		lastChanged->next = first;
	}
	
	return newHead;
}

