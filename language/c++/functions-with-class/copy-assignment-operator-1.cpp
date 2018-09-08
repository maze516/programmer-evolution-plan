#include <iostream>
#include <algorithm> // for std::copy

class Array {
public:
    int size;
    int* data;

    explicit Array(int sz) 
        : size(sz), data(new int[size])
    {
    }
	// �Զ���Ŀ������캯��
	Array(const Array& other):size(other.size), data(new int[other.size])
	{
		std::copy(other.data, other.data + other.size, data);
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
        Array copy(0);
		copy = first;
        std::cout << first.data[0] << " " << copy.data[0] << std::endl;
    }    // (1) ����ִ�������� ��Ϊʹ���˱������ϳɵĸ�ֵ������  ִ�е���ǳ����  dataָ��Ŀռ佫���ͷ�

    first.data[0] = 10;    // �ռ��Ա��ͷ� ����Ƿ��ڴ����
}