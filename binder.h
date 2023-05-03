//This header defines an interface for a Binder, Binder_stack, and B_s_list
	// Binder is a bare-minimum struct to contain data representing one binder in a stack.
	// Binder_stack_entry is a struct representing one entry in a Binder_stack.
	// Binder_stack is a class representing a LiFo stack of binder_nodes.
	// B_s_list is a class representing a linear linked list of binder_stacks


// TODO are we doing Binder & Binder_stack_entry struct construction in the best way possible?

#include "todo.h"


struct Binder{
	Todo_queue * todo_q_head;
	char * subject;
	char * content_description;
	bool completed_status; // true if binder completed, false otherwise
	//<TYPE> <name>; CUSTOM PROPERTY TBD

	bool display();

};

struct Binder_stack_entry{
	Binder * binder_;
	Binder_stack_entry * next_entry;

	bool display();

};

class Binder_stack{
private:
	Binder * stackHead;
	const int stack_size = 5; // TODO best practice?

public:
	int top_index; // should this be private?
	Binder_stack * next_stack;

	Binder_stack();
	~Binder_stack();

	bool display();

	int push(const Binder & to_add); // Should this return Binder *?

	Binder * pop();
	Binder * peek();
};

class B_s_list{
private:
	Binder_stack * head;

public:
	B_s_list();
	~B_s_list();

	bool display();

	int add_stack(const Binder_stack & to_add); // Should the argument be const??
	int remove_stack(const Binder_stack & to_remove);
};