#include <iostream>

using namespace std;

int i =7;
int swap(int i);

int main(){
    int i;
    cin >> i;


    cout<< ::i << " " << i << endl;
    i = swap(i);
    cout<< ::i << " " << i << endl;

    return 0;
}

int swap(int i){
    int temp;

    temp = i;
    i = ::i;
    ::i = temp;

    return i;
}