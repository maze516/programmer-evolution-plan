#include <iostream>
#include <vector>

class Animal
{
    public:
        virtual void eat() const { std::cout << "I'm eating generic food." << std::endl; }  // ʹ�ùؼ���virtual����Ϊ�麯�� ���Ҷ���Ϊconst��Ա����
};
typedef std::vector<Animal*> SeqAnimalPtrType;

class Cat : public Animal
{
    public:
        virtual void eat() const { std::cout << "I'm eating a rat." << std::endl; }
};

// ����һ������ ��������Ԫ�ؼ���
void func(const SeqAnimalPtrType& animals) 
{ 
	for(SeqAnimalPtrType::const_iterator it = animals.begin(); it != animals.end();++it)
	{
		if((*it))
		{
			(*it)->eat();
		}
	}
}

int main(int argc, char *argv[])
{
	SeqAnimalPtrType animals;
	Animal *animal = new Animal;
	animals.push_back(animal);
	Cat *cat = new Cat;
	animals.push_back(cat);

	func(animals); // Outputs: I'm eating generic food.  I'm eating a rat.

	delete animal;
	delete cat;
	return 0;
}
