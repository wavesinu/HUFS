#include <iostream>
using namespace std;
int main() {
	int row, col; 
	cin >> row >> col; 
	
	int a[row][col] ;
	int arraySize;
	
	for(row = 0; row < arraySize; row ++ ){
		for (col = 0; col < arraySize; col ++ ){
			temp = a[row][col];
			a[row][col] = a[col][row];
			a[col][row] = temp ;
		}
	}
}