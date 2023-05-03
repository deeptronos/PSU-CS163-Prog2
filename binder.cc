#include "binder.h"
#include <iostream>
#include <cstring>

using namespace std;

// TODO provide method to specify indentation of all display() methods


bool Binder::display() {

	cout << "Binder: " << subject <<", status: ";

	if(completed_status)
		cout << "complete" << endl;
	else
		cout << "incomplete" << endl;

	cout << "Description: " << content_description << endl;
//	todo_q_head->display(); TODO
	return true;
}

bool Binder_stack_entry::display() {
	cout << "Binder_stack_entry - ";

	if (binder_ != nullptr){
		cout << "Contains Binder: " << endl;
		binder_ -> display();
	}else cout << "Empty" << endl;

	return true;
}

Binder_stack::Binder_stack() {
	stackHead = new Binder_stack_entry;
	Binder_stack_entry * bs = stackHead;
	for(int i = 1; i < stack_size; ++i){
		bs->next_entry = new Binder_stack_entry;
		bs = bs->next_entry;
	}
	top_index = 0;
	next_stack = nullptr;
}

Binder_stack::~Binder_stack() {
	Binder_stack_entry * bs = stackHead;
	for(int i = 0; i < top_index; ++i){
		delete bs;
		bs = bs->next_entry;
	}
	// TODO call destructor on next_stack?
}
