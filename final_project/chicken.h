#ifndef __CHICKEN_H__
#define __CHICKEN_H__

#include <memory>
using std::unique_ptr;

#include "pizzaDecorator.h"
#include "ToppingFactory.h"

class Pizza;

class Chicken : public PizzaDecorator								//Topping Ŭ������ �Ļ� Ŭ����
{

public:
	
	virtual void Topping() override;
	static unique_ptr<Pizza> Create(unique_ptr<Pizza>&& up_pizza);
	static RegisterTopping  rs;


};

#endif