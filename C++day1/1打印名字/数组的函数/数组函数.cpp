/*
7写一个打印数组的函数，一个排序数组的函数，用引用的方法传递地址
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void ProduceNum(int(&arr)[20])
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintFunc(int(&arr)[20])
{
	for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
//冒泡
void SortFunc(int(&arr)[20])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 19 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int m = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = m;
			}
		}
	}
}
int main()
{
	int arr[20] = {0};
	ProduceNum(arr);
	PrintFunc(arr);
	SortFunc(arr);
	PrintFunc(arr);
	system("pause");
	return 0;
}