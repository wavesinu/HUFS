#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int **matrix = new int *[n];
    for (int i = 0; i < n; ++i){
        matrix[i] = new int[m];
    }

    int index = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = index;
            index++;
        }
    }

    int a, b;
    cin >> a >> b;

    int c, d;
    cin >> c >> d;


}