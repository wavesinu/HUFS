#include <iostream>

using namespace std;

int double_factorial(int n);

int main(){
    int n;
    cin >> n;

    cout << double_factorial(n);
}

int double_factorial(int n){
    // int result;
    if (n == -1 || n == 0)
        return 1;
    else
        return n*double_factorial(n-2);
}