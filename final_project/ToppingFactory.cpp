#include <iostream>
#include <vector>
#include "ToppingFactory.h"
#include "Pizza.h"


using std::cout;
using std::endl;
void ToppingFactory::tRegister(string topping_name, tCREATOR f)
{
	topping_map[topping_name] = f;
}

unique_ptr<Pizza> ToppingFactory::CreateTopping(string topping_name, unique_ptr<Pizza> up_pizza)
{
	//unique_ptr<Pizza> p = 0;
	
	auto ret = topping_map.find(topping_name);
	if (ret == topping_map.end())
		return 0;
	
	return topping_map[topping_name](move(up_pizza));

	

}

void ToppingFactory::getTOppingmap()
{

	map<string, tCREATOR>::iterator it;
	int i = 1;
	for (it = topping_map.begin(); it != topping_map.end(); it++)
	{
		cout << i++ << " : " << endl;
		cout << it->first << endl;
	}

}


