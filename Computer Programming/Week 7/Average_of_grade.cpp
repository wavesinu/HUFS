#include <iostream>

using namespace std;

int main()
{
    int student_number;
    cin >> student_number;
    int grade[student_number];

    int score = 0;
    for (int i = 0; i < sizeof(grade); i++)
    {
        cin >> grade[i];
    }

    for (int i = 0; i < sizeof(grade); i++)
    {
        cout << grade[i] << endl;
    }
    return 0;
}