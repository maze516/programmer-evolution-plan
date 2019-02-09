##д��ǰ��
    
python���������﷨���([��������java�����ĳ�����3-5�� ��c++��5-10��](https://www.python.org/doc/essays/comparisons/) )������ԭ�Ϳ���(prototyping)�Լ��Ӵ���������֧�֣��㷺Ӧ���ڶ�����򣬳�Ϊ��һ�ź����е����ԡ���������ʹ��Python�������׿�������C++/java��Щ���Ա���ĸ����ԣ��Ѿ������������ݽṹ���㷨��˼���ϡ�ͬʱ��������Python��Ҳ���Խ�PythonӦ��������ר��������㷨ѧϰ�ϣ�һ�ٶ�á�
 
 �����ص��Ҫ����ͼ��ʾ:
 
![����1](http://img.blog.csdn.net/20170827161556885?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)
 
##1.��������
�˽����Ա�������ԣ��ܹ��������ǴӴ����ϰ����������ԡ�

###1) ����������  
�������Ե��ٶ�һ�㶼Ҫ�ȱ����������������Բ����ϵıȽϺ����ҵ�Ȩ��ָ����������Ը�����Ҫ������ض�ʵ�ֽ��л�׼����(benchmarking)��

###2)�ڴ����ҹ���
Python������ʵ�����ڴ�����ҹ�������û�һ�㲻���ڴ�������д�ڴ����ͻ��յ�ϸ�ڡ���Ȼ������ʵ���㷨ʱ��Ȼ��Ҫ���ǳ����ڴ濪������������Ҫ��ĳ�������������Ҫ�ֶ��ͷ��ڴ档

###3)��̬����
�����е�����ϵͳһ���Ǿ�̬��(static-typing)�����߶�̬��(dynamic-typing)����̬���������У�������ʹ��ǰ��Ҫ��ʽ�������ͣ�����c++/java���ԣ�����̬���������У�������ʹ�õ�ʱ��ֱ��ʹ�ü��ɣ�������ǰ���塣��̬��������������ϵͳ���ڱ���ʱִ�м�飬�����ڱ���ʱ�����ģ�����̬�����е����ͼ����������ʱ�����ġ������صĸ����һ����[ǿ����(Strong Typing )��������( Weak Typing)](https://www.sitepoint.com/typing-versus-dynamic-typing/)��
```cpp
/* C code */ 
static int num, sum; // ��̬���͵���ʾ���� 
num = 5; // ������ʹ��
sum = 10; 
```
Python��ֻ��Ҫ��ʹ��ʱ��������:
```python
#Python code
num = 10 // ֱ��ʹ�� ������ǰ����
```
###4) ֧�ֶ��ֱ�̷���
Python֧��������̡�����ʽ�����������ֱ��ģʽ( multi-paradigm programming language)��


###5)�����ϵͳ֧��
Python������֧�ְ��� Windows, Linux/UNIX, Mac OS X, ������ƽ̨��[Ҳ֧��һЩ��������ϵͳ](https://www.python.org/download/other/)��
	
### 6)���������ԵĽ�����
python���Խ���Cython����дC������չ��Google��Grumpy֧�ֽ�python����ΪGo���Գ��򡣸���Ĺ��߿��Բο�[wiki](https://en.wikipedia.org/wiki/Python_%28programming_language%29#Cross-compilers_to_other_languages)��

## 2.��������������

## 1)���ֺͰ�

��C/C++�Ⱦ�̬��������֮�У����Ƕ���һ������
```cpp
int a=1��
```
��ʵ�ʷ���һ���ռ�洢����ֵ1��Ȼ�����a����һ��װ��ֵΪ1�ĺ���һ����
(����:[Understanding Python variables and Memory Management](http://foobarnbaz.com/2012/07/08/understanding-python-variables/))

![a1](http://img.blog.csdn.net/20170827143937314?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

������Ǹı����ֵ:
```cpp
a = 2;
```

���Ǿ��޸����ڴ��е�ֵΪ2����Ϊ:

![a2](http://img.blog.csdn.net/20170827144232716?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

��a��ֵ��b����:
```cpp
int b = a;
```
���ڴ��з���һ���µĿռ䣬����ʼ��Ϊֵ2��

![b2](http://img.blog.csdn.net/20170827144411144?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)![a2](http://img.blog.csdn.net/20170827144232716?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

����python�У����Ƕ���:
```python
a=1
```
ʱ�����ᴴ��һ�����Ͷ�������ֵΪ1, a��Ϊһ������(name)�󶨵��������(binding to object)������ͼ��ʾ:

![a1 bind](http://img.blog.csdn.net/20170827144734216?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

ִ�����:
```python
a = 2
```
��a��������֮ǰ����İ󶨣����°󶨵��¶���:

![a2 bind](http://img.blog.csdn.net/20170827145024145?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

ִ�����:

```python
b = a
```
֮��a��b�������ֶ��󶨵�ͬһ������

![a b binding](http://img.blog.csdn.net/20170827145102838?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

�ڴ�ͳC/C++�����У�����ϰ���ñ�������ʾ���ָ���ڴ浥Ԫ�ķ��ţ�����python��,ʹ�����ֺͰ���һ������(name and binding)���������������������塣��python�а�������������int,string��Щ�������ڣ����ж�������һ������(Everything is an object)��

```
>>> foo = 10
>>> print(foo.__add__)
<method-wrapper '__add__' of int object at 0x018C7314>
```
���ǿ������������ֵ10����Ϊһ��int���Ͷ������а�����һ������__add___���ڼӷ����㡣


### 2) ������������

�������������ܽ�Ϊ�±���ʾ:

![data types](http://img.blog.csdn.net/20170827153109384?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

###3)����Ŀ��޸���
**���޸�**(mmutable )������������˼�������ڲ��½������ǰ���¸ı��������ݣ�Ҳ���Ǳ��ְ󶨶����id���䡣���ָı����**ԭ�ظı�**(in place)��

���ڲ����޸Ķ�������str���ͣ�һ��������Ͳ�����ԭ�ر��޸ģ�Ҫ��ȡ�µ��ַ���ֻ�ܴ���һ���µ�str����
```
>>> s = "hello, world"
>>> s[0]="H"
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: 'str' object does not support item assignment
```
����������һ���¶�������ȡ�ı����ַ���:

```
>>> s="hello,world"
>>> id(s)
33300864
>>> s=s.capitalize()
>>> id(s)
33300800
>>> s
'Hello,world'
```


����int���ͣ��������޸�����ֵʱ�����ᴴ��һ���µĶ���:
```
>>> m = 1
>>> n = m
>>> id(m)
26178432
>>> id(n)
26178432
>>> m += 1
>>> id(m)
26178420
>>> id(n)
26178432
>>>
```
�����õ���**���ú���id**���ڻ�ȡ�����Ψһ��־�����ǿ�����ִ��m+=1��mָ����һ���µĶ��󣬶�n��Ȼָ��֮ǰ���Ǹ�����
ע�⣬��������ָ�Ĳ���ԭ�ظı����ֵ��������˵���ܸı����m,n��ֵ���ڸı����mֵ��ʱ������ʵ�����½���һ����ͬ�Ķ���

**��Ҫע�����**����Ȼ�����޸Ķ����ܸı�����ָ��Ķ��󣬵�������Ԫ������ǿɱ�ģ�����Ȼ���Ըı�������������(the "value" of an immutable object can't change, but it's constituent objects can)������:

```
>>> a= [1,2]
>>> b = ['a','b']
>>> c = (a,b)
>>> c
([1, 2], ['a', 'b'])
>>> c[0] = [1,2,3]
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: 'tuple' object does not support item assignment
>>> a.append(3)
>>> c
([1, 2, 3], ['a', 'b'])
>>> c[0].append(4)
>>> c
([1, 2, 3, 4], ['a', 'b'])
```

����ֱ�Ӹı�Ԫ�صĵ�һ��Ԫ�أ������У���������ͨ����һ��Ԫ������ķ���ȥ�ı����ÿ��С�

���޸Ķ�������list���ͣ����Ǹı���������ʱ�������ᴴ���µĶ���:
```
>>> m = [1,2]
>>> n = m
>>> id(m)
33238872
>>> id(n)
33238872
>>> m.append(3)
>>> m
[1, 2, 3]
>>> id(m)
33238872
>>> id(n)
33238872
>>> n
[1, 2, 3]
```



## �ο�����
- [1]:[Guido van Rossum 1997��python���������ԵıȽ�](https://www.python.org/doc/essays/comparisons/)

- [2]:[Understanding Python variables and Memory Management](http://foobarnbaz.com/2012/07/08/understanding-python-variables/)
- [3][Python Programming/Data Types](https://en.wikibooks.org/wiki/Python_Programming/Data_Types)

- [4][Drastically Improve Your Python: Understanding Python's Execution Model](https://jeffknupp.com/blog/2013/02/14/drastically-improve-your-python-understanding-pythons-execution-model/)
- [5][Built-in Functions](https://docs.python.org/2/library/functions.html)
