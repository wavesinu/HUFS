#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
#define PI 3.141592

int main(){
    int n;
    cin >> n;

    double a = sin(n * PI / 180);
    double b = cos(n * PI / 180);
    double c = tan(n * PI / 180);

    printf("%g\n", a);
    printf("%g\n", b);
    printf("%g\n", c);
}