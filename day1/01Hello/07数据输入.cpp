#include<iostream>
#include<string>
using namespace std;

int main() {

	int a = 0;
	cout << "input int variable" << endl;
	cin >> a;
	cout << a << endl;

	double b = 0;
	cout << "input double variable" << endl;
	cin >> b;
	cout << b << endl;

	char c = 0;
	cout << "input char variable" << endl;
	cin >> c;
	cout << c << endl;

	string d ;
	cout << "input string variable" << endl;
	cin >> d;
	cout << d << endl;

	bool e = 0;//非0都是真
	cout << "input bool variable" << endl;
	cin >> e;
	cout << e << endl;

	system("pause");
	return EXIT_SUCCESS;
}