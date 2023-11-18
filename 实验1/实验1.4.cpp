#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in unsigned int type:" << testUnint<< endl;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; 
	//按八进制输出
	cout << "testUnint按八进制输出:" << oct << testUnint << endl;
	//重新定义一个实数
	double t = 3.14;
	//将其转化为整数
	cout << "将t转化为整数结果为：" << static_cast<int>(t) << endl;
	system("pause");
	return 0;
}