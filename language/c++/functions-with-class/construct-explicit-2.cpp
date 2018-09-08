#include <iostream>

class Foo
{
public:
    explicit Foo( int x ) { _val = x; }  // ����Ϊ��ʽ���캯��
public:
	int getVal() const {return _val;}
private:
    int _val;
};
 
void doSomething( const Foo &foo )
{
	std::cout << "foo dosomething with val= " << foo.getVal() << std::endl;
}

int main()
{
   doSomething( 10 ); // Error!
   doSomething( Foo( 10 ) ); // OK
   return 0;
}

/*
construct-explicit-2.cpp(20) : error C2664: ��void doSomething(const Foo &)��: �޷������� 1 �ӡ�int��ת��Ϊ��const Foo &��
        ԭ������:  �޷��ӡ�int��ת��Ϊ��const Foo��
        class��Foo���Ĺ��캯������Ϊ��explicit��
*/