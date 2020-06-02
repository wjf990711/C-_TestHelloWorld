#include <iostream>;
using namespace std;

class student
{
	public:

		int test_1()
		{
			short num1 = 10;
			cout << "short占用的内存空间为：" << sizeof(num1) << endl;

			return 0;
		}
};
