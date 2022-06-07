#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
    fstream myFile;
    char *arr = (char*)calloc(2000, sizeof(char));
    int alpha[26] = {0};
    int cnt = 0;

    myFile.open("data/music.txt");

    if(myFile.is_open()){
        for (int i = 0; myFile.eof() == 0; i++){
            myFile >> arr[i];
        }
    }
    else{
        cout << "Failed to open fiel!" << endl;
    }

    int pos;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 65 && arr[i] <= 90){
            pos = arr[i] - 65;
            alpha[pos] += 1;
        }
        else if (arr[i] >= 97 && arr[i] <= 122){
            pos = arr[i] - 97;
            alpha[pos] += 1;
        }
    }
    for (int i = 0; i < 26; i++)
        cout << char(i + 65) << " : " << alpha[i] << endl;


    myFile.close();
    free(arr);

    return 0;
}