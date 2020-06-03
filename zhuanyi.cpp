#include <iostream>;
using namespace std;

class student2
{
	public:

		int test_2()
		{
			//换行转义符
			cout << "测试转义字符\n" << endl;
			cout << "换行了" << endl;
			//水平制表转义符(多行保持整齐)
			cout << "aaa\tHHHHHHH\n";
			cout << "aa\tHHHHHHH\n";
			cout << "aaaa\tHHHHHHH\n";


			return 0;
		}
};