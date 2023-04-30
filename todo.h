// This header defines interfaces for todo_entry, t_l_node, and todo_queue.
	// todo_entry is a struct representing a todo list item.
	// t_l_node is a struct representing one entry in the todo_queue CLL.
	// todo_queue is a class representing a FiFo circular linked list Queue of todo_items. It is contained by a binder_node.


struct todo_entry{

};

struct t_l_node{
	todo_entry * entry;
	t_l_node * next;
};

class todo_queue{

}