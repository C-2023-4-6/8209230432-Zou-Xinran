#include<iostream>
#include<string>
using namespace std;
int main()
{
	//定义变量
	char n;
	int letter=0,space=0,number=0, others=0;
	//提示输入一段字符
	cout << "请输入一段字符：" << endl;
	cin.get(n);
	//循环判断输入字符是何种类型
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
	//输出结果
	cout << "数字数：" << number << "字母数：" << letter << "空格数：" << space << "其他数：" << others << endl;
	return 0;
}