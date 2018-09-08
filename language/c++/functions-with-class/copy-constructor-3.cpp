#include <iostream>

class Array {
public:
    int size;
    int* data;

    explicit Array(int sz) 
        : size(sz), data(new int[size])
    {
    }

    ~Array() 
    {
        if (data != NULL) 
		{
			delete[] this->data;
			data = NULL;
			std::cout << "Array desctructor called." << std::endl;
		}
    }
};
 
int main() 
{
    Array first(20);
    first.data[0] = 25;

    {
        Array copy = first;
        std::cout << first.data[0] << " " << copy.data[0] << std::endl;
    }    // (1) ����ִ�������� ��Ϊʹ���˱������ϳɵĿ������캯��  ִ�е���ǳ����  dataָ��Ŀռ佫���ͷ�

    first.data[0] = 10;    // (2) �ռ��Ա��ͷ� ����Ƿ��ڴ����
}