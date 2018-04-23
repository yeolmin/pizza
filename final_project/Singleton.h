//singleton.h
#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#define MAKE_SINGLETON(classname)                   \
private:                                            \
	classname() { }                                 \
	classname(const classname&) = delete;           \
	void operator=(const classname&) = delete;      \
public:                                             \
	static classname& getInstance()                 \
	{                                               \
	static classname instance;					    \
	return instance;							    \
	}





template<typename TYPE> class Singleton
{
protected:
	Singleton() { }
	Singleton(const Singleton&) = delete;			//���� �ȵǰ� ����
	void operator=(const Singleton&) = delete;		//���� ���� �ȵǰ� ����.
public:
	static TYPE& getInstance()
	{
		static TYPE instance;
		return instance;
	}
};



#endif											