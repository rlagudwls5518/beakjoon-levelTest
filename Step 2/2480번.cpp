#include <iostream>
using namespace std;

//주사위세개
int main()
{
    int dice[3] = { 0 };
    int resultMoney = 0;
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> dice[i];
    }

    if (dice[0] == dice[1] && dice[1] == dice[2])
    {
        resultMoney = 10000 + dice[0] * 1000;
    }
    else if (dice[0] == dice[1])
    {
        resultMoney = 1000 + dice[0] * 100;
    }
    else if (dice[1] == dice[2])
    {
        resultMoney = 1000 + dice[1] * 100;
    }
    else if (dice[0] == dice[2])
    {
        resultMoney = 1000 + dice[0] * 100;
    }
    else if (dice[0] != dice[1] && dice[1] != dice[2])
    {
        for (int i = 0; i < 3; i++)
        {
            if (max < dice[i]) max = dice[i];
        }
        resultMoney = max * 100;
    }
    cout << resultMoney;
}

