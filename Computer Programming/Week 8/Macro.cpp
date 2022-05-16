#include <iostream>
#define PI 3.14
#define AREA(X) X*X*PI

using namespace std;

int main(){
    double radius;
    cin >> radius;

    cout << AREA(radius) << endl;
}