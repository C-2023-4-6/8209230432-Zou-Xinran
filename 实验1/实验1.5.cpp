#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//定义变量f,c
	double f, c;
	//提示输入一个华氏温度
	cout << "请输入一个华氏温度：" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "转化为摄氏温度是：" <<fixed<<setprecision(2)<<c<< endl;
	return 0;
}