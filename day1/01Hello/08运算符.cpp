#include<iostream>
using namespace std;

int main() {
	int a1 = 3, b1 = 10;
	 
	cout << b1 / a1 << endl;//整除
	cout << (double)b1 / a1 << endl;
	cout << a1 / (double)b1 << endl;

	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	//前置递增先对变量进行++，再计算表达式
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

	//后置递增先计算表达式，后对变量进行++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;

	system("pause");
	return 0;


}