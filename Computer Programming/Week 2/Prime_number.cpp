#include <iostream>

using namespace std;

// 소수를 판별하는 함수를 작성
bool is_prime(int upperLimit) {
    if (upperLimit < 2)
        return false;

    for (int i = 2; i * i <= upperLimit; i++) {
        if (upperLimit % i == 0)
            return false;
    }
    return true;

}


int main() {
    int upperLimit;
    cin >> upperLimit;

    for (int i = 2; i <= upperLimit; i++) {
        if (is_prime(i))
            cout << i << " ";
    }
    return 0;
}