#include<iostream>
using namespace std;
int main()
{
	//�������
	double a, x1, x2, t;
	//��ʾ��������
	cout << "������һ������" << endl;
	cin >> a;
	x1 = a;
	//a<0ʱ
	if (a < 0)
	{
		cout << "����" << endl;
	}
	//a=0ʱ
	else if (a == 0)
	{
		cout << "�������ƽ����Ϊ0" << endl;
	}
	else
		//a>0ʱ������do...whileѭ��������ƽ����
	{
		do
		{
			x2 = (x1 + a / x1) / 2;
			//��x1��ֵ�滻Ϊ�������x2��������һ��ѭ��
			t = x1;
			x1 = x2;
			x2 = t;

		} while (x2 - x1 > 1 / 100000 || x2 - x1 < -1 / 100000);
		//������
		cout << "�������ƽ����Ϊ��" << x1 << endl;
	}
	return 0;
}