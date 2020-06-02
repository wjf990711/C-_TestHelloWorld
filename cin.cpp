#include <iostream>;
using namespace std;

class student3
{
	public:

		int test_3()
		{
			//整型变量赋值(浮点型，字符型，字符串型，布尔型同理)
			double b = 0;
			double c = 0;
			cout << "请给整型被除数b赋值：" << endl;
			cin >> b;
			cout << "b = " << b << endl;
			cout << "请给整型除数c赋值：" << endl;
			cin >> c;
			cout << "c = " << c << endl;
			cout << "b / c = " << b / c << endl;


			return 0;
		}
};