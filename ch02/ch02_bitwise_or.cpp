#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int a = 13;
	int b = 27;
	int c = a | b; // 두 값이 모두 0일때만 0
	int d = a ^ b; // 두 비트 값이 같으면 0 다르면 1

	cout << bitset<8>(a) << " : " << a << endl;
	cout << bitset<8>(b) << " : " << b << endl;
	cout << bitset<8>(c) << " : " << c << endl;
	cout << bitset<8>(d) << " : " << d << endl;

	return 0;

}