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

	virtual void Topping() = 0;					//기본 토핑
	virtual void Cheeze() = 0;						//기본 치즈
	virtual void Dough() = 0;						//기본 도우

};



struct RegisterPizza
{
	RegisterPizza(string pizza_name, unique_ptr<Pizza>(*f)());
};
// 모든 피자가 지켜야 하는 규칙을 매크로로 제공
#define DECLARE_PIZZA( classname )                  \
	static unique_ptr<Pizza> Create() { return make_unique<classname>(); }      \
	static RegisterPizza rp;

#define IMPLEMENT_PIZZA( type, classname )                \
	RegisterPizza classname::rp(type, &classname::Create);



#endif