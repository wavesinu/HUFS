#include <iostream>
using namespace std;

int main()
{
    int student_number;
    cin >> student_number;

    int *grade = new int[student_number];
    int score;

    for (int i = 0; i < student_number; i++)
    {
        cin >> score;
        grade[i] = score;
    }

    int sum = 0;
    for (int i = 0; i < student_number; i++)
    {
        sum += grade[i];
    }

    cout << "학생들의 성적 평균은 " << sum / student_number << "점 입니다." << endl;

    delete[] grade;
}