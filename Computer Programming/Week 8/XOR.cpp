#include <iostream>
#include <cmath>

using namespace std;

int binary_to_decimal(unsigned int n);
int nand(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    a = binary_to_decimal(a);
    b = binary_to_decimal(b);

    int c = nand(nand(~a, b), nand(a, ~b));
    cout << c;
}

int binary_to_decimal(unsigned int n){
    int i = 0;
    int decimal_num = 0;

    while(n != 0){
        int rem = n % 10;
        n /= 10;
        decimal_num += rem * pow(2, i);
        ++i;
    }
    return decimal_num;
}

int nand(int a, int b){
    return ~(a & b);
}
