#ifndef __PEPPERONI_H__
#define __PEPPERONI_H__

#include "pizzaDecorator.h"

class Pepperoni : public PizzaDecorator								//Topping Ŭ������ �Ļ� Ŭ����
{
public:
	Pepperoni(unique_ptr<Pizza> &&p) : PizzaDecorator(std::move(p)){
		cout << "(+) ���۷δ� �߰� " << endl;
	}

	virtual void Topping() override
	{
		cout << "# ���۷δ� ������ �ø��� �� ...." << endl;
		p_pizza_->Topping();

	}
};
////////////////////////// ���۷δ� ///////////////////////////////////

#endif