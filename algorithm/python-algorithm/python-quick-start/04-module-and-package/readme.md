##д��ǰ��
������Python����ƪ�����һƪ�ˣ�ͨ���������ǽ�����ϤPythonģ�顢����ʹ�ã�ͬʱ�˽��������дPythonic�����ϰ�ߡ���Ҫ��������ͼ��ʾ:

![����4](http://img.blog.csdn.net/20170918130538548?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)


## ģ��Ͱ�

###1) ģ��Ķ��������
��Python��һ���ű�(**Script**)��һ����Ҫ��������ģ��(main)ִ�е�python�ļ���ģ��(**Module**)��һ����.py��β��python�ļ������ļ������Ƕ����˺������࣬׼���Ժ�������Щ����顣Python��ģ������֣�������.pyΪ��׺���ļ����ļ���������fibo.py����ôģ��������fibo��`__name__`�������������õ�ģ������֣���ģ�鱻������ģ��ִ��ʱ����`__name__`����`__main__`��

�������Ǵ���һ��쳲��������е�ģ��fibo.py���£�

```python
# Fibonacci numbers module

def fib(n):    # write Fibonacci series up to n
    a, b = 0, 1
    while b < n:
        print b,
        a, b = b, a+b

def fib2(n):   # return Fibonacci series up to n
    result = []
    a, b = 0, 1
    while b < n:
        result.append(b)
        a, b = b, a+b
    return result
 
 if __name__ == "__main__":
    test_num = 100
    print('fibo unit testing for uuper value= %d' % test_num)
    fib(test_num)
    print('\ntest end.')
```

Ȼ������һ���ļ�fiboTest.py���������ģ��(**import module**)��

```python

import fibo
import sys

print(__name__)
print(fibo.__name__)
print(sys.__name__)
```

������ִ������Ľű��������:
```
>python fiboTest.py
__main__
fibo
sys
```
ִ���������ű������ǻ��ڵ�ǰĿ¼�¿���������Ϊ����������һ��
**fibo.pyc**�ļ�������PythonΪģ�����ɵ��ֽ����ļ���������Python�����ִ�С�pyc�ļ����汣����fibo.py���ģ���ʱ�����Python�����������ʱ���ͬ��ģ�顣

"`__main__`"��������������Ҫ���������Ƿ�ǰ����ִ�еĽű������һ��ģ�鶨��������ĺ������࣬��ͬʱ�����˵�Ԫ���ԵĴ���ʱ������Ҫ������fibo.py��������`__name__`���жϣ����������ģ�鱻����ģ������ʱ����`__name__`�������ģ�����֣���Ԫ���Դ��벻�ᱻִ�У���ֱ����������ű�ʱ��`__name__`����"`__main__`"�����е�Ԫ���Դ���(�ο���[SO](https://stackoverflow.com/questions/419163/what-does-if-name-main-do))��

###2)ģ�������
��һ��ģ���������Ѿ�����õĺ��������࣬���ַ�ʽ��֮Ϊ����**(importing)**����һ�ֺܺõĴ��븴�û��ơ�Python���ж��ִ������뷽ʽ:

```python
import fibo    # ��������ģ�� ʹ��fibo.fib(100)
import fibo as fiboNumber  # ������ fiboNumber.fib(100)
from fibo import *    # ������������ �����ֱ��ʹ��fib(100)
from fibo import fib2 # ����ָ������  �����ֱ��ʹ��fib2(100) 
# ������������ʹ��
fibo.fib(100)
fiboNumber.fib(100)
fib(100)
print(fib2(200))
```

һ�㾡������`from fibo import *`������ʽ�����룬��Ϊ���ģ������������벻��Ҫ���ݣ����ܲ��������ռ���صĴ���
������ʱ������Ҳ�����Ӧ��ģ������������:
```
ImportError: No module named names
```
��Python�У�ģ������ʱ����·��˳��Ϊ:��������ͬ��������ģ��( built-in module )��û�ҵ�ʱ������sys.path�а�����·����sys.path·�����ݲ�ͬϵͳ���в������Windows��Ϊ:

```
import sys
print(sys.path)
```

�������Ϊ:
```
>python path.py
['E:\\ds', 'C:\\WINDOWS\\SYSTEM32\\python27.zip', 'C:\\Python27\\DLLs', 'C:\\Python27\\lib', 'C:\\Python27\\lib\\plat-win', 'C:\\Python27\\lib\\lib-tk', 'C:\\Python27', 'C:\\Python27\\lib\\site-packages']
```

�����������·���У���һ�����ǵ�ǰ���нű����ڵ�·����
����ͨ����sys.path������Զ���ģ�������·����

������ģ���ʱ�����ǿ���ʹ������[����������](https://stackoverflow.com/questions/32003472/difference-between-locals-and-globals-and-dir-in-python)�����鿴�����ռ��е����������

- dir dir(moduleName)�������ڻ�ȡmoduleNameģ���ж�������֣��������ݲ���ʱ�����ص�ǰģ�鶨������֡�
- globals �������ڻ�ȡ��ǰģ���ȫ�ֿռ��е����֣�����ں����ڲ������򷵻���������������ڵ�ģ���ȫ�ֿռ����֣�������������������õ�ģ���ȫ�ֿռ����֡�
- locals ���ؾֲ��ռ������

����ʹ��������������

```
>>> import fibo,sys
>>> dir(fibo)
['__builtins__', '__doc__', '__file__', '__name__', '__package__', 'fib', 'fib2']
>>> dir()
['__builtins__', '__doc__', '__name__', '__package__', 'fibo', 'sys']
>>> dir(sys)
['__displayhook__', '__doc__', '__excepthook__', '__name__', '__package__', '__stderr__', '__stdin__', '__stdout__', '_clear_type_cache', '_current_frames', '_getframe', '_mercurial', 'api_version', 'argv', 'builtin_module_names', 'byteorder', 'call_tracing', 'callstats', 'copyright', 'displayhook', 'dllhandle', 'dont_write_bytecode', 'exc_clear', 'exc_info', 'exc_type', 'excepthook', 'exec_prefix', 'executable', 'exit', 'flags', 'float_info', 'float_repr_style', 'getcheckinterval', 'getdefaultencoding', 'getfilesystemencoding', 'getprofile', 'getrecursionlimit', 'getrefcount', 'getsizeof', 'gettrace', 'getwindowsversion', 'hexversion', 'long_info', 'maxint', 'maxsize', 'maxunicode', 'meta_path', 'modules', 'path', 'path_hooks', 'path_importer_cache', 'platform', 'prefix', 'ps1', 'ps2', 'py3kwarning', 'setcheckinterval', 'setprofile', 'setrecursionlimit', 'settrace', 'stderr', 'stdin', 'stdout', 'subversion', 'version', 'version_info', 'warnoptions', 'winver']
>>> locals()
{'__builtins__': <module '__builtin__' (built-in)>, '__package__': None, 'sys': <module 'sys' (built-in)>, 'fibo': <module 'fibo' from 'fibo.pyc'>, '__name__': '__main__', '__doc__': None}
>>> globals()
{'__builtins__': <module '__builtin__' (built-in)>, '__package__': None, 'sys': <module 'sys' (built-in)>, 'fibo': <module 'fibo' from 'fibo.pyc'>, '__name__': '__main__', '__doc__': None}
>>> _version = 1.0
>>> def show_version():
...     localV="beta"
...     print(locals())   # �����ڲ�ʹ��locals
...     print(globals())  # �����ڲ�ʹ��globals
...
>>> show_version()
{'localV': 'beta'}
{'show_version': <function show_version at 0x01DBF730>, '__builtins__': <module '__builtin__' (built-in)>, '_version': 1.0, '__package__': None, 'sys': <module 'sys' (built-in)>, 'fibo': <module 'fibo' from 'fibo.pyc'>, '__name__': '__main__', '__doc__': None}
```

###3)������ɺ�ʹ�ù���
��(**packages**)����һ�����Ź�ͬĿ�ĵ�ģ����ɵĵ�Ԫ������һ��������Ƶ�ĳ��򣬿��ܰ����İ����£�

```
sound/                          Top-level package �����
      __init__.py               Initialize the sound package  # ���ı�־�ļ�
      formats/                  Subpackage for file format conversions
              __init__.py
              wavread.py
              wavwrite.py
              aiffread.py
              aiffwrite.py
              auread.py
              auwrite.py
              ...
      effects/                  Subpackage for sound effects
              __init__.py
              echo.py
              surround.py
              reverse.py
              ...
      filters/                  Subpackage for filters
              __init__.py
              equalizer.py
              vocoder.py
              karaoke.py
              ...
```

������ṹ��`__init__.py`�ļ���Python��������־һ���ļ�Ŀ¼�ǰ�(Python3.3�Ժ���Ҫ����ļ���)��
���������½�һ��Ŀ¼fibLib������������ǵ�fibo.py��Ȼ����fiblibͬ��Ŀ¼���½�һ��packTest.py����:

```python
from fibolib.fibo import fib
fib(1000)
```
ִ�г��򽫻����:

```
Traceback (most recent call last):
  File "packTest.py", line 1, in <module>
    from fibolib.fibo import fib
ImportError: No module named fibolib.fibo
```
������Ϊ��Python2.x������Ҫ����`__init__.py`�ļ������������½�һ���յ�`__init__.py`�ļ�������ִ�г��������:

```
>python packTest.py
1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987
```
`__init__.py`�ļ�Ҳ���Լ�����������صĴ��룬���ﲻ��������

###4)���İ�װ
����ʹ��Python�Դ��İ�������pip�����ǰ��������
Windows����Python��װĿ¼�ģ�����C:\Python27\Scripts�����ҵ��������
ʹ��pip���ǿ��԰�װ��ж�غ��������������������������ǰ�װ��ж��һ��Python ������ƴд���Ŀ�pycodestyle������ͼ��ʾ:

![���İ�װ��ж��](http://img.blog.csdn.net/20170918130929067?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvd2FuZ2RpbmdxaWFvaXQ=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

## �쳣����
�ڳ�����������¿���ʹ���쳣������ʹ���
###1)�쳣������׳�

����ͨ��һ�������쳣��˵���쳣�Ĳ���

```python
# zerodivision.py

def input_numbers():

    a = float(input("Enter first number:"))
    b = float(input("Enter second number:"))
    return a, b

x, y = input_numbers()  # ��������

while True:
    
    try:
        print("{0} / {1} is {2}".format(x, y, x/y))
        break
    
    except ZeroDivisionError:  # �����0�쳣
        
       print("Cannot divide by zero")
       x, y = input_numbers()
```

Pythonʹ��try...except�����Ľṹ������ʹ����쳣��

����Ľű�����ʱ���:

```
>python zerodivision.py
Enter first number:5
Enter second number:0
Cannot divide by zero
Enter first number:10
Enter second number:2
10.0 / 2.0 is 5.0
```

�������쳣��������һ��ʼ��ִ�еĲ��֣�finally��
��������ļ������������Ƿ����쳣�������ǹر��ļ���

```python
# cleanup.py

f = None

try:
   f = open('data.txt', 'r')
   contents = f.readlines()
   
   for line in contents:
      print(line.rstrip())
      
except IOError:
   print('Error opening file')
   
finally:  # �����쳣������� ����ִ��
   if f:
      f.close()
```

��ʱ��������Ȼ�������쳣�������������ش�������쳣������ֻ��Ϊ�˶��쳣������־��¼ʱ��
���ʱ�����ǿ��԰��쳣�����׳��������ϲ��߼�����

```python
logger = logging.getLogger(__name__)

try:
    do_something_in_app_that_breaks_easily()
except AppError as error:
    logger.error(error)   # Ϊ����־��¼
    raise                 # just this!  ���������� �ܹ��ٴ��׳��쳣
    # raise AppError      # Don't do this, you'll lose the stack trace!  ��Ҫ�׳����ָ���쳣
```

raise���׳��쳣ʱ�����Ը��쳣���ϲ���������:

```python
raise ValueError('A very specific bad thing happened', 'foo', 'bar', 'baz') 
```

###2)�쳣���Ͷ�ջ��ӡ

�쳣�Ǿ��м̳й�ϵ�Ĳ�νṹ��,�����г����ּ̳й�ϵ:

```
BaseException
 +-- SystemExit
 +-- KeyboardInterrupt
 +-- GeneratorExit
 +-- Exception
      +-- StandardError
      |    +-- BufferError
      |    +-- ArithmeticError
      |    +-- AssertionError
      |    +-- AttributeError
      |    +-- EnvironmentError
      |    |    +-- IOError
      |    |    +-- OSError
      |    +-- ImportError
      |    +-- LookupError
      |    |    +-- IndexError
      |    |    +-- KeyError
      |    +-- RuntimeError
      |    |    +-- NotImplementedError
      |    +-- SyntaxError
      |    +-- SystemError
      |    +-- TypeError
      |    +-- ValueError
      +-- Warning
           +-- DeprecationWarning
           +-- SyntaxWarning
```
���Խ���[ getclasstree()����](http://docs.python.org/library/inspect.html#inspect.getclasstree)��[��ӡ����֮��ļ̳й�ϵ](https://stackoverflow.com/questions/18296653/print-the-python-exception-error-hierarchy)��
�����ڲ����쳣��ʱ�򣬾��������������쳣��
Ҳ��������ȷ��������쳣��Ϣ���Ǹ������࣬���������ĸ��ࡣ
�׳�������쳣:
```python
raise ValueError('A very specific bad thing happened')
```
Ҫ���׳�����:

```python
raise Exception('I know Python!') # don't, if you catch, likely to hide bugs.
```
�����ʡ�

���׳��쳣ʱ�����ǿ���ʹ��tracebackģ��ķ������������һ����ӡ���쳣�Ķ�ջ������:

```python
# stacktrace_ex.py

import traceback

def myfun():
    
    def myfun2():

        try:
            3 / 0

        except ZeroDivisionError as e:

            print(e)
            print("Class:", e.__class__)
            
            for line in traceback.format_stack():
                print(line.strip())
        
    myfun2()
        
def test():
    myfun()
        
test() 
```

ִ��ʱ���:

```
>python stacktrace_ex.py
integer division or modulo by zero
('Class:', <type 'exceptions.ZeroDivisionError'>)
File "stacktrace_ex.py", line 28, in <module>
    test()
File "stacktrace_ex.py", line 26, in test
    myfun()
File "stacktrace_ex.py", line 22, in myfun
    myfun2()
File "stacktrace_ex.py", line 19, in myfun2
    for line in traceback.format_stack():
```

###3) �Զ����쳣

PythonҲ֧���Զ����쳣���Զ�����쳣��Ҫ�̳���Exception�࣬����:

```python
# user_defined.py

class BFoundEx(Exception):
    
   def __init__(self, value):
       self.par = value
   
   def __str__(self):
       return "BFoundEx: b character found at position {0}".format(self.par)
       
string = "There are beautiful trees in the forest."

pos = 0

for i in string:
    
    try:
    
        if i == 'b':
            raise BFoundEx(pos)
        pos = pos + 1
    
    except BFoundEx as e:
        print(e)
```

ִ�����:

```
>python user_defined.py
BFoundEx: b character found at position 10
```

�����쳣��ʹ�ã�Ҳ��һ����ԭ�򣬾�����Բο�[SO](https://stackoverflow.com/questions/2052390/manually-raising-throwing-an-exception-in-python)��

## ��дPythonic�Ĵ���

###1)������д����

�������ϰ����д�����Ĵ��룬ͨ����ࡢ���Ķ���ǿ�����������Լ�������Ҳ�����Ժ�ά����
��дPython�����ʱ��Ҳ��һ���ķ��ָ��������һ�������б��д���4��Ԫ�ص�����:

```python
# Filter elements greater than 4
a = [3, 4, 5]
b = []
for i in a:
    if i > 4:
        b.append(i)
```

����ķ�������Ա�:

```python
a = [3, 4, 5]
b = [i for i in a if i > 4]  # ʹ��comprehension
# ����:
b = filter(lambda x: x > 4, a) # ʹ�����ú���filter
```

��Ȼ�ڶ��ַ�ʽ����������ࡣ

������б���ÿ��Ԫ�ؽ�������3�Ĳ�����

```python
a = [3, 4, 5]
for i in range(len(a)):
    a[i] += 3
```

������Ĵ���Ƚ�:

```python
a = [3, 4, 5]
a = [i + 3 for i in a]
# Or:
a = map(lambda i: i + 3, a)
```

��Ȼ�ڶ��ַ�ʽ����ࡣ

���и�������Ӻ������ķ���飬���Բο�[Code Style](http://docs.python-guide.org/en/latest/writing/style/#code-style)��

###2)�������鹤��

���԰�װpycodestyle��autopep8����������鹤�ߣ����������fibo.py��ʹ��pycodestyle���߼��ʱ������������:

```
>pycodestyle fibo.py
fibo.py:3:1: E302 expected 2 blank lines, found 1
fibo.py:9:1: E302 expected 2 blank lines, found 1
fibo.py:15:18: W292 no newline at end of file
```

## �ο�����

- [Modules](http://zetcode.com/lang/python/modules/)
- [Modules](https://docs.python.org/2/tutorial/modules.html)
- [Python Modules](https://www.tutorialspoint.com/python/python_modules.htm)
- [Packages in Python](http://zetcode.com/lang/python/packages/)
- [Exceptions in Python](http://zetcode.com/lang/python/exceptions/)
- [Manually raising (throwing) an exception in Python](https://stackoverflow.com/questions/2052390/manually-raising-throwing-an-exception-in-python)
- [Code Style](http://docs.python-guide.org/en/latest/writing/style/#code-style)
- [How to use Pip in Python](http://www.pythonforbeginners.com/basics/python-pip-usage/)
- [Whats the difference between a module and a library in Python?](https://stackoverflow.com/questions/19198166/whats-the-difference-between-a-module-and-a-library-in-python/19198380#19198380)
