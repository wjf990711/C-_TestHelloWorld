#include <iostream>;
using namespace std;

class student6
{
	public:
		int test_6()
		{
			//三目运算符，C++中三目运算符返回的是变量，可以继续赋值
			//int a = 4;
			//int b = 6;
			//int c = 0;

			//c = (a > b ? a : b);
			//(a < b ? a : b) = 100;
			//cout << c << endl;
			//cout << a << endl;

			//switch语句
			//给电影打分
			//cout << "请打分(0-10)：" << endl;
			//int score = 0;
			//cin >> score;
			//cout << "分数为：" << score << endl;
			//switch (score)
			//{
			//case 10:
			//	cout << "满分电影" << endl;
			//	break;
			//case 9:
			//	cout << "经典电影" << endl;
			//	break;
			//case 8:
			//	cout << "不错的电影" << endl;
			//	break;
			//case 7:
			//	cout << "不错的电影" << endl;
			//	break;
			//case 6:
			//	cout << "不错的电影" << endl;
			//	break;
			//case 5:
			//	cout << "不错的电影" << endl;
			//	break;
			//default:
			//	cout << "这电影不行" << endl;
			//}

			//while循环
			//int a = 6;
			//int b = 0;
			//while (b < a)
			//{
			//	b++;
			//	cout << b << endl;
			//}

			//do...while语句
			//int num = 0;
			//do {
			//	cout << num << endl;
			//	num++;
			//}while (num < 10);

			//水仙花数(个位的三次方+十位的三次方+百位的三次方=这个数本身)
			//int num = 100;
			//do {
			//	int a = 0;
			//	int b = 0;
			//	int c = 0;

			//	a = num % 10;
			//	b = num / 10 % 10;
			//	c = num / 100;

			//	if (a*a*a + b*b*b + c*c*c == num)
			//	{
			//		cout << "水仙花数：" << num << endl;
			//	}

			//	num++;
			//} while (num < 1000);

			//for循环

			//敲桌子
			//int num = 1;
			//int i;
			//for (i = 1; i <= 100; i++)
			//{
			//	if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
			//	{
			//		cout << "敲桌子" << endl;
			//	}
			//	else
			//	{
			//		cout << num << endl;
			//	}
			//	num++;
			//}

			//嵌套循环
			//int i,k;
			//for (i = 0; i < 10; i++)
			//{
			//	for (k = 0; k < 10; k++)
			//	{
			//		cout << "*";
			//	}
			//	cout << endl;
			//}

			//乘法口诀表
			//int sum;
			//int k;	//行
			//int i;	//列
			//for (int p = 1; p <= 1; p++)
			//{
			//	for (i = 1; i <= 9; i++)
			//	{
			//		for (k = 1; k <= i; k++)
			//		{
			//			sum = i * k;
			//			cout << i << "*" << k  << "=" << sum << " ";
			//		}
			//		cout << endl;
			//		k++;
			//	}
			//	i++;
			//}

			//continue语句
			//for (int i = 0; i <= 100; i++)
			//{
			//	//奇数输出，偶数不输出
			//	if (i % 2 == 0)
			//	{
			//		continue;
			//	}
			//	cout << i << " ";
			//}

			//数组案例-五只小猪称体重
			//int pigs[5] = { 300,350,200,400,250 };
			//int temp = 0;
			//for (int i = 0; i < pigs[i]; i++)
			//{
			//	if (temp < pigs[i])
			//	{
			//		temp = pigs[i];
			//	}
			//}
			//cout << "最重的猪是：" << temp << endl;

			//数组案例-数组的倒置
			//int arr[5] = { 1,3,2,5,4 };
			//int i = 0;
			//int k = 4;
			//cout << "原始数组为：";
			//for (int u = 0; u < 5; u++)
			//{
			//	cout << arr[u] << " ";
			//}
			//cout << endl;
			//while(i < k)
			//{
			//	int temp;
			//	temp = arr[i];
			//	arr[i] = arr[k];
			//	arr[k] = temp;
			//	k--;
			//	i++;
			//}
			//cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4];

			return 0;
		}
};