#include <iostream>
using namespace std;
//사분면 고르기
//점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.
int main()
{
	int x, y=0;
	cin >> x;
	cin >> y;

	if (x > 0 && y > 0)cout << "1";
	if (x < 0 && y > 0)cout << "2";
	if (x < 0 && y < 0)cout << "3";
	if (x > 0 && y < 0)cout << "4";
}


