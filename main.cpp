#include <iostream>
#include "binder.h"

class Menu{
private:
	B_s_list * stacks_ptr;

public:
	Binder * prompt_create_binder; // TODO move to private?
	Todo_entry prompt_create_todo_entry; // TODO move to private?

	int prompt_user();
};


int main(){
	Menu * menu_interface = new Menu;

	while(true){
		menu_interface->prompt_user();
	}

	delete menu_interface; // TODO is allocating memory for a Menu * necessary?

	return 0;
}