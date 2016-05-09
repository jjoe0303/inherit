#include <iostream>
#include <string>
#include "grandson.hpp"

grandson::grandson(){
	grandson_private = "grandson's private member.";
}

void grandson::grandson_public(){
	cout << "grandson's public function." << endl;
}

void grandson::grandson_protected(){
	cout << "son's protected function." << endl;
}

/*void grandson::grandson_call_father(){
	father_public();
//	father_protected();
}*/

void grandson::grandson_call_son(){
	son_public();
	son_protected();
}
