#include <iostream>

class Person
{
public:
	Person(char* name, int age):age(age)
	{
		if(name)
		{
			std::size_t len = strlen(name);
			pName = new char[len+1];
			strcpy(pName, name);
			pName[len] = '\0';
		}
	}
	Person():pName(NULL), age(0) {}
	~Person() 
	{
		if(pName)
		{
			delete[] pName;
			pName = NULL;
		}
	}
public:
	void display()
	{
		std::cout << "Name= " << pName << " Age= " << age << std::endl;
	}
private:
	int age;
	char *pName;
};


// ʹ��ģ�� ֧�ַ���
template <typename T>
class SP
{
public:
	SP(T* pValue): pData(pValue){}
	~SP()
	{
		delete pData;
		pData = NULL;
	}
public:
	// ���ؽ����ò�����
	T& operator *()
	{
		return *pData;
	}
	// ���ؼ�ͷ�����
	T* operator->()
	{
		return pData;
	}
private:
	T* pData;
};

int main(int argc, char *argv[])
{
	SP<Person> p(new Person("Jack", 20));
	p->display();
	{
		SP<Person> q = p;
		q->display();
	}
	p->display(); // �Ƿ�����  ��Ϊq�Ѿ��ͷ��� ָ��ͬһ��������ڴ�
	return 0;
}
