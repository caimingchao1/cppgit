/*
3����һ���ṹ�壬д���Լ������Ժͷ�����Ȼ���ӡ����
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
		cout << "name��" << p <<endl << "age��" << age << endl;
	}
};
int main()
{
	_str tmp;
	tmp.name = "������";
	tmp.age = 25;
	tmp.printf(tmp.name, tmp.age);
	system("pause");
	return 0;
}