#include <iostream>
using namespace std;

int value = 1; //전역변수

int main()
{
	int value = -1; //지역변수

	cout << value << endl;
	cout << ::value << endl; //전역변수 출력 
	//::는 전역변수임을 명시적으로 나타내는 연산자

	return 0;
}