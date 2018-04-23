#include "PizzaDecorator.h"
#include "ToppingFactory.h"

void PizzaDecorator::Topping(){}
void PizzaDecorator::Cheeze() {}
void PizzaDecorator::Dough()  {}



RegisterTopping::RegisterTopping(string topping_name, unique_ptr<Pizza>(*f)(unique_ptr<Pizza>))
{
	ToppingFactory& tFactory = ToppingFactory::getInstance();
	tFactory.tRegister(topping_name, f);

}

