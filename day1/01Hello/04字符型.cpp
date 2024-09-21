#include<iostream>
using namespace std;

int main() {
	char ch = 'c';
	cout << ch << endl;
	
	//字符'c'对应ASCII码
	cout << (int)ch << endl;

	//直接用ASCII给字符型变量赋值
	ch = 99;
	cout << ch << endl;

	system("pause");

	return 0;

}