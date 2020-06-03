#include <iostream>
#include "sizeof.cpp";
#include "zhuanyi.cpp";
//#include "cin.cpp";
//#include "if.cpp";
#include "3pigs.cpp";
#include "example[].cpp"
#include "caishuzi.cpp"
#include <string>;
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
	char ch = 'A';
	string str = "ojbk";
	const int month = 12;	//const修饰的变量被称为常量

	a = 10;

	//cout << Day << "天" << endl;
	//cout << month << "月" << endl;


	cout << "a = " << a << endl;

	cout << str << endl;

	cout << "A对应的ASCII编码为："<< (int)ch << endl;

	class student1 t1;
	t1.test_1();

	class student2 t2;
	t2.test_2();

	//class student3 t3;
	//t3.test_3();

	//class student4 t4;
	//t4.test_4();

	class student5 t5;
	t5.test_5();

	class student6 t6;
	t6.test_6();

	class student7 t7;
	t7.test_7();



	system("pause");

	return 0;
}