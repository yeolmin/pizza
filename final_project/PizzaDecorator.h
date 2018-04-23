#ifndef __PIZZADECORATOR_H__
#define __PIZZADECORATOR_H__

#include "pizza.h"





class PizzaDecorator : public Pizza						//�߰��� Ŭ����
{
private:
	unique_ptr<Pizza> up_pizza;

public:

	virtual void Topping() override;
	virtual void Cheeze() override;
	virtual void Dough()  override;


};
struct RegisterTopping
{
	RegisterTopping(string topping_name, unique_ptr<Pizza>(*f)(unique_ptr<Pizza>));
};





///////////////�����ϴ� �� ////////////////////////////////////////
#define DECLARE_TOPPING( classname )                  \
	static unique_ptr<Pizza> Create(unique_ptr<Pizza> p) { return make_unique<classname>(move(p)); }      \
	static RegisterTopping rt;

#define IMPLEMENT_TOPPING( topping_name, classname )                \
		RegisterTopping classname::rt(topping_name, move(classname::Create));


#endif