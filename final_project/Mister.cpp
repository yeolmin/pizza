#include "Mister.h"
//test��
#include <iostream>
using std::cout;
using std::endl;
/////////////////////////////////////

void Mister::Topping(){ cout << "Mister" << endl; }
void Mister::Cheeze(){}
void Mister::Dough(){}

IMPLEMENT_PIZZA("Mister", Mister)