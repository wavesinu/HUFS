// #define mode  0
#define mode  1

#if mode == 0
#include <iostream>
#elif mode == 1
#include <stdio.h>
#endif
using namespace std;

int main()
{
#if mode == 0
    cout << "iostream";
#elif mode == 1
    printf("stdio.h");
#endif
    return 0;
}