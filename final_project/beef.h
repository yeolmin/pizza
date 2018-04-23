#ifndef __BEEF_H__
#define __BEEF_H__



#include "pizzaDecorator.h"

class Beef : public PizzaDecorator									//Topping Ŭ������ �Ļ� Ŭ����
{
public:
	Beef::Beef(unique_ptr<Pizza> &&p) : PizzaDecorator(std::move(p)){
		cout << "(+) ������ �߰� " << endl;
	}

	virtual void Topping() override
	{
		cout << "# ������ ������ �ø��� �� ...." << endl;
		p_pizza_->Topping();
	}




};






#endif