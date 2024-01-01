#include <iostream>
using namespace std;
//빠른 A+B
int main()
{
    int count = 0;
    int a, b = 0;
    cin >> count;
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    for (int i = 0; i < count; i++)
    {
        cin>> a >> b;
        cout << a + b << "\n";
    }
}
