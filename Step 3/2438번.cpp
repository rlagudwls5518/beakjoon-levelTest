﻿#include <iostream>
using namespace std;
//별찍기-1
int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
        
   
}

