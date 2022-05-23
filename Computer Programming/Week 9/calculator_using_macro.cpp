#include <iostream>

#define PLUS(X, Y) X+Y
#define MINUS(X, Y) X-Y
#define MULTI(X, Y) X*Y
#define DIVIDE(X, Y) X/Y

using namespace std;

int main(){
    float x, y;
    cin >> x >> y;

    cout << PLUS(x, y) << endl;
    cout << MINUS(x, y) << endl;
    cout << MULTI(x, y) << endl;
    cout << (float)DIVIDE(x, y) << endl;

    return 0;
}