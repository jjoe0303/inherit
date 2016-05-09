#ifndef SON_H
#define SON_H

#include <iostream>
#include <string>
#include "father.hpp"

using namespace std;

class son : private father {
	public:
		son();
		void son_public();
		void son_call_father();
	
	protected:
		void son_protected();
		
	private:
		string son_private;
};

#endif //SON_H
