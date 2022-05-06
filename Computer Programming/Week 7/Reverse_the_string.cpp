#include <iostream>
#define LENGTH 6

using namespace std;

string reverse(char input[]);

int main()
{
    char input[LENGTH];
    cin >> input;

    string r = reverse(input);

    for (int i = 0; i < LENGTH; i++)
    {
        cout << r[i];
    }

    return 0;
}

string reverse(char input[])
{
    char r[LENGTH];

    for (int i = 0; i < LENGTH; i++)
    {
        r[LENGTH - i - 1] = input[i];
    }
    r[i] = 0;

    return r;
}