// Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int getIndexOfFlag(char *begin, char *end, char flag)
{
	//从begin到end中第一个：出现的位置
	char *p = begin;
	int index = -1;
	while (p != end + 1)
	{
		++index;
		if (*p == flag)
		{
			//字符得到匹配
			break;
		}//if
		++p;
	}//while

	return index;
}

void Test2()
{
	//第一行是 顶点数：弧度数 例如：（6:10)表示有6个顶点，10个弧
	//int vexnum   顶点个数  int arcnum  弧的个数，也就是我们图的边数
	//我们是用'：'分割的,我们借助库函数atoi
	//我们先得到我们的字符的真实长度
	int length = 0;
	string buf = "6:10";
	while (buf[length] != '\0')
	{
		++length;
	}//while
	int splitindex = getIndexOfFlag(&buf[0], &buf[length - 1], ':');
	//前面的是vecnum,后面的是arcnum
	char *vecc = new char[splitindex];
	for (int i = 0; i < splitindex; ++i)
		vecc[i] = buf[i];
	int vexnum = atoi(vecc);
	cout << vexnum << endl;
	char *arcc = new char[length - splitindex - 1];
	for (int i = 0; i < length - splitindex - 1; ++i)
		arcc[i] = buf[i + splitindex + 1];
	int arcnum = atoi(arcc);
	cout << arcnum << endl;
}

void Test3(char buf[], int length)
{
	string vexs[100];
	//第二行是我们的顶点向量，我们保存到string vexs[MAX_VERTEX_NUM]中
	//我们循环遍历，碰到一个：，我们就取一个，最后再取出来一个
	int k = 0;	//用来计数是第几个顶点
	char flag = ':';	//我们分隔的标准
	for (int j1 = 0, j2 = 0; j1 <= length; ++j1)
	{
		if (buf[j1] == flag)
		{
			std::string s(buf, j2, j1 - j2); //从buf下标为j2的字符开始，拷贝j1-j2个字符  
			vexs[k++] = s;
			j2 = j1 + 1;
		}//if
	}//for
}

void Test()
{
	std::string line = "6:10";
	char *begin = &line[0];
	char *end = &line[line.size()-1];
	char flag = ':';
	cout << getIndexOfFlag(begin, end, flag) << endl;
	//=================================
	char buf[17] = { 'v', '1', ':', 'v', '2', ':', 'v', '3', ':', 'v', '4', ':', 'v', '5', ':', 'v', '6' };
	int length = 17;
	Test3(buf, length);
}

void Test3()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int b[6];
	cout << sizeof(a) << endl;
	memcpy(b, &a, sizeof(a));
	for (int i = 0; i < 6; ++i)
	{
		cout << b[i] << "\t" << endl;
	}
}

void test4()
{
	long x = 19 / 5 * 2;
	cout << x << endl;
}

int foo()
{
	static int n = 0;
	return ++n;
}

void test5()
{
	for (int i = 0; i < 5; ++i)
		cout << foo() << endl;
}

struct DATA
{
	char c;
	int n;
};

void test6()
{
	DATA *p = new DATA[100];
	delete[] p;
	printf("%d", sizeof(DATA));
}

void test7()
{
	int a = 123;
	const int &b = a;
	a += b;
	cout << b << endl;
}

void test8()
{
	int n = 0;
	cout << n << endl;
}

void test9()
{
	int *p = new int;
	*p = 3;
}

void test10()
{
	int x = 0x30;
	printf("%d", x);
}

enum{RED, GREEN, BLUE, WHITE};

void test11()
{
	cout << BLUE << endl;
}

void test12()
{
	vector<long> x;
	vector<long>::iterator it = x.begin() + 2;
	x.resize(20);
	*it = 9;
	cout << x[0] << x[1] << x[2] << endl;
}

struct POINT
{
	int x;
	int y;
};

void createpoints(POINT *p, int nCount)
{
	if (nCount <= 0)
		p = nullptr;
	else
		p = new POINT[nCount];
}

void test13()
{
	POINT *p = nullptr;
	const int nCount = 64;
	createpoints(p, nCount);
	for (unsigned int i = 0; i <= nCount; ++i)
	{
		cout << "{" << p->x;
	}//for
}

class Test14
{
	friend void test14();
public:
	Test14(int index)
	{
		this->length = index;
		i = new int[index];
	}

	~Test14()
	{
		cout << "huishou" << endl;
		delete[] i;
	}
private:
	int *i;
	int length;
};

void test14()
{
	Test14 *t = new Test14(10);
	t->i[0] = 99;
	cout << t->i[0] << endl;
	delete t;
	int *a = new int(99);
	delete[] a;
}

void test15()
{
	int *k = new int[99];
	for (int i = 0; i < 99; ++i)
	{
		if (k[i] == NULL)
		cout << k[i] << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	//Test2();
	//Test();
	//Test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test10();
	//test11();
	//test12();test13();test14();
	test15();
	return 0;
}

