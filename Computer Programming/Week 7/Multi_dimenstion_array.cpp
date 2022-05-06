#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    // 2차원 배열 할당
    int **matrix = new int *[rows];
    for (int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];

    // 배열 원소(index 값) 할당
    int index = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = index;
            index++;
        }
    }
    // 베열 원소 출력
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // 메모리 해제
    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}