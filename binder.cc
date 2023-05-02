#include "binder.h"

using namespace std;

// TODO provide method to specify indentation of display()

Binder makeBinder(Todo_queue const& todo_head, char const& subject, bool const completed_status, char const & content_description){ // TODO should we only use const when we're deepcopying the const'd-data?
	auto myBinder = Binder{};

	myBinder.todo_head = todo_head;

//	myBinder.subject = subject;
	myBinder.subject = new char[strlen(subject) + 1];
	strcpy(myBinder.subject, subject);

	myBinder.completed_status = completed_status;

	myBinder.content_description = new char[strlen(content_description) + 1];
	strcpy(myBinder.content_description, content_description);

	return myBinder;
}

Binder_stack_entry makeBinderStackEntry(Binder const& binder){
	auto myBinderStackEntry = Binder_stack_entry{};

	myBinderStackEntry.binder_ = binder;

	return myBinderStackEntry;
}

bool Binder::display() {
	char * status_str;
	if(completed_status) status_str << "complete"; // TODO check works
	else status_str << "incomplete";

	cout << "Binder: " << subject <<", status: " << status_str << endl
	<< "Description: " << content_description << endl;
	todo_q_head->display();
}