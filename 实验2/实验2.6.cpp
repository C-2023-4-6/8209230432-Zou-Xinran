#include<iostream>
using namespace std;
//取大函数
int max(int x, int y)
{
	int z;
	z = (x > y) ? x : y;
	return z;
}
int main()
{
	//定义变量
	int a, b,m=1,n,num1,num2;
	//提示输入正整数
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	//用while循环求最大公因数
	while (a >= m && b >= m)
	{
		if (a%m==0 && b%m==0)
		{
			num1 = m;
		}
		m++;
	}
	//求a，b中的最大值
	n = max(a, b);
	//for循环求最小公倍数
	for (num2=n;;num2++)
{
	if (num2 % a == 0 && num2 % b == 0)
	{
		break;
	}
}
	cout << a << "和" << b << "的最大公因数为：" << num1 << endl;
	cout << a << "和" << b << "的最小公倍数为：" << num2 << endl;
	return 0;
}