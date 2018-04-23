#include <iostream>
#include <string>

#include "PizzaFactory.h"
#include "ToppingFactory.h"
#include "Pizza.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{

	PizzaFactory& pFac = PizzaFactory::getInstance();
	ToppingFactory& tFac = ToppingFactory::getInstance();
	vector<unique_ptr<Pizza>> v;
	pFac.GetPizzaList();


	//git을위해 걍달아보는 주석

	while (1)
	{
		string cmd;
		cin >> cmd;

		unique_ptr<Pizza> p = pFac.CreatePizza(cmd);
		if (cmd.compare("end") != 0)
		{
			cin >> cmd;

			
			p = move(tFac.CreateTopping(cmd, move(p)));
			v.push_back(move(p));
		}

		else 
		{
			for (int i = 0; i < v.size(); i++)
				v[i]->Topping();
		}
	}
}