## д��ǰ��
���ڼ򵥵��������ǿ�������һЩ�����������������������д����������������ַ�ʽ��֮Ϊ����ʽ���(**procedural programming**)�����Ƕ��ڸ��ӵ�ϵͳ�����������Ľ�ÿ��ģ��Ĵ����ھ���������������ͼ��ر�����ģ��֮��Ľ���������Ҫһ���µ�ָ��˼�룬���������(**object-oriented programming**)��OOPǿ���ľ���Ϊ����ģ�鹹����󣬶���֮��ͨ����Ϣͨ������ɸ��ӵĹ��ܡ�OOP�����Ǹ��ӵģ�����ֻ�������������ѧϰ��֪ʶ�ṹ����ͼ��ʾ��

![����3](http://img.blog.csdn.net/20170910185651190?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)



## ���������(OOP)

##1����Ķ���
��Pythonÿ������ʵ���϶���ָ������һ�����ã�����ǰ���Ѿ�˵�����ˡ�����ʹ��class�ؼ��ֶ����࣬����ʹ��def�ؼ��ֶ��庯��һ������Python�У�֧��[���ֶ������д��](https://stackoverflow.com/questions/4015417/python-class-inherits-object):

```python
#python2.x
class MyClass: # old-style 
class MyClass(object): # new-style class
#python3.x
class MyClass(object): # new-style class
class MyClass: # new-style class (implicitly inherits from object)
```
��������ֶ��巽ʽ���ܵ���ʷԭ������ģ��ڴ����ǲ�ȥ���һ�ֺ���ķ�ʽ�ǣ���python2.x��������ʽʹ��:
```python
class MyClass(object):
	pass
```
���ַ�ʽ����python3.x�����Ϊ�˼���2.x������Ҳ�������ַ�ʽ������û������

##2)��ĳ�Ա�����ͷ���
OOP��������̱��һ���ܴ���������ڣ�������Ը�������(������Щ����)�ͷ���(֧����Щ������Ҳ��һ�ֺ���)��ͨ�������ݺͺ����ھ۵��������ϣ�����ʹ����ĸ��������������ϵͳ�������ֵĽ���������ȷ���������涨��һ��Բ����:

```python
class Circle():
    pi = 3.141592
    def __init__(self, radius=1): #��ʼ������ ����C++���캯��
        self.radius = radius
    def area(self):    # ���������
        return self.radius * self.radius * Circle.pi

    def setRadius(self, radius):
        self.radius = radius

    def getRadius(self):
        return self.radius

# ����һ������
c = Circle()

c.setRadius(5)
print(c.getRadius())
print(c.area())
```
������������У����Ƕ�����һ���򵥵�Բ���࣬���Բ�������һ�����Լ��뾶����radius�洢�����֮Ϊ��ĳ�Ա����(**member variables**)��ͬʱ����3�������ֱ���������Բ����������úͻ�ȡԲ�εİ뾶����Щ��֮Ϊ��ĳ�Ա����(**member methods**)������һ����֮������һ���޷�ֱ�Ӳ����࣬����ʵ�������һ���������(**instance object**)���������ͺñ���˵������Ӧ���ǿ���ĳһ�����峵�͵�������

������������У�����Ҳ������һ��self�ؼ��֣�����ؼ���������ʾ����������ã�������c++֮�е�thisָ�롣�����ǵ��÷���:

```python
print(c.area())   # ͨ��������ó�Ա����
```
��ʱ��ʵ���϶���c������Ϊ�����������Ա����area����ʱself�Ͱ󶨵���������������ô����ʵ�ʲ��������ݾ����������c�������ˡ�ʵ����Ҳ�����������ú���:

```python
print(Circle.area(c))  # ͨ����ʽ������� ������ķ���
```
��������ʵ���Ͻ�c��ʽ�Ĵ����ˣ��������ɽ����������Ǵ��롣����������ã�

```python
print(Circle.area())  # TypeError ȱ��ʵ������
```
�������:
```
TypeError: unbound method area() must be called with Circle instance as first argument (got nothing instead)
```
�Ĵ���ԭ�����ڣ�û����ȷ����һ��ʵ��������Ϊ��һ���������ú�����

��Python����Ҫ����[�������͵ĳ�Ա�����ͺ���](https://softwareengineering.stackexchange.com/questions/306092/what-are-class-methods-and-instance-methods-in-python)������֮�䶼�������г����£�

### 2.1)ʵ������ĳ�Ա (**instance -level members**)
ʵ������ĳ�Ա��������ÿ��������������ݺͺ��������������е�radius������������Ա������**ʵ������ĳ�Ա������һ����__init__�����н��г�ʼ����**����:

```python
class Foo(object):
    def hello(self):   # ע��������Ҫ����ʵ�������self
        print("hello from %s" % self.__class__.__name__)
```
���÷�ʽ:

```python
obj= Foo()
obj.hello() # ��ʽһ
#>>  "hello from Foo"
Foo.hello(obj)  # ��ʽ��
#>>  "hello from Foo"
```

###2.2)�༶��ĳ�Ա(**class-level members**)
  �༶��ĳ�Ա��������ĳ������Ķ��󣬶������������ֵ����ݻ��ߺ���������ĳ������Ҫ���ֶ��󴴽������ļ�������������Ͷ���Ϊ����������������е�**pi**�������Ա���������Ա����������__init__����֮�⡣

```python
class Foo(object):
    @classmethod
    def hello(cls):  # ע�����ﴫ���Ϊ����� ������ĳ��ʵ������
        print("hello from %s" % cls.__name__)
# ���÷�ʽ
Foo.hello()    # �������Ա���� ʹ�������ֵ��ø�����
#>>  "hello from Foo"
Foo().hello()        
#>> "hello from Foo"
```  
  ע�����������ʹ����"**@classmethod**"���ֱ�ǣ���Python�г�֮Ϊ**Decorators**������Ȥ��[�����˽�](http://pythoncentral.io/python-decorators-overview/)��
### 2.3)��̬��Ա(**static members**)
��̬��Ա��һ��������Ϊ��ĳЩ�����ķ����������������ĺ�������Щ������ʹ��ʱ����Ҫ�κ������ʵ������Ϣ��ʵ������Ҫ��Ϊ�˱��ڹ��������������ඨ�����棬ʵ��Ӧ�õñȽ��١�

```python
class Foo(object):
    @staticmethod
    def hello():  # ����Ҫ����ʵ�������������Ϊ����
        print("hello from FOO static")
 Foo.hello()
 #>> hello from FOO static
```

����ĳ�Ա�����У���һ�����⺯�������ຯ����˫�»��߿�ʼ�ͽ�β��������ʾ�ض���Ϊ������__str__����������������ת��Ϊ�ַ���������ַ�������print�Ⱥ����������������ı�ʾ��
```python

class Book(object):

    def __init__(self, title, author, pages):

        print("A book is created")

        self.title = title
        self.author = author
        self.pages = pages

    def __str__(self):

        return "Title:{0} , author:{1}, pages:{2} ".format(
            self.title, self.author, self.pages)

    def __len__(self):

        return self.pages

    def __del__(self):

        print("A book is destroyed")

book = Book("Inside Steve's Brain", "Leander Kahney", 304)

print(book)
print(len(book))
del book

#>> A book is created
#>>Title:Inside Steve's Brain , author:Leander Kahney,pages:304
#>>304
#>> A book is destroyed
```
���ֻ���������C++��**����������**��Python�п������صĺ�������__add__() ,__sub__() �ȡ�

## 3)���������Ҫ��
��������̰�������Ҫ�أ��ֱ��Ƿ�װ(encapsulation )���̳�(inheritance)����̬(Polymorphism)��������������Ƕȿ���Python��δ���ģ���Ϊ��������̱����Ǹ��������⣬����ֻ�ṩһ������˼·����ϸ���Բο��������ϡ�

### 3.1 ��װ��
��װ�漰����������������Ľӿڹ��û�ʹ�ã��ص�����ķ��ʿ���(**access-control**)�������û�������������ƻ����ݡ���Ҫע����ǣ�**Python����ϲ�֧��private�����ͷ���**��ͨ�õ������������������»��߱��������ԱӦ������Ϊ˽�У���Ӧ��������ʹ�á����������������[SO How to do encapsulation in Python?](https://stackoverflow.com/questions/26216563/how-to-do-encapsulation-in-python)

```python
class C(object):
    def __init__(self):
        self.a = 123    # OK to access directly
        self._a = 123   # should be considered private
        self.__a = 123  # considered private, name mangled
>>> c = C()
>>> c.a
123
>>> c._a
123
>>> c.__a
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
AttributeError: 'C' object has no attribute '__a'
>>> c._C__a
123
```
�����������У�__a ��������д��(**name mangling** )Ϊ _C__a����ʵ����Ҳ�ܷ��ʣ���ֻ��Python��һ����ʾ��ʽ��Python����ϲ�֧��private��

##3.2 �̳���

�̳���һ�������һ���๲ͬ��Ϊ�ĸ��û��ƣ����̳е����֮Ϊ������߻���(**base classes**)���Ӹ���̳ж��������֮Ϊ�������������(**derived classes**)�����಻�����и���ĳ�Ա�����ͺ�����ͬʱҲ���޸ĸ���ĳ�Ա����(overriding)������µĳ�Ա������

����һ����ͨ�������˻����ٶ���һ����Ͷ�ȵ������˻������£�
```python
class BankAccount(object):
    def __init__(self):
        self.balance = 0

    def withdraw(self, amount):
        self.balance -= amount
        return self.balance

    def deposit(self, amount):
        self.balance += amount
        return self.balance


class MinimumBalanceAccount(BankAccount):
    def __init__(self, minimum_balance):
        BankAccount.__init__(self)    # call super class init method
        self.minimum_balance = minimum_balance

    def withdraw(self, amount):   # overriding
        if self.balance - amount < self.minimum_balance:
            print 'Sorry, minimum balance must be maintained.'
        else:
            return BankAccount.withdraw(self, amount)

a = BankAccount()
b = MinimumBalanceAccount(100)
a.deposit(100)
b.deposit(100)
print(a.withdraw(10)) # >> 90
print(b.withdraw(10)) # >> Sorry, minimum balance must be maintained.None
```
������������У�MinimumBalanceAccount�Ķ����У���������д��
����������BankAccount���Ӹ���̳���balance ��Ա������������ͬʱ����MinimumBalanceAccount�����һ����Ͷ�ȵ�minimum_balance��Ա��ͬʱ��д��withdraw������

��Ҫע�����������ø���ķ���������:
```python
super(SubClass, instance).method(args)
SuperClass.method(instance, args)
```
�������ַ�ʽ�ĺû������Բο�[Python super method and calling alternatives](https://stackoverflow.com/questions/5033903/python-super-method-and-calling-alternatives)��

����������У�����ʹ��:

```python
BankAccount.withdraw(self, amount)
```

�����滻Ϊ:
```python
super(MinimumBalanceAccount,self).withdraw(amount)
```
##3.3 ��̬��
��̬����ָ���ø�����������Ϳ���ָ����������������������ʱ����ʵ��ָ��Ķ�����������̬������β�������Ϊ�����磺

```python
>>> a = "alfa"
>>> b = (1, 2, 3, 4)
>>> c = ['o', 'm', 'e', 'g', 'a']
>>>
>>> print(a[2])
f
>>> print(b[1])
2
>>> print(c[3])
g
```
�����������������ʵ�ʾ���һ�ֶ�̬��Ϊ�������ַ�����Ԫ�顢�б����ͬ�ֲ�������ʵ����Ϊ�ɶ����������������������ü̳ж����˶���࣬չʾ�˶�̬��Ϊ��

```python
class Animal(object):
    
   def __init__(self, name=''):
      self.name = name

   def talk(self):
      pass

class Cat(Animal):
	
   def talk(self):
      print("Meow!")

class Dog(Animal):
    
   def talk(self):
      print("Woof!")

animals = [Cat("Missy"), Dog("Rocky")]
for a in animals:
	a.talk()
# >> Meow!
# >> Woof!
```
�����a�������talk��ʵ��ִ��ʱ�ɶ����ʵ�����;��������ֲ��������ֶ�̬���е�Ч�����Ƕ�̬�ԣ���̬�����ܴܺ�̶��ϼ򻯴��롣


## 4 ������
Python����������̷��棬û���ṩ����ӿڵķ���������֧�ֳ������ġ�Ҫ���������࣬��Ҫʹ��python��abc�⡣�������һ��python2.x�汾������(����[Abstract Classes in Python](https://www.zaiste.net/posts/abstract_classes_in_python/)):

```python
from abc import ABCMeta, abstractmethod

class Animal(object):
    __metaclass__ = ABCMeta

    @abstractmethod
    def say_something(self): pass # ���󷽷� �ǳ���������ʵ��

class Cat(Animal):
    def say_something(self):
        return "Miauuu!"
a = Animal()
a.say_something()
```
�����ͼʵ�����������,�����ʾ����:
```
Traceback (most recent call last):
  File "abstactDemo.py", line 13, in <module>
    a = Animal()
TypeError: Can't instantiate abstract class Animal with abstract methods say_something
```
ʵ����ʵ����ȫ�����󷽷������࣬���������:
```python
from abc import ABCMeta, abstractmethod

class Animal(object):
    __metaclass__ = ABCMeta

    @abstractmethod
    def say_something(self):
          return "I'm an animal!"

class Cat(Animal):
    def say_something(self):
        s = super(Cat, self).say_something()
        return "%s - %s" % (s, "Miauuu")

a = Cat()
print(a.say_something())
# >> I'm an animal! - Miauuu
```
�����汾Python�������ʵ�֣����Բο�[Is it possible to make abstract classes in python?](https://stackoverflow.com/questions/13646245/is-it-possible-to-make-abstract-classes-in-python)��


## �ο�����

- [Python class inherits object](https://stackoverflow.com/questions/4015417/python-class-inherits-object)
- [correct way to define class variables in Python](https://stackoverflow.com/questions/9056957/correct-way-to-define-class-variables-in-python)
- [What are ��class methods�� and ��instance methods��, in Python?](https://softwareengineering.stackexchange.com/questions/306092/what-are-class-methods-and-instance-methods-in-python)
- [Object-oriented programming in Python](http://zetcode.com/lang/python/oop/)
- [Abstract Classes in Python](https://www.zaiste.net/posts/abstract_classes_in_python/)
- [Is it possible to make abstract classes in python?](https://stackoverflow.com/questions/13646245/is-it-possible-to-make-abstract-classes-in-python)
- [Improve Your Python: Python Classes and Object Oriented Programming](https://jeffknupp.com/blog/2014/06/18/improve-your-python-python-classes-and-object-oriented-programming/)
