#include <iostream>

using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;

        if (n == 0) {
            cout << "종료" << endl;
            break;
        }
        else {
            for (int i = 1; i < 10; i++) {
                cout << n << " x " << i << " : " << n * i << endl;
            }
            continue;
        }
    }
}
