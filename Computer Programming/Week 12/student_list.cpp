#include <iostream>

using namespace std;

struct date
{
    int month;
    int day;
    int year;
};

struct student
{
    int number;
    char name[20];
    double grade;
    struct date birth;
};

int main(){
    student sample1;

    cin >> sample1.birth.month >> sample1.birth.day >> sample1.birth.year;
    cin >> sample1.number >> sample1.name >> sample1.grade;

    cout << "학번 : " << sample1.number << endl;
    cout << "이름 : " << sample1.name << endl;
    cout << "학점 : " << sample1.grade << endl;
    cout << "생년월일 : " << sample1.birth.year << "/" << sample1.birth.month << "/" << sample1.birth.day;

    return 0;
}