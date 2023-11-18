#include<iostream>
using namespace std;
int main()
{
	//定义变量n，N
	char n,N;
	//提示输入字母
	cout << "请输入一个字母：" << endl;
	cin >> n;
	//条件判断：n是否为大写
	if (n >=97 && n <= 122)
	{
		//将字母n的大写赋值给N并输出
		char N = n-32;
		cout <<"将其转换为大写为："<< N << endl;
	}
	else
	{
		//若n为大写，输出其后续元素的ASCII码值
		cout << n + 1 << endl;
		return 0;
	}
}