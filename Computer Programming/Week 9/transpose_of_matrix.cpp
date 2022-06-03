#include <iostream>
using namespace std;
int main() {
	int row, col;
	cin >> row >> col; 
	
	int a[row][col] ;
	int arraySize = sizeof(a);

	// 배열 원소 지정 : 인덱스 값
	int index = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++){
			a[i][j] = index;
			index++;
		}
	}
	
	// for (int i = 0; i < row; i++){
	// 	for (int j = 0; j < col; j++){
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int temp = [col][row];
	for (int i = 0; i < col; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			temp[i][j] = a[j][i];
		}
	}

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}