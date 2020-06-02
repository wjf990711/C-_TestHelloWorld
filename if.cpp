#include <iostream>;
using namespace std;

class student4
{
	public:
		//单行if
		int test_4()
		{
			int score;
			cout << "请输入分数：" << endl;
			cin >> score;
			cout << "你输入的分数为：" << score << endl;
			if (score > 600)
			{
				cout << "恭喜你考上大学" << endl;
			}
			else
			{
				cout << "很遗憾，你落榜了" << endl;
			}


			return 0;
		}
};