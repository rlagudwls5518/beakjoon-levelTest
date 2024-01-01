#include <iostream>
using namespace std;
//별찍기-2
int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-i-1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}