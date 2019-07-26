# 学习笔记

## 学习C++相关知识

### 一、已理解循环控制语句

1. for循环

```C++
#include<iostream >
using namespace std;
int main()
{
	int i ;
	for (i = 1; i <= 3;i++)
	{
		cout << "当前的值：" << i << endl;
		
	}
	return 0;
}
```

2. while循环

```C++
#include<iostream >
using namespace std;
int main()
{
	int i = 1;
	while (i <= 3)
	{
		cout << "当前的值：" << i << endl;
		i++;
	}
	return 0;
}
```

3. do-while循环
* do-while 与 while循环区别是：不管语句正确与否，do-while循环都会先执行一次

```C++
#include<iostream >
using namespace std;
int main()
{
	int i=1;
	do
	{
		cout << "当前的值：" << i << endl;
		i++;
	} while (i <= 3);
	return 0;
}
```

4. 循环嵌套

```C++
#include<iostream >
using namespace std;
int main()
{
	int i=1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = i; j <= 9; j++)
		{
			cout <<  j <<" ";
		}
		cout << endl;
	}
	return 0;
}
```

### 二、已理解条件语句

1. if语句
* 注意：条件测试是比较相等时，应该用两个等号

2. if语句嵌套

```C++
#include<iostream >
using namespace std;
#define Number 6
//const int Number = 6;
int main()
{
	int n;
	cout << "请输入1-10的整数找到猜想的数字：";
	do
	{
		cin >> n;
		if (n < Number)
		{
			cout << "数字低了，请再输入一次：";

		}
		else if (n> Number)
		{
			cout << "数字高了，请再输入一次：";

		}
		else
		{
			cout << "输入的数字正确：" << Number << endl;
		}
	} while (n != Number);
}
```

3. switch语句

```C++
char grade = ‘A’; 
switch(grade) 
{ 
case 'A' : cout << "很棒！" << endl; 
break; 
case ‘B' : cout << "做得好" << endl; 
break; 
case ‘C' : cout << "您通过了" << endl; 
break; 
case ‘D’ : cout << “还可以抢救下" << endl; 
break; 
default : cout << "无效的成绩" << endl; 
```


### 三、已理解break和continue

1. break：跳出整个循环
2. continue：跳出本次循环


## 学习Java相关知识

### 一、面向对象编程

* 对一个现实事物的具体抽象：属性+行为，属性可以称为“成员变量”，行为可以称为“成员方法”，由它们组成类，再用主函数调用这些类。所以，主函数main调用内容很简单。

1. 面向对象具有三大特征：封装性、继承性和多态性，而面向过程没有继承性和多态性，并且面向过程的封装只是封装功能，而面向对象可以封装数据和功能。所以面向对象优势更明显。

2. 一个经典的比喻：面向对象是盖浇饭、面向过程是蛋炒饭。盖浇饭的好处就是“菜”“饭”分离，从而提高了制作盖浇饭的灵活性。饭不满意就换饭，菜不满意换菜。用软件工程的专业术语就是“可维护性”比较好，“饭” 和“菜”的耦合度比较低。


### 二、对象和类的概念

1. 对象是具体的事物;类是对对象的抽象;

2. 类可以看成一类对象的模板，对象可以看成该类的一个具体实例。

3. 类是用于描述同一类型的对象的一个抽象概念，类中定义了这一类对象所应具有的共同的属性、方法。


### 三、构造器的重载和普通方法的重载

1. 构造器的重载

```Java
public bird() {
	System.out.println("构造方法");
}                                    // 两种构造器的重载

public bird(String s) {
	System.out.println("构造方法");
}
```

2. 普通方法的重载

```Java
public void fly() {
	System.out.println("fly");
}
public void fly(String s) { 
	System.out.println(s+"fly");           //三种普通方法的重载
}
public void fly(String s,String a) {
	 System.out.println(s+a);
}
```

3. 两种重载之后主函数的调用

```Java
public static void main (String[] args ) {
	bird bird=new bird("麻雀的翅膀","麻雀的脚","麻雀的五脏");
	bird.eat();
	bird.fly("wangzhaorui");
	bird.fly("wang","zhao");
	System.out.println(bird.chibang);
	
	}
```

### 四、this用法

1.  在程序中产生二义性之处，应使用this来指明当前对象;普通方法中，this总是指向调用该方法的对象。构造方法中，this总是指向正要初始化的对象。

　　
2. 使用this关键字调用重载的构造方法，避免相同的初始化代码。但只能在构造方法中用，并且必须位于构造方法的第一句。

　　
3. this不能用于static方法中。

```Java
public bird(String chi, String jiao, String wuzang) { 
//属性和局部变量重名，把局部变量赋给属性
	super();
	chibang = chi;
	this.jiao = jiao;
	this.wuzang = wuzang;//构造方法初始化属性，main函数调用属性
}
```

主函数调用属性
```Java
public static void main (String[] args ) {
	bird bird=new bird("麻雀的翅膀","麻雀的脚","麻雀的五脏");
	System.out.println(bird.chibang);
	
	}
```

