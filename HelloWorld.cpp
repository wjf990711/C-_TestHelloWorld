#include <iostream>
#include "sizeof.cpp";
using namespace std;

//常量定义方式1
//#define 宏常量
//常量定义方式2
//const修饰的变量
//在给变量起名时不要使用C++的关键字

#define Day 7

int main()
{
	int a;
	const int month = 12;	//const修饰的变量被称为常量

	a = 10;

	//cout << Day << "天" << endl;
	//cout << month << "月" << endl;


	cout << "a = " << a << endl;

	class student t1;
	t1.test_1();


	system("pause");

	return 0;
}