#include<iostream>
using namespace std;
int main()
{
	//�������
	int num, sum=0, day=1;
	float money;
	//����forѭ��ͳ������
	for (int num= 2; num <= 100; num *= 2)
	{
		sum += num;
		day++;
	}
	//����ƽ��ֵ�����
	money = 0.8 * sum / (day-1);
	cout <<"ƽ��ÿ�컨��Ϊ��"<< money << endl;
	return 0;
}