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

// ���ü�����
class RC
{
public:
	RC():referenceCount(0) {}
	void incRef() {++referenceCount;}
	int decRef() {return --referenceCount;}
	int getRefCount() const {return referenceCount;}
private:
	int referenceCount;
};

// ʹ��ģ�� ֧�ַ���
template <typename T>
class SP
{
public:
	// Ĭ�Ϲ��캯��
	SP() :pData(NULL), ref(NULL)
	{
		ref = new RC();
		ref->incRef();
	}

    // ���������캯��
	SP(T* pValue): pData(pValue), ref(NULL)
	{
		ref = new RC();
		ref->incRef();
	}
	~SP()
	{
		if(ref->decRef() == 0)
		{
			delete pData;
			pData = NULL;
			delete ref;
			ref = NULL;
		}
	}
public:
	// �������캯�� ע�������д��ʽ
	SP(const SP<T>& other):pData(other.pData), ref(other.ref)
	{
		ref->incRef(); // ����ͬһ�����ü��� �ڴ˻����ϼ�1
	}
	// ������ֵ������
	SP<T>& operator = (const SP<T>& other)
	{
		if(this != &other)
		{
			if(ref->decRef() == 0)  // ��ֵʱ �ȶ�ԭ�������ü�����1 �����Ϊ0����Ӧ���ͷ�ԭ����
			{
				delete pData;
				pData = NULL;
				delete ref;
				ref = NULL;
			}
			pData = other.pData;
			ref = other.ref;
			ref->incRef();
		}
		return *this;
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
	RC* ref; // ������ü��������Ƕ�̬����� ͬһ������Ķ������ָ��֮�乲��ͬһ�ݼ���
};

int main(int argc, char *argv[])
{
	SP<Person> p(new Person("Jack", 20));
	p->display();
	{
		SP<Person> q = p;
		q->display();

		SP<Person> r;
		r = p;
		r->display();
	}
	p->display(); // OK
	p = NULL; // OK
	return 0;
}
