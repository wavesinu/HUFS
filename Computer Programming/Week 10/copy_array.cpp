#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arr[4] = {a, b, c, d};
    int *pArr;
    pArr = (int *)malloc(n * sizeof(int));

    if (pArr == NULL)
    {
        cout << "malloc error";
    }
    else{
        for (int i = 0; i < n; i++){
            pArr[i] = arr[i];
            cout << pArr[i] << " ";
        }
    }

    free(pArr);
    return 0;
}
