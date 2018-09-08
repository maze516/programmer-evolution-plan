#include <iostream>
class Base
{
public:
	Base()
	{
		std::cout << "Calling Base()" << std::endl;
	}
    virtual ~Base() // note: virtual
    {
        std::cout << "Calling ~Base()" << std::endl;
    }
};
 
class Derived: public Base
{
private:
    int* m_array;
 
public:
    Derived(int length)
    {
        m_array = new int[length];
		std::cout << "Calling Derived(int length)" << std::endl;
    }
 
    virtual ~Derived() // note: virtual
    {
        std::cout << "Calling ~Derived()" << std::endl;
        delete[] m_array;
    }
};
 
int main()
{
    Derived *derived = new Derived(5);  // ��� Calling Base() Calling Derived(int length)
    Base *base = derived;
    delete base;  // ��� Calling ~Derived() Calling ~Base()
 
    return 0;
}