#include <iostream>
#include <string>
#include "son.hpp"

son::son(){
	son_private = "son's private member.";
}

void son::son_public(){
	cout << "son's public function." << endl;
}

void son::son_protected(){
	cout << "son's protected function." << endl;
}

void son::son_call_father(){
	father_public();
	father_protected();	
}


