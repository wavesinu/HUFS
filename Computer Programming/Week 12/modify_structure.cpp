#include <iostream>
#include <cstring>
using namespace std;

struct PERSON {   
    int age;   
    float weight;
    char name[25];
};

void function_0(struct PERSON* p);

int main() {
    PERSON brother = {25, 65.3, "Rabbit"};
	
	cout << "## Before Function Call ##" << endl;
	cout << brother.age << " " << brother.weight << endl;
	
    function_0(&brother);
	
    cout << "## After Function Call ##" << endl;
	cout << brother.age << " " << brother.weight;
	
	return 0;
}

void function_0(struct PERSON* p){
    p->age += 10;
	p->weight -= 10;
}