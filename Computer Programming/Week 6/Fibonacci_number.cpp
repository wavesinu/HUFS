#include <iostream>

using namespace std;

int Fibonacci(int n);

int main(){
    int i;
    cin >> i;

    cout<<Fibonacci(i);

    return 0;
}

int Fibonacci(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}