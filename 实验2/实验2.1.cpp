#include<iostream>
using namespace std;
int main()
{
	//�������n��N
	char n,N;
	//��ʾ������ĸ
	cout << "������һ����ĸ��" << endl;
	cin >> n;
	//�����жϣ�n�Ƿ�Ϊ��д
	if (n >=97 && n <= 122)
	{
		//����ĸn�Ĵ�д��ֵ��N�����
		char N = n-32;
		cout <<"����ת��Ϊ��дΪ��"<< N << endl;
	}
	else
	{
		//��nΪ��д����������Ԫ�ص�ASCII��ֵ
		cout << n + 1 << endl;
		return 0;
	}
}