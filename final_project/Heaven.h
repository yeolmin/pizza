#ifndef  __HEAVEN_H__
#define	 __HEAVEN_H__



#include "Pizza.h"
class Heaven : public Pizza								//Pizza�� ���� �Ļ� Ŭ����
{
public:
	virtual void Topping() override;
	virtual void Cheeze() override;
	virtual void Dough() override;

	DECLARE_PIZZA(Heaven);

};

#endif