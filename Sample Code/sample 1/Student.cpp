#include <iostream>
#include "Student.hpp"

Student::Student(string str1, int year, string str2):People(str1, year){
	//People(str1, year)
	cout << "You create a student." << endl;
	id = str2;
}

Student::~Student(){
	cout << "You kill a student." << endl;
}

string Student::ask_id(){
	cout << "My id is " << id << "." << endl;
	return id;
}

void Student::do_something(){
	learn();
	People::do_something();
}

void Student::learn(){
	cout << ask_name() << " is learning." << endl;
}

