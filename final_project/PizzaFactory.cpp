#include "PizzaFactory.h"
#include "Pizza.h"
#include <iostream>


using std::cout;
using std::endl;


void PizzaFactory::pRegister(string pizza_name, pCREATOR creator)
{
	pizza_map[pizza_name] = creator;
}	
unique_ptr<Pizza> PizzaFactory::CreatePizza(string pizza_name)
{
	unique_ptr<Pizza> p = 0;

	auto ret = pizza_map.find(pizza_name);		//pizza_name을 key로하여 해당하는 것이 있는지 검색
	if (ret == pizza_map.end())					
		return 0;								//못찾으면 0 리턴
	else
	{
		p = pizza_map[pizza_name]();			//찾으면 p에 해당함수 넣고 p반환.
		return p;
	}

}

void PizzaFactory::GetPizzaList()
{

	map<string, pCREATOR>::iterator it;
	int i = 1;
	for (it = pizza_map.begin(); it != pizza_map.end(); it++)
	{
		cout << i++ << " : " << endl;
		cout << it->first<< endl;
	}

}

