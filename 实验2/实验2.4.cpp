#include<iostream>
using namespace std;
int main()
{
	//�������
	int a, b;
	char n;
	cin >> a >> b;
	cin >> n;
	while (b != 0||a!=0)
	{
		//�ж�����������м���
		switch (n)
		{
		case '+':
			cout << a << "+" << b << "=" << a + b << endl;
			break;
		case '-':
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		case '*':
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		case '/':
			//�жϳ����Ƿ�Ϊ0
			if (b != 0)
			{
				cout << a << "/" << b << "=" << a / b << endl;
			}
			else
				cout << "�Ƿ�����" << endl;
			break;
		case '%':
			cout << a << "%" << b << "=" << a % b << endl;
			break;
		default:
			cout << "�Ƿ�����" << endl;
		}
		//������һ�μ���
		cin >> a >> b;
		cin >> n;
	}
	return 0;
}