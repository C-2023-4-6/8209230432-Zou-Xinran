#include<iostream>
using namespace std;
int main()
{
	//定义变量
	int a, b;
	char n;
	cin >> a >> b;
	cin >> n;
	while (b != 0||a!=0)
	{
		//判断运算符并进行计算
		switch (n)
		{
		case '+':
			cout << a << "+" << b << "=" << a + b << endl;
			break;
		case '-':
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		case '*':
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		case '/':
			//判断除数是否为0
			if (b != 0)
			{
				cout << a << "/" << b << "=" << a / b << endl;
			}
			else
				cout << "非法运算" << endl;
			break;
		case '%':
			cout << a << "%" << b << "=" << a % b << endl;
			break;
		default:
			cout << "非法运算" << endl;
		}
		//进行下一次计算
		cin >> a >> b;
		cin >> n;
	}
	return 0;
}