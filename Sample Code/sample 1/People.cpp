#include <iostream>
#include <string>
#include "People.hpp"

using namespace std;

People::People(string str, int year){
	name = str;
	age = year;
	cout << "You create a new people." << endl;
}

People::~People(){
	cout << "You kill " << name << "." << endl;
}

string People::ask_name(){
	cout << "My name is " << name << "." << endl;
	return name;
}

int People::ask_age(){
	cout << "I'm " << age << " years old." << endl;
	return age;
}

void People::do_something(){
	eat();
}

void People::eat(){
	cout << name << " is eating." << endl;
}