#include <iostream>
using namespace std;

int main()
{
	int int_a = 10;
	int int_b = 5;
	int int_avg = (int_a + int_b) / 2;
	float float_avg_1 = ( int_a + int_b ) / 2;
	float float_avg_2 = float(int_a + int_b) / 2; //명시적 형 변환 . int_a + int_b의 결과값을 float형으로 변환 후 2로 나누기 때문에 데이터 유실이 발생하지 않음.

	cout << "int avg: " << int_avg << endl;
	cout << "float_avg_1 : " << float_avg_1 << endl;
	cout << "float_avg_2 : " << float_avg_2 << endl;

	return 0;
}
/*
int avg: 7
float_avg_1 : 7  ------> 데이터 유실. 정수형 R-value/2의 값을 float형으로 변환하려 했지만 이미 정수형인 결과값을 float형으로 변환했기 때문에 데이터 유실이 발생함.
float_avg_2 : 7.5
*/