#include<iostream>
using namespace std;
//ȡ����
int max(int x, int y)
{
	int z;
	z = (x > y) ? x : y;
	return z;
}
int main()
{
	//�������
	int a, b,m=1,n,num1,num2;
	//��ʾ����������
	cout << "������������������" << endl;
	cin >> a >> b;
	//��whileѭ�����������
	while (a >= m && b >= m)
	{
		if (a%m==0 && b%m==0)
		{
			num1 = m;
		}
		m++;
	}
	//��a��b�е����ֵ
	n = max(a, b);
	//forѭ������С������
	for (num2=n;;num2++)
{
	if (num2 % a == 0 && num2 % b == 0)
	{
		break;
	}
}
	cout << a << "��" << b << "���������Ϊ��" << num1 << endl;
	cout << a << "��" << b << "����С������Ϊ��" << num2 << endl;
	return 0;
}