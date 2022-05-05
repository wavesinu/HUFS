#include <iostream>
#include <cstdlib>
#define SIZE 7

using namespace std;

int main()
{
    int lotto_number[SIZE];

    for (int i = 0; i < SIZE - 1; i++)
    {
        lotto_number[i] = rand() % 50;
    }

    lotto_number[SIZE - 1] = rand() % 51 + 50;

    for (int i = 0; i < SIZE; i++)
    {
        cout << lotto_number[i] << " ";
    }
    return 0;
}