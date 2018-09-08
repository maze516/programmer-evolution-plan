#include <iostream>
class Shape
{
public:
    virtual  double calcArea(){} //�麯��
    virtual  double calcPerimeter()=0;//���麯��
};

class IShape
{
public:
    virtual double calcArea()=0//�������
    virtual double calcPerimeter()=0//�����ܳ�
};

/*
����ڳ����൱�н����д��麯�������������κζ��������ǳ�֮Ϊ�ӿ��ࡣ

    1.û���κ����ݳ�Ա
    2.���г�Ա����
    3.��Ա�������Ǵ��麯��
*/

class Flyable//���
{
public:
    virtual void takeoff()=0;//���
    virtual void land()=0;//����
}��
class Bird:public Flyable
{
public:
    virtual void takeoff(){}
    virtual void land(){}
};
void flyMatch(Flyable *a,Flyable *b)//���б���
//Ҫ����һ����ɶ����ָ�룬��ʱ����Ķ���ָ����Դ������
{
    a->takeoff();
    b->takeoff();
    a->land();
    b->land();
}