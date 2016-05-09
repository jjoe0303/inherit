#include <iostream>
#include <string>

using namespace std;

class People{
	public:
		People(string str, int year);
		~People();
		
		string ask_name();
		int ask_age();
		void do_something();
	
	protected:
		void eat();
		
	private:
		string name;
		int age;	
};