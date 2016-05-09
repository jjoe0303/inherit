#include <iostream>
#include <string>
#include "father.hpp"

father::father(){
	father_private = "father's private member.";
}

void father::father_public(){
	cout << "father's public function." << endl;
}

void father::father_protected(){
	cout << "father's protected function." << endl;
}
