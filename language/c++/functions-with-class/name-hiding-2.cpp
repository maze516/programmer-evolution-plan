#include <iostream>

using namespace std ;

class Base {
public:
    void methodA() { cout << "Base.methodA()" << endl ;}
};

class Derived : public Base {
public:
	//using Base::methodA;// ��Ҫ��ʽ����
    void methodA(int i) { cout << "Derived.methodA(int i)" << endl ;}
};

int  main()
{
  Derived obj;
  obj.methodA(); //  error C2660: ��Derived::methodA��: ���������� 0 ������
}