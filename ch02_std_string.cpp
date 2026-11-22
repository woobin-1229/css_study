#include <iostream>
//#include <string>은 iostram에 포함되어 있으므로 생략 가능.

using namespace std;

int main()
{
    string string_value("Hello");
    cout << string_value << endl;

    string_value = "World";
    cout << string_value << endl;

    return 0;
}
/*
Hello
World
*/