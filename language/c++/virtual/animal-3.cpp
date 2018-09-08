#include <iostream>

class Animal
{
    public:
        void eat() { std::cout << "I'm eating generic food." << std::endl; }
};

class Cat : public Animal
{
    public:
        void eat() { std::cout << "I'm eating a rat." << std::endl; }
};

// Ϊÿ�����Ͷ���һ������ ���ڲ����������Ͷ���

void func_a(Animal *xyz) 
{ 
	xyz->eat(); 
}

void func_c(Cat *xyz) 
{ 
	xyz->eat(); 
}

int main(int argc, char *argv[])
{
	Animal *animal = new Animal;
	Cat *cat = new Cat;

	func_a(animal); // Outputs: "I'm eating generic food."
	func_c(cat);    // Outputs: "I'm eating a rat."   // OK ���ǵ��ж�������ʱ  �����Ҫ������func_xxx ʮ���鷳

	delete animal;
	delete cat;
	return 0;
}
