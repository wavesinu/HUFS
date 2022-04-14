#include <iostream>

using namespace std;

int a, b, c;
int compare_num(int a, int b, int c);
void num_split(int input);

int main(){
    int input, result;
    cin >> input;

    num_split(input);
    result = compare_num(a, b, c);
    cout << result;
}

void num_split(int input){
    a = (input / 100) % 10;
    b = (input / 10) % 10;
    c = input % 10;
}

int compare_num(int a, int b, int c){
    int max = a;
    if (max < b){
        if (b > c){
            max = b;
        }
        else
            max = c;
    }
    else{
        if(max < c)
            max = c;
    }
    return max;
}
