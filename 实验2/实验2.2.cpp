#include<iostream>
using namespace std;
//���庯��cal����ʹ��
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
	cout << "x=0.2ʱy��ֵΪ��" << cal(0.2) << endl;
	cout << "x=1ʱy��ֵΪ��" << cal(1) << endl;
	cout << "x=5ʱy��ֵΪ��" << cal(5) << endl;
	cout << "x=0ʱy��ֵΪ��" << cal(0) << endl;
	return 0;
}