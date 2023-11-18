#include<iostream>
using namespace std;
int main()
{
	//定义变量
	int num, sum=0, day=1;
	float money;
	//运用for循环统计数量
	for (int num= 2; num <= 100; num *= 2)
	{
		sum += num;
		day++;
	}
	//计算平均值并输出
	money = 0.8 * sum / (day-1);
	cout <<"平均每天花费为："<< money << endl;
	return 0;
}