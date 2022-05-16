#include <iostream>
#include <cmath>

using namespace std;

int decimal_to_binary(unsigned int n);

int main(){
    unsigned int m;
    int n;
    int a, b;

    cin >> m >> n;

    a = m << n;
    b = m >> n;

    a = decimal_to_binary(a);
    b = decimal_to_binary(b);

    cout << a  << " " << b;
}

int decimal_to_binary(unsigned int n){
    int i = 1;
    long long binary_num = 0;

    while(n != 0){
        int rem = n % 2;
        n /= 2;
        binary_num += rem * i;
        i *= 10;
    }
    return binary_num;
}
