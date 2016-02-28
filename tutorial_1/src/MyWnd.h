#include <stdio.h>

template <class T>
class B
{
public:
	void SayHi()
	{
		// ����ת���󣬵��õ���T��PrintHi������
		// ����ת�������ǰ�ȫ��
		T *pT = static_cast<T*>(this);
		pT->PrintHi();

		// ���õ���B�Լ���PrintHi����
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