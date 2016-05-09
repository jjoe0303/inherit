#ifndef GRANDSON_H
#define GRANDSON_H

#include <iostream>
#include <string>
#include "son.hpp"

using namespace std;

class grandson : public son {
	public:
		grandson();
		void grandson_public();
		void grandson_call_father();
		void grandson_call_son();
	
	protected:
		void grandson_protected();
		
	private:
		string grandson_private;
};

#endif //GRANDSON_H
