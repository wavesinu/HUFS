#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream myFile;

    myFile.open("data/test.txt", ios_base::in);

    if(!myFile){
        cout << "file not created";
    }
    else{
        cout << "file created successfully" << endl;
        char c;

        while(myFile.get(c)){
            cout << c;
        }
    }
    myFile.close();
    return 0;
}