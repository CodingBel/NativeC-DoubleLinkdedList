#include<iostream>
// A Double linked list is a type of linked list where each node has three components 
// A data component 
// A pointer pointing to the next node 
// A pointer pointing to the pervious node 

// The previous pointer of the head should point to NULL
// The next pointer of the tail should point to NULL 
// Any other node should be chained to eachother 

struct Node {
	Node* prev{};
	int data{};
	Node* next{};
};

int main() {
	// Create nodes 
	Node* head = NULL;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;

	// Allocate memory for nodes 
	head = new Node;
	one = new Node;
	two = new Node;
	three = new Node;

	// Populate and chain Nodes to eachother  
	head->prev = NULL;
	head->data = 0;
	head->next = one;

	one->prev = head;
	one->data = 5;
	one->next = two;

	two->prev = one;
	two->data = 7;
	two->next = three;

	three->prev = two;
	three->data = 9;
	three->next = NULL;

	head = one;
	head->prev = NULL;

	while (head != NULL) {
		std::cout << "Address of head is: " << head << " it points to -> " << head->next << " and looks back at <- " << head->prev << " and has a value of: " << head->data << std::endl;
		head = head->next;
	}

	delete[] head, one, two, three;

	return 0;
}