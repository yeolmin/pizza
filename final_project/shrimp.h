#ifndef __SHRIMP_H__
#define __SHRIMP_H__

#include "pizzaDecorator.h"

class Shrimp : public PizzaDecorator								//Topping 클래스의 파생 클래스
{
public:
	Shrimp(unique_ptr<Pizza> &&p) : PizzaDecorator(std::move(p)){
		cout << "(+) 새우 추가 " << endl;
	}
	virtual void Topping() override
	{
		cout << "# 새우 토핑을 올리는 중 ...." << endl;
		p_pizza_->Topping();

	}
};



#endif