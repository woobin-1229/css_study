#include <iostream>
using namespace std;

int main()
{
	cout << 9.87654321f << endl; //값 끝에 f를 붙이면 float형으로 인식
	cout << 987654.321f << endl;
	cout << 9876543.21f << endl;
	cout << 0.00000987654321f << endl;
	cout << 0.00000000000987654321f << endl;

	return 0;

}
/* 실행결과 
9.87654
987654
9.87654e+06
9.87654e-06
9.87654e-12

cout은 부동소수점을 출력할 떄 기본 정밀도가 6으로 설정. 6자리까지만 유효하다고 가정하고 나머지는 생략
*/