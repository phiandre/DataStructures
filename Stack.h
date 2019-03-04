#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data);
};

Node::Node(int data){
	this->data = data;
	this->next = NULL;
}

class Stack{
	
	private:
		Node* top;	
	public:
		Stack();
		Stack(int capacity);
		void push(int data);
		void printStack();
		Node* getTop();
		Node* pop();
		bool isEmpty();
};

Stack::Stack(){
	this->top = NULL;
}


void Stack::push(int data){
	Node* n = new Node(data);
	n->next = top;
	top = n;
}

void Stack::printStack(){
	Node* current = top;
	while(current){
		cout << current->data << " ";
		current = current->next;
	}
}

Node* Stack::getTop(){
	return this->top;
}

Node* Stack::pop(){
	Node* currentTop = this->top;
	this->top = this->top->next;
	return currentTop;
}

bool Stack::isEmpty(){
	return (this->top == NULL);
}
