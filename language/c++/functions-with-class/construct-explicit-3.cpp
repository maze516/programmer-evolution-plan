#include <iostream>

class String {
public:
    String(int n){ std::cout<< "allocate " << n << " bytes." << std::endl;} // allocate n bytes to the String object
    String(const char *p){std::cout<< "initializes using char pointer." << std::endl;} // initializes object with char *p
};

int main()
{
   String mystring = 'x'; // Ը��Ϊ��ʼ��Ϊ�ַ�'x' ȴ����س�ʼ��Ϊ120��С���ַ���������
   return 0;
}

/*
���:
allocate 120 bytes.

�������캯��Ϊexplicit
class String {
public:
    explicit String (int n); //allocate n bytes
    String(const char *p); // initialize sobject with string p
};
*/