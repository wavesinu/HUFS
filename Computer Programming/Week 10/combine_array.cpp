#include <iostream>

using namespace std;

int main(){
    int arr1[4] = {100, 90, 80, 70};
    int arr2[4] = {60, 50, 40, 30};
    int arr3[4] = {25, 20, 15, 10};

    int *ptr[3] = {};
    ptr[0] = arr1;
    ptr[1] = arr2;
    ptr[2] = arr3;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}