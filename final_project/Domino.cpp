#include "Domino.h"

//test��
#include <iostream>
using std::cout;
using std::endl;
/////////////////////////////////////



void Domino::Topping(){ cout << "Domino" << endl; }
void Domino::Cheeze(){}
void Domino::Dough(){}

IMPLEMENT_PIZZA("Domino", Domino)