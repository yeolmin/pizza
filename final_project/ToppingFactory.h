#ifndef  __TOPPINGFACTORY_H__
#define	 __TOPPINGFACTORY_H__


#include <map>
#include <string>


#include "Pizza.h"
#include "Singleton.h"
//class Pizza;

using std::string;
using std::map;


class ToppingFactory
{
	MAKE_SINGLETON(ToppingFactory)
	typedef unique_ptr<Pizza>(*tCREATOR)(unique_ptr<Pizza>);
	map<string, tCREATOR> topping_map;

public:
	void tRegister(string topping_name, tCREATOR f);
	unique_ptr<Pizza>  CreateTopping(string topping_name, unique_ptr<Pizza> up_pizza);
	void getTOppingmap();
};

#endif