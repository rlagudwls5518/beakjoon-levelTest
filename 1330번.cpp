#include <iostream>
using namespace std;
//두 수 비교하기
//두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
int main()
{
    int a, b = 0;

    cin >> a>>b;
    if (a > b) cout << ">";
    else if (a < b) cout << "<";
    else cout << "==";
}

