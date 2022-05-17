#include <iostream>

using namespace std;

int Add(int x, int y);

int main(){
    int a, b;
    int result;
    cin >> a >> b;

    result = Add(a, b);

    cout << result;

    return 0;
}

int Add(int x ,int y){
    int AND = x & y;
    int XOR = x ^ y;

    while (AND)
    {
        int a = XOR;
        int b = AND << 1;
        AND = a & b;
        XOR = a ^ b;
    }
    return XOR; 
}