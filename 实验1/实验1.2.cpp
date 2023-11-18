#include<iostream>
using namespace std;
int main()
{
	//定义圆周率常量
	const double p = 3.14;
	//定义变量
	double r, h,v;
	//提示键盘输入变量的值
	cout << "请输入圆锥的底面半径和高：" << endl;
	cin >> r >> h;
	//计算体积
	v = p * r * r * h/3;
	//输出
	cout << "这个圆锥的体积是：" << v << endl;
	return 0;
}