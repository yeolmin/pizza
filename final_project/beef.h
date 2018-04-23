#ifndef __BEEF_H__
#define __BEEF_H__



#include "pizzaDecorator.h"

class Beef : public PizzaDecorator									//Topping 클래스의 파생 클래스
{
public:
	Beef::Beef(unique_ptr<Pizza> &&p) : PizzaDecorator(std::move(p)){
		cout << "(+) 떡갈비 추가 " << endl;
	}

	virtual void Topping() override
	{
		cout << "# 떡갈비 토핑을 올리는 중 ...." << endl;
		p_pizza_->Topping();
	}




};






#endif