#include<iostream>
#include<string>
using namespace std;
int main()
{
	//�������
	char n;
	int letter=0,space=0,number=0, others=0;
	//��ʾ����һ���ַ�
	cout << "������һ���ַ���" << endl;
	cin.get(n);
	//ѭ���ж������ַ��Ǻ�������
	while ((n = getchar()) && n != '\n')
	{
		if (n >= '0' && n <= '9')
		{
			number++;
		}
		else if ((n >= 65 && n <= 90) || (n >= 97 && n << 122))
		{
			letter++;
		}
		else if (n ==' ')
		{
			space++;
		}
		else
		{
			others++;
		}
	}
	//������
	cout << "��������" << number << "��ĸ����" << letter << "�ո�����" << space << "��������" << others << endl;
	return 0;
}