#include <iostream>;
using namespace std;

class student5
{
	public:
		int test_5()
		{
			float pig_1 = 20.2;
			float pig_2 = 22.01;
			float pig_3 = 22.23;
			float temp = pig_1;
			if (pig_1 < pig_2)
			{
				temp = pig_2;
				if (pig_2 < pig_3)
				{
					temp = pig_3;
				}
			}
			cout << "最重的猪为：" << temp << endl;

			return 0;
		}
};