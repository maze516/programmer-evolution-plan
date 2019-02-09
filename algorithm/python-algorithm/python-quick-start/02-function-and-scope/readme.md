## д��ǰ��
 ��������һ��python����1�����ڻ��Ǽ���ѧϰPython�ıر�֪ʶ�������֪ʶ�ṹͼ������ʾ��
 
![����2](http://img.blog.csdn.net/20170903161336321?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)


## ������������

###1)��������
python�к��������ɹؼ���def��ʼ�����綨��һ������쳲��������еĺ������£�

```python
def fib(n):
	"""Print a Fibonacci series up to n."""
	a, b = 0, 1
	while a < n:
	print a,
	a, b = b, a+b
```
��Ҫע����ǣ�python��ʹ�����š�{����"}"ʶ�����壬���Ǻ�����ĵ�һ�п�ʼ���������������һ����'"""'��д���ַ���������Ϊ**docstring**���ǶԺ�����ע�ͣ�һЩ�ĵ��������������Բ��������ĵ���

##2)�����������

������ĺ��������У����Ǵ�����һ������n��������ʾ�����쳲������������ֵ�����ޡ���python�в������Է�Ϊ���������(**required argument**)�Ϳ�ѡ����(**optional arguments**)����������ǵ��ú���ʱ�����봫��Ĳ���������ѡ�������ɶ���ʱָ��Ĭ�ϲ���������û�û���ṩ��ʹ��Ĭ��ֵ��Ϊȱʡ�Ĳ�����

�����ڴ��ݵ�ʱ��һ�ַ�ʽ�ǰ���λ��˳�򴫵ݣ����ֳ�֮Ϊλ�ò���(**positional arguments**)����һ�ַ�ʽ��ʹ�ùؼ��ֺ�ֵ��key-value��ʽ���ݵĹؼ��ֲ���(**keyword arguments**)��λ�ò�������ʱ��Ҫ��Ҫ��������˳�򴫵ݣ����ؼ��ֲ�����Դ���˳��û�����ƣ���Ϊʹ���˹ؼ����������˲�����ͼ���ڵ���һ������ʱ��֧�����ַ�ʽ�Ļ��ʹ�ã����ǹؼ��ֲ���һ������λ�ò������棬�ؼ��ֲ������治���ٸ���λ�ò����ˡ�

�������涨��ĺ���(����[python doc](https://docs.python.org/2/tutorial/controlflow.html#keyword-arguments)):

```python
def parrot(voltage, state='a stiff', action='voom', type='Norwegian Blue'):
	    print "-- This parrot wouldn't", action,
	    print "if you put", voltage, "volts through it."
	    print "-- Lovely plumage, the", type
	    print "-- It's", state, "!"
```
����voltage��һ�������������state����������������ṩ��Ĭ��ֵ�ǿ�ѡ�����������ж��ַ�ʽ�����������:

```python
parrot(1000)         # 1 positional argument
parrot(voltage=1000) # 1 keyword argument
parrot(voltage=1000000, action='VOOOOOM') # 2 keyword arguments
parrot(action='VOOOOOM', voltage=1000000) # 2 keyword arguments
parrot('a million', 'bereft of life', 'jump')# 3 positional arguments
parrot('a thousand', state='pushing up the daisies') # 1 positional, 1 keyword
```

���⣬Python����Ҳ֧�ֿɱ䳤�����Ĵ��ݣ��ֱ�ʹ�õ����Ǻź������Ǻű�ʾ:

```python
def cheeseshop(kind, *arguments, **keywords):
	    print "-- Do you have any", kind, "?"
	    print "-- I'm sorry, we're all out of", kind
	    for arg in arguments:
	        print arg
	    print "-" * 40
	    keys = sorted(keywords.keys())
	    for kw in keys:
	        print kw, ":", keywords[kw]
```

����*argument����������kind֮���λ�ò���������ϳ�Ϊһ��tuple����**keywords��������йؼ��ֲ���������ϳ�Ϊһ��dict��

�������ú���:

```python
cheeseshop("Limburger", "It's very runny, sir.",
           "It's really very, VERY runny, sir.",
           shopkeeper='Michael Palin',
           client="John Cleese",
           sketch="Cheese Shop Sketch")
```
���������Ϊ:

```
-- Do you have any Limburger ?
-- I'm sorry, we're all out of Limburger
It's very runny, sir.
It's really very, VERY runny, sir.
----------------------------------------
client : John Cleese
shopkeeper : Michael Palin
sketch : Cheese Shop Sketch
```
���һ��������Ҫ���λ�ò���������ǰ����ǡ��Ϊtuple����dict,����Ҫ��������ѹ��������ú���������:

```
>>> range(3, 6)             # range����������Ҫ����λ�ò�������
[3, 4, 5]
>>> args = [3, 6]
>>> range(*args)            # ʹ��*��tuple��ѹΪrange������Ҫ������λ�ò���
[3, 4, 5]
```
 dictҲ����ʹ�������ǺŽ������ƽ�ѹ��������

##3)��������ֵ

python�����ķ���ֵ��Ĭ��ΪNone�����ǲ�����ʽ����д```return None```���д��롣��python�����Ǽȿ��Է��ص���ֵ��Ҳ���Է��ض��ֵ�����ض��ֵʱ������ʹ�õ���ʽ����:

- tuple
- list
- dict
- class object
- named tuple

�ȶ�����ʽ���������ֱ����дΪ:

```python
   def myfunc():
	   return a,b
```

����tuple����ʽ���ز���������ʹ�õĶ��Ž��ṹ��һ��tuple���������ʹ��[a,b]���᷵��list�����ʹ��{"v1":a,"v2":b}������dict��ʽ���ء�����һ�ֱȽ����ŵķ�ʽ����ʹ��**[named tuple](https://docs.python.org/2/library/collections.html#collections.namedtuple)**����������:

```python
>>> import collections
>>> def getPos():
...     pos = collections.namedtuple('Point',['x','y','z'])
...     return pos(1,2,3)
...
>>> a = getPos()
>>> a.x
1
>>> a
Point(x=1, y=2, z=3)
```
�������ǶԷ���ֵ������������ʹ�÷���ֵ������ʮ������ˡ�

##4)���������Ĵ���

��C/C++�в������ݲ�һ����python�Ȳ��Ǵ�ֵ��ʽ(by-value)�� Ҳ���Ǵ���ַ��ʽ(by-adress)�����Ǵ��ݶ��������(**by-object-reference**)�����綨��һ������:

```python
def foo(bar):
    bar.append(42)
    print(bar)
```
��������������:

```
answer_list = []
foo(answer_list)
print(answer_list)
# >> [42]
```

��ô����ʵ�ʷ����Ĺ�����:��foo��**������(scoping)(��������)**�ﶨ����һ������bar,�ڵ��õ�ʱ��barָ����һ���ɱ����(mutable object)answer_list�����������ĺ������ý�����Ӱ�쵽�˵��ú��������������answer_list����ʵ�����:```42```��

�������ָ��һ�����ɱ������ô�ں����ڲ����޷��ı��������������������е�ԭ��������:
```python
def foo(bar):
    bar = 'new value'
    print (bar)
    # >> 'new value'

answer_list = 'old value'
foo(answer_list)
print(answer_list)
# >> 'old value'
```

##5)������������

Python�������õ�ʱ���ں���������Χ��������һ���µķ��ű�( a new symbol table)���ں����ڲ��ĸ�ֵ��䣬����������ֲ����ű����������(���û��ʹ��globalʱ)��

�ڽ�����һ�����ֵ�ʱ�������ں����ľֲ����ű��в��ң�����Ҳ�������ҵ��øú�����(enclosing functions)����������������Ҳ��Ϊ������������ڸ����������ʧ�ܣ���ת��ȫ�ַ��ű�(global symbol table)�������ʧ����������÷��ű�(global symbol table)��������Ų���ʧ�ܣ�����׳��޷��������ŵ��쳣�����Ų��ҵĹ�����һ���ɱ��������ϵĹ��̡�

python�������������������ؼ��֣�**global��nonlocal**���ڷ��Ų��ҵ�ʱ��ʹ��globalָ��ĳ�����ź�������Ž�����Ϊȫ���������з��ţ�ָ�����ȫ���������еĶ�������:

```python
def method():
    # ��ʽ�ر��� ʹ��ȫ���������еķ���value
    global value
    value = 100

value = 0
method()
print(value)
# >> 100
```
��������ڲ�û��ʹ��global��䣬��ô�����ں����ľֲ��������ﶨ��һ������value������������󣬲���Ӱ�쵽ȫ���������е�value��

nonlocal[���ڱ������������ڸ��������н����������Ǳ���(local)����ȫ����(global)](https://www.dotnetperls.com/nonlocal-python)������:

```python
def method():

    def method2():
        # ��Ƕ�׵ķ����� ���Ƚ���Ϊ��������ķ���
        # ����value���� method�����������е�value
        nonlocal value
        value = 100
    value = 10
    method2()
    print(value) # >> 100
# ���÷���
method()
```

���ڷ��ŵĽ����������[SO](https://stackoverflow.com/questions/1261875/python-nonlocal-statement)ѡȡ��һ���ۺ���������:

```python
# ����1 ��ʹ��global��nonlocal
x = 0
def outer():
    x = 1
    def inner():
        x = 2
        print("inner:", x)

    inner()
    print("outer:", x)

outer()
print("global:", x)

# inner: 2
# outer: 1
# global: 0
```
���Ӷ�ʹ��nonlocal������:

```python
#����2 ʹ��nonlocal
x = 0
def outer():
    x = 1
    def inner():
        nonlocal x
        x = 2
        print("inner:", x)

    inner()
    print("outer:", x)

outer()
print("global:", x)

# inner: 2
# outer: 2
# global: 0
```
����3ʹ��global������:

```python
#����3  ʹ��global
x = 0
def outer():
    x = 1
    def inner():
        global x
        x = 2
        print("inner:", x)

    inner()
    print("outer:", x)

outer()
print("global:", x)

# inner: 2
# outer: 1
# global: 2
```

##6)lambda��closure
lambda���ʽ����һ�������Ķ̺���( anonymous functions )��python����������������ǣ�����ʹ����䣬ֻ��ʹ�ñ��ʽ�����ʽ���ص�ֵ�����Ǻ�������ֵ������:

```python
>>> foo = lambda x: x*x
>>> print(foo(10))
100
```
lambda���ʽ��һ������Ҫ�����ġ���С�ĺ����ط�Ӧ�ã�������������Ӧ�õúܶࡣ����[�����lamba���ʽ����ѧ���ɼ�������������](https://wiki.python.org/moin/HowTo/Sorting):

```
>>> student_tuples = [
        ('john', 'A', 15),
        ('jane', 'B', 12),
        ('dave', 'B', 10),
]
>>> sorted(student_tuples, key=lambda student: student[2])   # ����������
[('dave', 'B', 10), ('jane', 'B', 12), ('john', 'A', 15)]
```
����key������һ�����ڷ�������Ԫ�صĺ���������Ԫ���У��������ﷵ�ص�����Ԫ�أ�Ҳ���Ƿ��������������

closure�����������[�������ӵ�����֮�ϵ���Ϊ(data gets attached to the code )](https://www.programiz.com/python-programming/closure)���������Ƕ���һ���򵥵�Ƕ�׺�������:

```python
def print_msg(msg):
# ������Χ����

    def printer():
# �����ڲ�Ƕ�׵ĺ���
        print(msg)

    printer()

print_msg("Hello") # >> Hello
```

�������ڲ㺯�����Է�����Χ������msg������������ڲ㺯����Ϊ���غ����أ�

```python
def print_msg(msg):
    def printer():
        print(msg)

    return printer  # �����ڲ㺯��

another = print_msg("Hello")
another() # >> Hello
```
�������ǵ�print_msg�������ص���һ���������󣬽������������󶨵�another�����ǿ���ʹ��another��ִ�������������Ҫע����ǣ�ִ��another��ʱ�򣬾����Ѿ��˳���print_msg�������򣬵���ÿ���������"Hello"����Ϊ��������Ѿ����ӵ����������֮�ϡ����ֺ�����python�г�֮Ϊ�հ�(closure)����������Ҳ�����Ƹ��

�հ�������������;������Ϊ�˱���ȫ�ֱ���������һ���̶��ϵ��������ء������ṩ��һ�������ıհ�ʵ�֣�����:

```python
def make_multiplier_of(n):
    def multiplier(x):
        return x * n
    return multiplier

# Multiplier of 3
times3 = make_multiplier_of(3)

# Multiplier of 5
times5 = make_multiplier_of(5)

# Output: 27
print(times3(9))

# Output: 15
print(times5(3))

# Output: 30
print(times5(times3(2)))
```
lambda��closure���ڳ�ѧ����˵����Ϥ���ɡ�

## �ο�����

- [More on Defining Functions](https://docs.python.org/2/tutorial/controlflow.html#more-on-defining-functions)

- [Is Python call-by-value or call-by-reference? Neither.](https://jeffknupp.com/blog/2012/11/13/is-python-callbyvalue-or-callbyreference-neither/)

- [Sorting Mini-HOW TO](https://wiki.python.org/moin/HowTo/Sorting)

- [Anonymous function](https://en.wikipedia.org/wiki/Anonymous_function#Python)

- [Python Closures](https://www.programiz.com/python-programming/closure)




