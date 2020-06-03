#include <iostream>;
#include <ctime>;
using namespace std;

class student7
{
public:
	int test_7()
	{
		//用当前时间来更新随机种子值，需要头文件#include <ctime>
		srand(time(0));
		//生成1-10随机数
		int r_num = rand() % 10 +1;
		int u_num;
		cout << "请猜测1-10随机数：" << endl;
		cin >> u_num;
		while (u_num != r_num)
		{
			cout << "猜错了哦,请继续猜测：" << endl;
			cin >> u_num;
		}
		cout << "恭喜猜对了" << endl;

		return 0;
	}
};