#include "binder.h"
#include <iostream>
#include <cstring>

using namespace std;

// TODO provide method to specify indentation of display()


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