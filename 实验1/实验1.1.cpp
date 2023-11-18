#include<iostream>
using namespace std;
int main() 
{
	//原代码中未定义变量k，此处定义
	int k=1;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}