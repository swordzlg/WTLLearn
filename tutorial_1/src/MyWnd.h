#include <stdio.h>

template <class T>
class B
{
public:
	void SayHi()
	{
		// 类型转换后，调用的是T的PrintHi方法，
		// 基类转派生类是安全的
		T *pT = static_cast<T*>(this);
		pT->PrintHi();

		// 调用的是B自己的PrintHi方法
		PrintHi();
	}

protected:
	void PrintHi()
	{
		printf("B: Hi!\n");
	}
};

class D1 : public B<D1>
{
public:
	void PrintHi()
	{
		printf("D1: Hi!\n");
	}
};

class D2 : public B<D2>
{

};