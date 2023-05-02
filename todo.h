// This header defines interfaces for Todo_entry, t_q_node, and Todo_queue.
	// Todo_entry is a bare-minimum struct to contain data representing a todo list item.
	// t_q_node is a struct holding one entry in the Todo_queue CLL.
	// Todo_queue is a class representing a FiFo circular linked list Queue of todo_items. It is contained by a binder_node.


struct Todo_entry{
	char * name;
	char * description;
	char * url;
	//<TYPE> <name>; custom property TBD

	bool display();
};

struct t_q_node{
	Todo_entry * entry;
	t_q_node * next_node;

	bool display();
};

class Todo_queue{
private:
	t_q_node * rear;

public:
	Todo_queue();
	~Todo_queue();

	bool display();

	int enqueue(const Todo_entry & to_add); // return Todo_entry *? Also, should the argument be const??
	int dequeue();

	Todo_entry * peek();

}