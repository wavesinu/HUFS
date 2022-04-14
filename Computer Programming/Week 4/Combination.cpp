#include <iostream>

using namespace std;

int combination(int n, int r);
double factorial(int n);

int main() {
	int a, b;
	cin >> a >> b;
	cout << "C(" << a << ", " << b << ") is " << combination(a,b) << endl;
	return 0;
}

int combination(int n, int r){
    return factorial(n) / (factorial(n - r) * factorial(r));
}

double factorial(int n){
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}