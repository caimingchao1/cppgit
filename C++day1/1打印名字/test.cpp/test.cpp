/*
3定义一个结构体，写上自己的属性和方法，然后打印出来
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

struct _str
{
	char *name;
	int age;
	void printf(char *p, int age)
	{
		cout << "name：" << p <<endl << "age：" << age << endl;
	}
};
int main()
{
	_str tmp;
	tmp.name = "蔡明超";
	tmp.age = 25;
	tmp.printf(tmp.name, tmp.age);
	system("pause");
	return 0;
}