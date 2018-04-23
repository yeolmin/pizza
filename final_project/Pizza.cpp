#include "Pizza.h"
#include "PizzaFactory.h"

void Pizza::Topping(){}
void Pizza::Cheeze(){}
void Pizza::Dough(){}



RegisterPizza::RegisterPizza(string pizza_name, unique_ptr<Pizza>(*f)())
{
	PizzaFactory& pFactory = PizzaFactory::getInstance();

	pFactory.pRegister(pizza_name, f);
}