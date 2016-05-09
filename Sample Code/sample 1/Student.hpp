#include <iostream>
#include <string>
#include "People.hpp"

using namespace std;

class Student : public People {
	public:
		Student(string str1, int year, string str2);
		~Student();
		
		string ask_id();
		void do_something();
	
	protected:
		void learn();
		
	private:
		string id;
};