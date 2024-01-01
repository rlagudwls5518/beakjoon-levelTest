#include <iostream>
using namespace std;
//A+B-8
int main()
{
    int size;
    cin >> size;

    int* A = new int[size];
    int* B = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Case #" << i + 1 << ": " << A[i]<< " + " <<B[i] <<" = "<< A[i] + B[i]<< endl;
    }


    delete[] A;
    delete[] B;

}