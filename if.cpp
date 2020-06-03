#include <iostream>;
using namespace std;

class student4
{
	public:
		
		int test_4()
		{
			//多行if
			//int score;
			//cout << "请输入你的分数：" << endl;
			//cin >> score;
			//cout << "你输入的分数为：" << score << endl;
			//if (score > 600)
			//{
			//	cout << "恭喜你考上大学" << endl;
			//}
			//else
			//{
			//	cout << "很遗憾，你落榜了" << endl;
			//}

			//多条件和嵌套if
			int score;
			cout << "请输入你的分数：" << endl;
			cin >> score;
			cout << "你输入的分数为：" << score << endl;
			if (score > 600)
			{
				cout << "恭喜你考上重点大学" << endl;
				if (score > 700)
				{
					cout << "恭喜你考上北京大学" << endl;
				}
				else if(score > 650)
				{
					cout << "恭喜你考上清华大学" << endl;
				}
				else
				{
					cout << "恭喜你考上人民大学" << endl;
				}
			}
			else if (score >= 400)
			{
				cout << "恭喜你考上普通大学" << endl;
			}
			else if(score >= 0)
			{
				cout << "很遗憾你落榜了" << endl;
			}
			else
			{
				cout << "输入错误" << endl;
			}


			return 0;
		}
};