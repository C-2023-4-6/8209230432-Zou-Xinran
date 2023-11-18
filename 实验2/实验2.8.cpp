#include<iostream>
using namespace std;
int main()
{
	//定义变量
	double a, x1, x2, t;
	//提示输入数字
	cout << "请输入一个数：" << endl;
	cin >> a;
	x1 = a;
	//a<0时
	if (a < 0)
	{
		cout << "错误" << endl;
	}
	//a=0时
	else if (a == 0)
	{
		cout << "这个数的平方根为0" << endl;
	}
	else
		//a>0时，运用do...while循环迭代出平方根
	{
		do
		{
			x2 = (x1 + a / x1) / 2;
			//将x1的值替换为计算出的x2，进入下一次循环
			t = x1;
			x1 = x2;
			x2 = t;

		} while (x2 - x1 > 1 / 100000 || x2 - x1 < -1 / 100000);
		//输出结果
		cout << "这个数的平方根为：" << x1 << endl;
	}
	return 0;
}