#include<iostream>
using namespace std;
int main()
{
	//����߳���Ӧ�ı���
	int a, b, c;
	//��ʾ�������߳�
	cout << "�����������εı߳�" << endl;
	cin >> a>>b>>c;
	//�ж��Ƿ��ܹ���������
	if ((a + b) > c && (a + c) >> b && (b + c) > a)
	{
		//���ܹ��������Σ�����ܳ�
		cout << "�������ε��ܳ�Ϊ��" << a + b + c << endl;
		//�ж��Ƿ�Ϊ����������
		if(a==b||a==c||b==c)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else
	{
		cout << "������ı߳��޷�����������" << endl;
	}
	return 0;
}