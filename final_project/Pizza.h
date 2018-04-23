#ifndef	__PIZZA_H__
#define __PIZZA_H__

#include <string>
#include <memory>

using std::string;
using std::unique_ptr;
using std::make_unique;


class Pizza							//Abstract class
{
public:
	virtual ~Pizza(){
	}

	virtual void Topping() = 0;					//�⺻ ����
	virtual void Cheeze() = 0;						//�⺻ ġ��
	virtual void Dough() = 0;						//�⺻ ����

};



struct RegisterPizza
{
	RegisterPizza(string pizza_name, unique_ptr<Pizza>(*f)());
};
// ��� ���ڰ� ���Ѿ� �ϴ� ��Ģ�� ��ũ�η� ����
#define DECLARE_PIZZA( classname )                  \
	static unique_ptr<Pizza> Create() { return make_unique<classname>(); }      \
	static RegisterPizza rp;

#define IMPLEMENT_PIZZA( type, classname )                \
	RegisterPizza classname::rp(type, &classname::Create);



#endif