#include <iostream>

class A { public: void Foo() {} };
class B : virtual public A {};  // ʹ��virtual�Ķ�̳�
class C : virtual public A {};
class D : public B, public C {};

int main()
{
	D d;
	d.Foo(); // ok
}

/*
What happens without virtual inheritance:
A   A  
|   |
B   C  
 \ /  
  D 
with virtual inheritance:

  A  
 / \  
B   C  
 \ /  
  D 
*/