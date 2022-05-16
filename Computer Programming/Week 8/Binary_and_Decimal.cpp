#include <iostream>
#include <cmath>

using namespace std;

int bnibary_to_decimal(unsigned int n);
int decimal_to_binary(unsigned int n);


int main(){
    unsigned int n;
    cin >> n;

    cout << decimal_to_binary(n) << endl;
    cout << bnibary_to_decimal(decimal_to_binary(n)) << endl;
    return 0;
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

int bnibary_to_decimal(unsigned int n){
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