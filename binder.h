//This header defines an interface for a binder, b_s_node, and binder_stack.
	// binder is a struct representing one binder in a stack.
	// b_s_node is a struct representing one entry in the binder_stack LLL, containing a binder.
	// binder_stack is a class representing a LiFo stack of binder_nodes.
	// b_s_list is a class representing a linear linked list of binder_stacks

#include "todo.h"

struct Binder{ // TODO add specifications from assignment (subject, etc.)
private:
	Todo_queue * todoHead;
	char * subject;
	bool completed_status; //
	char * content_description;
	//<TYPE> <name>; CUSTOM PROPERTY TBD

public:
	Binder * next;

	int display();
};

class Binder_stack{
private:
	Binder * stackHead;


public:
	int top_index; // should this be private?
	Binder_stack * next;

	Binder_stack();
	~Binder_stack();

	int display();
	int push(const Binder & to_add); // Should this return Binder *?
	Binder * pop();
	Binder * peek()
};

class B_s_list{
private:
	Binder_stack * head;

public:
	B_s_list();
	~B_s_list()

	int display();

	int add_stack(const Binder_stack & to_add); // Should the argument be const??
	int remove_stack(const Binder_stack & to_remove);
};