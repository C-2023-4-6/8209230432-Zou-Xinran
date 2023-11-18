#include<iostream>
using namespace std;
int main()
{
	//定义边长对应的变量
	int a, b, c;
	//提示输入三边长
	cout << "请输入三角形的边长" << endl;
	cin >> a>>b>>c;
	//判断是否能构成三角形
	if ((a + b) > c && (a + c) >> b && (b + c) > a)
	{
		//若能构成三角形，输出周长
		cout << "该三角形的周长为：" << a + b + c << endl;
		//判断是否为等腰三角形
		if(a==b||a==c||b==c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "你输入的边长无法构成三角形" << endl;
	}
	return 0;
}