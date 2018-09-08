#include <iostream>

class Foo
{
public:
    Foo( int x ) { _val = x; }
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
   doSomething( 10 ); // Acts like doSomething( Foo( 10 ) ); ��������ʽת�� ������Foo���� �������Υ����Ը�� �����е��´���
   return 0;
}
