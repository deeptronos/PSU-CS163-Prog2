#include <iostream>
#include "menu.h"


using namespace std;



bool Menu::test_binder(){

	char b_subject[255], b_content_desc[255], b_completed_status_input[3];

	cout << "Subject: ";
	cin.getline(b_subject, 255);

	cout << "Description: ";
	cin.getline(b_content_desc, 255);

	cout << "Completed status? (Y/N): ";
	cin.getline(b_completed_status_input, 255);

	bool b_completed_status;
//	b_completed_status = (b_completed_status_input == "Y");
	b_completed_status = (strcmp(b_completed_status_input, "Y") == 0);

	cout << endl << "Creating new Binder..." <<endl;
//	Binder * binder_ = makeBinder(b_subject, b_content_desc, b_completed_status)
	Binder * binder_ = new Binder{nullptr, b_subject, b_content_desc, b_completed_status};

	cout << "Binder->display():" << endl;
	binder_->display();
	delete binder_;
	return true;
}


bool Menu::prompt_user() {
	test_binder();
	return true;
}