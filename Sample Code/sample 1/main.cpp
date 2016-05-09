#include <iostream>
#include "Student.hpp"

using namespace std;

int main(){
	People *A = new People("Jack",10);
	A -> ask_name();
	A -> ask_age();
	A -> do_something();
	delete(A);
	
	cout << "===============" << endl;
	
	Student *B = new Student("Peter",20,"F74021014");
	B -> ask_name();
	B -> ask_age();
	B -> ask_id();
	B -> do_something();
	delete(B);	
	
	return 0;
}