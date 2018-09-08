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


class SP
{
public:
	SP(Person* pValue): pData(pValue){}
	~SP()
	{
		delete pData;
		pData = NULL;
	}
public:
	// ���ؽ����ò�����
	Person& operator *()
	{
		return *pData;
	}
	// ���ؼ�ͷ�����
	Person* operator->()
	{
		return pData;
	}
private:
	Person* pData;
};

int main(int argc, char *argv[])
{
	SP p(new Person("Jack", 20));
	p->display(); // ����������� �Զ��ͷŶ���
	
	return 0;
}
