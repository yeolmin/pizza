#include "Heaven.h"
//test��
#include <iostream>
using std::cout;
using std::endl;
/////////////////////////////////////

void Heaven::Topping(){
	cout << "Heaven" << endl;
}
void Heaven::Cheeze(){}
void Heaven::Dough(){}

IMPLEMENT_PIZZA("Heaven", Heaven)