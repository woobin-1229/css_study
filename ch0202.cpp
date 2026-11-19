#include <iostream>
using namespace std; //네임스페이스 사용 선언

int main()
{
	int i, j;

	cout << "Enter num1"; //prnitf같은 의미
	cin >> i; //scanf같은 의미

	cout << "Enter num2 ";
	cin >> j;

	cout << "num1 + num2 = " << i + j << endl;

	return 0;
}