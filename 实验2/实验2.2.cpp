#include<iostream>
using namespace std;
//定义函数cal方便使用
double cal(double x)
{
	double y;
	if (x > 0 && x < 1)
	{
		y = 3 - (2*x);
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
	}
	else
	{
		y = x * x;
	}
	return y;
}
int main()
{
	cout << "x=0.2时y的值为：" << cal(0.2) << endl;
	cout << "x=1时y的值为：" << cal(1) << endl;
	cout << "x=5时y的值为：" << cal(5) << endl;
	cout << "x=0时y的值为：" << cal(0) << endl;
	return 0;
}