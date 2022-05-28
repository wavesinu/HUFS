#include <iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divi(int a, int b);

int main() {
	int x, y; //연산할 두 정수
	cin >> x >> y;

    int (*fun[4])(int, int);
    fun[0] = add;
    fun[1] = sub;
    fun[2] = multi;
    fun[3] = divi;

    for (int i = 0; i < 4; i++)
        cout << fun[i](x, y) << endl;

    return 0;
}

int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int multi(int a, int b){
    return a * b;
}
int divi(int a, int b){
    return a / b;
}