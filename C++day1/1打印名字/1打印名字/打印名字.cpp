/*
1在终端输入自己的名字，打印出来
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


int  main()
{
	cout << "输入自己的名字：" << endl;
	string name;
	cin >> name;
	cout << name << endl;
	system("pause");
	return 0;
}