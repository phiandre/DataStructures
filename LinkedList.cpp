#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		Node(int data);
};

Node::Node(int data){
	this->data = data;
	this->next = NULL;
}

class LinkedList
{
	private:
		Node* head;
		int length;
	public:
		LinkedList();
		void addNode(int data);
		void printList();
};

LinkedList::LinkedList(){
	this->head = NULL;
	this->length = 0;
}

void LinkedList::addNode(int data){
	Node* node = new Node(data);
	
	if(!head){
		head = node;
		return;
	}
	
	Node* current = head;
	while(current->next){
		current = current->next;
	}
	current->next = node;
}

void LinkedList::printList(){
	Node* current = head;
	while(current){
		cout << current->data << " ";
		current = current->next;
	}
}



int main(){
	LinkedList* l = new LinkedList();
	for(int i = 0; i<5; ++i){
		l->addNode(i);
	}
	l->printList();	
	return 0;
}
