#ifndef	__PIZZAFACTORY_H__
#define __PIZZAFACTORY_H__
#include <map>
#include <string>
#include <vector>
#include <memory>

#include "Singleton.h"

using std::map;
using std::string;
using std::vector;
using std::unique_ptr;

class Pizza;


class PizzaFactory
{
	MAKE_SINGLETON(PizzaFactory)

	typedef unique_ptr<Pizza>(*pCREATOR)();
	map<string, pCREATOR> pizza_map ;

public:
	void pRegister(string pizza_name, pCREATOR creator);
	unique_ptr<Pizza> CreatePizza(string pizza_name);
	void GetPizzaList();


};

#endif