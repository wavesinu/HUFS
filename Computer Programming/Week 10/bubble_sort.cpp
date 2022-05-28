#include <iostream>
#define LENGTH 10

void swap(int *a, int *b);

using namespace std;

int main(){
    int arr[LENGTH];
    for (int i = 0; i < LENGTH; i++){
        cin >> arr[i];
    }

    int array_size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < array_size - 1; i++){
        for (int j = 0; j < array_size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (int i = 0; i < LENGTH; i++)
        cout << arr[i] << " ";

    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}