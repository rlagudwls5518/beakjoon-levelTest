#include <iostream>
using namespace std;
//합
int main()
{
    int n = 0;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;

}

