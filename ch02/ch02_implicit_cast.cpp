#include <iostream>
using namespace std;

int main()
{
	float float_value = 1.5f;

	double double_value = float_value;
	int int_value = float_value;

	cout << "float_value : " << float_value << endl; //숫자 승격: 데이터 유실 없음
	cout << "double_value : " << double_value << endl; //숫자 변환: 데이터 유식 있음
	cout << "int_value : " << int_value << endl;


	return 0;
}
/*
float_value : 1.5
double_value : 1.5
int_value : 1
*/