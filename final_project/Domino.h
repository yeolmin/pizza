#ifndef  __DOMINO_H__
#define	 __DOMINO_H__





#include "Pizza.h"
class Domino : public Pizza								//Pizza�� ���� �Ļ� Ŭ����
{
public:
	virtual void Topping() override;
	virtual void Cheeze() override;
	virtual void Dough() override;

	DECLARE_PIZZA(Domino);

};

#endif