#include <iostream>

#include "binder.h"


class Menu{
private:
	B_s_list * stacks_ptr;

public:
	Binder * prompt_create_binder; // TODO move to private? TODO wtf is this shit for
	Todo_entry prompt_create_todo_entry; // TODO move to private?

	bool prompt_user();
	bool test_binder();
};
