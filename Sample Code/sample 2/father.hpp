#ifndef FATHER_H
#define FATHER_H

#include <iostream>
#include <string>

using namespace std;

class father{
	public:
		father();
		void father_public();
	
	protected:
		void father_protected();
		
	private:
		string father_private;
};

#endif //FATHER_H
