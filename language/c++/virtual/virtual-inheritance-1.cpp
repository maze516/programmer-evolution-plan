#include <iostream>

class A { public: void Foo() {} };
class B : public A {};
class C : public A {};
class D : public B, public C {};

int main()
{
	D d;
	d.Foo(); // is this B's Foo() or C's Foo() ??
}

/*
virtual-inherirance-1.cpp(11) : error C2385: �ԡ�Foo���ķ��ʲ���ȷ
        �����ǡ�Foo��(λ�ڻ���A����)
        Ҳ�����ǡ�Foo��(λ�ڻ���A����)
virtual-inherirance-1.cpp(11) : error C3861: ��Foo��:  �Ҳ�����ʶ��
*/