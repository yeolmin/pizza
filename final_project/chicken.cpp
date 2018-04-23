#include "chicken.h"
//test¿ë
#include <iostream>
using std::cout;
using std::endl;
/////////////////////////////////////

using namespace std;

void Chicken::Topping()	{
	cout << "Chicken" << endl;
}


unique_ptr<Pizza> Chicken::Create(unique_ptr<Pizza>&& up_pizza)
{

	return make_unique<Chicken>(up_pizza);
}

RegisterTopping Chicken::rs("Chicken", move(Chicken::Create));
