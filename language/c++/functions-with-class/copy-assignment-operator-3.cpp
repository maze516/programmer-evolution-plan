#include<iostream>
#include<stdio.h>
 
using namespace std;
 
class Test
{
public:
   Test() {}
   Test(const Test &t)
   {
      cout<<"Copy constructor called "<<endl;
   }
   Test& operator = (const Test &t)
   {
      cout<<"Assignment operator called "<<endl;
	  return *this;
   }
};
 
int main()
{
  Test t1, t2;
  t2 = t1; // ��ֵ������
  Test t3 = t1; // �������캯��
  getchar();
  return 0;
}

/*
Assignment operator called
Copy constructor called
*/