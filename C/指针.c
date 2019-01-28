指针是什么？一种数据类型，就和int char一样，可以是变量/常量。指针特殊在于只存放内存地址，指向某个地址开始的一片内存区域，就像网址指向网站一样。
各种操作就是在指针之间跳来跳去
指针的意义？不局限于使用变量访问内存，拓展操作可能性
指针的场景？指向/构成数据，指向函数/函数返回值/函数参数。指针并非编程必须的概念，但对于C是必需的（C++引用/迭代器），适用驱动，病毒，交互场景。
c中指针几乎是万能的，各种数据和函数都可以使用指针。
指针的运算:
1.比较大小> == <,返回bool类型
2.指针变量相减，表示之间可以插入几个T（移位次数）
3.指针加减整数
4.自增自减（数组名是指针常量，所以不可++ --操作）
5.使用下标运算符[]进行运算,
6.void *p，任何类型的指针都可对void指针赋值/初始化，空指针也可以强制转为任何类型，空指针本身不能运算
同一条语句中，多个指针运算的规则很复杂，根本没规律啊
int a[] = { 1,2,3,4,5 };
int *p = a;
cout << *p-- << *++p << *p++ << *++p << *p++<< *p << endl;
cout << p[-1] << *p << endl;
cout << *p-- << *p-- << *p-- << *p-- << endl;
cout << *++p << *++p << *++p << *++p << endl;
543414
34
1234
4444

指针的例子： 指向/构成数据,指向函数/函数返回值/函数参数：
字符串
char s[20]="ABCDE";
char *p=s;
链表
struct node{
	int a;
	struct node * next;
}
动态数据 malloc
int *p=(int *)malloc(sizeof(int));	//malloc返回空指针，可强制转为任意其他类型。空指针作为函数参数也很好用，可匹配多种函数类型

函数指针：类型名（*指针变量名）（参数类型1，参数类型2。。。）；
int(*pf)(int,char);
可以用一个原型匹配的函数的名字给一个函数指针赋值，要通过函数指针调用指向的函数写法为函数指针名（实参表）；
函数指针的意义是支持任意类型
void qsort(void * base, int nelem, insigned int width, int(*pfCompare)(const void *, const void *));
