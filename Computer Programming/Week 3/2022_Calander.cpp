#include <iostream>
using namespace std;

int main(){
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int x, y, day;
    // 2022 01 01 = Sat
    cin >> x >> y;

    for (int i = 0; i < (x - 1); i++){
        day += month[i];
    }
    day += y;

    switch (day%7){
        case 0:
            cout << "Fri";
                break;
        case 1:
            cout << "Sat";
            break;
        case 2:
            cout << "Sun";
            break;
        case 3:
            cout << "Mon";
            break;
        case 4:
            cout << "Tue";
            break;
        case 5:
            cout << "Wed";
            break;
        case 6:
            cout << "Thu";
            break;
            
        }
}