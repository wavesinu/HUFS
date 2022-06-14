#include <iostream>
#define STU_NUM 1
#define REG_NUM 2
using namespace std;
//필요한 부분은 추가해서 작성하세요.


struct student{
    int type;
    char name[20];

    int student_number;
    char* reg_number;

    union
    {
        int student_number;
        char reg_number[15];
    } id;
};

void print(struct student s) {
	switch(s.type) {
		case STU_NUM :
			cout << "학번 : " << s.student_number << endl;
			cout << "이름 : " << s.name;
			break;
		case REG_NUM :
			cout << "주민등록번호 : " << s.reg_number << endl;
			cout << "이름 : " << s.name;
			break;
		default :
            cout << "type error" << endl;
            break;
    }
}

int main() {
	struct student s;

    cin >> s.type;
    cin >> s.id.student_number;
    s.student_number = s.id.student_number;
    cin >> s.id.reg_number;
    s.reg_number = s.id.reg_number;
    cin >> s.name;

    print(s);
    return 0;
}