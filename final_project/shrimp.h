#ifndef __SHRIMP_H__
#define __SHRIMP_H__

#include "pizzaDecorator.h"

class Shrimp : public PizzaDecorator								//Topping Ŭ������ �Ļ� Ŭ����
{
public:
	Shrimp(unique_ptr<Pizza> &&p) : PizzaDecorator(std::move(p)){
		cout << "(+) ���� �߰� " << endl;
	}
	virtual void Topping() override
	{
		cout << "# ���� ������ �ø��� �� ...." << endl;
		p_pizza_->Topping();

	}
};



#endif