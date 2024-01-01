#include <iostream>
using namespace std;
//영수증

int main()
{
    int X = 0;//총 가격
    int N = 0;//총 갯수
    int resultX = 0;
    int money, count = 0;// 가격 갯수
    cin >> X >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> money >> count;
        resultX = resultX + (money * count);
    } 
    if (resultX == X) cout << "Yes";
    else cout << "No";
}

