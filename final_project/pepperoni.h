#ifndef __PEPPERONI_H__
#define __PEPPERONI_H__

#include "pizzaDecorator.h"

class Pepperoni : public PizzaDecorator								//Topping 클래스의 파생 클래스
{
public:
	Pepperoni(unique_ptr<Pizza> &&p) : PizzaDecorator(std::move(p)){
		cout << "(+) 페퍼로니 추가 " << endl;
	}

	virtual void Topping() override
	{
		cout << "# 페퍼로니 토핑을 올리는 중 ...." << endl;
		p_pizza_->Topping();

	}
};
////////////////////////// 페퍼로니 ///////////////////////////////////

#endif