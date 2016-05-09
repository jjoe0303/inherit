#include <iostream>
#include "father.hpp"
#include "son.hpp"
#include "grandson.hpp"

int main(){
	//father class=====================================================
	cout << "<father>" << endl;
	father A;
	
	cout << "Main call father's public function :" << endl;
	A.father_public();
	
	cout << "Main call father's protected function :" << endl;
//	A.father_protected();
	
	cout << endl;
	
	//son class========================================================
	cout << "<son>" << endl;
	son B;
	
	cout << "Main call father's public function :" << endl;
//	B.father_public();
	
	cout << "Main call father's protected function :" << endl;
//	B.father_protected();
	
	cout << "Main call son's public function :" << endl;
	B.son_public();
	
	cout << "Main call son's protected function :" << endl;
//	B.son_protected();
	
	cout << "Son call father :" << endl;
//	B.son_call_father();
	
	cout << endl;
	
	//son class=========================================================
	cout << "<grandson>" << endl;
	grandson C;
	
	cout << "main call father's public function :" << endl;
//	C.father_public();
	
	cout << "main call father's protected function :" << endl;
//	C.father_protected();
	
	cout << "main call son's public function :" << endl;
	C.son_public();
	
	cout << "main call son's protected function :" << endl;
//	C.son_protected();
	
	cout << "grandson call father :" << endl;
//	C.grandson_call_father();
	
	cout << "grandson call son:" << endl;
	C.grandson_call_son();
	
	cout << endl;
	
	return 0;
}
