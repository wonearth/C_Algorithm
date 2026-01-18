#include <iostream>

using namespace std;

int main(){
    // 1. 변수란? 변할 수 있는 수
    // cf) 상수: 변할 수 없는 수

    /*
    1. 변수의 자료형 (int )
    2. 변수의 이름
    3. 변수가 어디에 저장되는가(메모리 영역)?
    */

    int a;   // int a (자료형 + 이름[숫자로 시작X])
    a = 7;
    int b = 5;

    cout << "a = " << a << ", b = " << b << endl;
    

    char c = 'A';
    char d[] = {'a', 'b', 'c', '\n'};
    // null 문자 '\0' 넣어줘야지 원하는 것만 출력하고 끝낼 수 있음!
    // "" >> 명시적으로 null문자가 포함 !!

    cout << "c = " << c << ", d = " << d << endl;
    

    // bool 형 : 0(false) 혹은 1(true)
    bool e = 0; bool f = 1; bool g = 10;
    cout << e << " " << f << " " << " " << g << endl;  // 0 1 1

    // 0은 0으로 저장 + 0 이외의 모든 값은 1로 저장
    return 0;
} 