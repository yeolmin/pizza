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

	auto ret = pizza_map.find(pizza_name);		//pizza_name�� key���Ͽ� �ش��ϴ� ���� �ִ��� �˻�
	if (ret == pizza_map.end())					
		return 0;								//��ã���� 0 ����
	else
	{
		p = pizza_map[pizza_name]();			//ã���� p�� �ش��Լ� �ְ� p��ȯ.
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

