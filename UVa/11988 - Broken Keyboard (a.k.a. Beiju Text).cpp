#include<iostream>
using namespace std;


class Node {
	public:
		char info;
		Node *next;
		
	Node(){
		next = NULL;
	}
	
	Node(char data){
		info = data;
		next = NULL;
	}

};


class List {
	public:
		Node *head;
		Node *tail;
		
	List(){
		head = tail = NULL;
	}
	
	void push_back(char info){
		Node *newNode = new Node(info);
		if( head == NULL){
			head = tail = newNode;
		}
		else {
			tail = tail->next = newNode;			
		}
	}
	
	Node* push_front(char info){
		Node *newNode = new Node(info);
		if( head == NULL){
			head = tail = newNode;
		}
		else{
			Node *temp = head;
			head = newNode;
			head->next = temp;
		}
		return newNode;
	}
	
	Node* push_after(Node *pointer, char info){
		Node *temp = pointer->next;
		Node *newNode = new Node(info);
		pointer->next = newNode;
		newNode->next = temp;
		if(temp == NULL)
			tail = newNode;
		return newNode;
	}
	
	void deleteNode(){
		Node *temp = head;
		if(head == NULL){
			cout << "Lista vacia \n";
		}
		else if(head->next == NULL){
			head = tail = NULL;
		}
		else{
			while(temp->next->next != NULL){
				temp = temp->next;
			}
			temp->next = NULL;
		}
		
	}
	
	void clear(){
		head = tail = NULL;
	}
	
	void print(){		
		if(head == NULL){
			cout << "Lista vacia\n";
		}
		else {
			Node *temp = head;
			while(temp != NULL){
				cout << temp->info;
				temp = temp->next;
			}
		}
	}
};



int main(){
	
	List results;
	string words;
	
	while( getline(cin, words) ){
		int position = 2;	// 0->insert at the begining	1->insert after temp	 2-> insert at the back
		Node* temp = NULL;
		for(int i = 0; i < words.size(); i++){
			if( words[i] == '[' )
				position = 0;
			else if( words[i] == ']')
				position = 2;
			else {
				if( position == 0 ){
					temp = results.push_front(words[i]);
					position = 1;										
				}
				else if( position == 1 ){
					temp = results.push_after(temp, words[i]);										
				}
				else {
					results.push_back(words[i]);
				}
			}
		}
		results.print();
		cout << '\n';
		results.clear();
	}
	
	
	
	return 0;
}
