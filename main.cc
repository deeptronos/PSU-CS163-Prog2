
#include "menu.h"


int main(){
	Menu * menu_interface = new Menu;

//	while(true){ TODO looping Menu not implemented yet.
//		menu_interface->prompt_user();
//	}

//	bool r = menu_interface->test_binder();
	Binder_stack * bs = new Binder_stack;

	delete menu_interface; // unreachable TODO is allocating memory for a Menu * necessary?

	return 0;
}