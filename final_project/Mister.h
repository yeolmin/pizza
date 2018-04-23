#ifndef  __MISTER_H__
#define	 __MISTER_H__



#include "Pizza.h"
class Mister : public Pizza								//Pizza에 대한 파생 클래스
{
public:
	virtual void Topping() override;
	virtual void Cheeze() override;
	virtual void Dough() override;

	DECLARE_PIZZA(Mister);

};

#endif