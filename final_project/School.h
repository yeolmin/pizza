#ifndef  __SCHOOL_H__
#define	 __SCHOOL_H__



#include "Pizza.h"
class School : public Pizza								//Pizza�� ���� �Ļ� Ŭ����
{
public:
	virtual void Topping() override;
	virtual void Cheeze() override;
	virtual void Dough() override;

	DECLARE_PIZZA(School);

};

#endif