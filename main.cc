
#include "menu.h"


int main(){
	Menu * menu_interface = new Menu;

//	while(true){ TODO looping Menu not implemented yet.
//		menu_interface->prompt_user();
//	}

	bool r = menu_interface->test_binder();
	delete menu_interface; // unreachable TODO is allocating memory for a Menu * necessary?

	return 0;
}