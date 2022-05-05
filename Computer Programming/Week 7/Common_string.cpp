#include <iostream>

using namespace std;

int main()
{
    char s1[100], s2[100];
    char result[100];

    cin >> s1;
    cin >> s2;

    int length = 0;
    while (s1[length] == s2[length])
    {
        result[length] = s2[length];
        length++;
    }

    if (length == 0)
    {
        cout << "No CS" << endl;
        cout << length;
    }
    else
    {
        for (int i = 0; i < length; i++)
            cout << result[i];
        cout << '\n'
             << length;
    }
    return 0;
}