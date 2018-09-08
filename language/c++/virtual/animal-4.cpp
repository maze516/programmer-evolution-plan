#include <iostream>

class Animal
{
    public:
        virtual void eat()  { std::cout << "I'm eating generic food." << std::endl; }  // ʹ�ùؼ���virtual����Ϊ�麯��
};

class Cat : public Animal
{
    public:
        virtual void eat() { std::cout << "I'm eating a rat." << std::endl; }
};

// ����һ������ ʹ�ø���ָ�� ���ö���ķ���
void func(Animal *xyz) 
{ 
	xyz->eat(); 
}

int main(int argc, char *argv[])
{
	Animal *animal = new Animal;
	Cat *cat = new Cat;

	func(animal); // Outputs: "I'm eating generic food."
	func(cat);    // Outputs: "I'm eating a rat."   // OK

	delete animal;
	delete cat;
	return 0;
}
