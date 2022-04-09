#include <iostream>

using namespace std;
double raiseToPow (double , int);

double raiseToPow ( double x , int power ){
	double result ;
	int i ;
	result = 1.0 ;

    // 지수가 양수일 경우
    if (power > 0){
        for ( i = 1 ; i <= power ; i ++ ){
            result *= x ;
        }
    }
    // 지수가 음수일 경우 -> 음수인 지수를 양수로 변환하여 계산
    else if (power < 0){   
        power = -power;
        for (i = 1; i <= power; i++){
            result /= x;
        }
    }
    // 지수가 0일 경우 -> 1출력
    else
        result = 1;
    
	return ( result );
}


int main(){
	double x ;
	int power ;
    int c;

    cin >> x >> power ;
	
	cout << x << " raise to power " << power << " is equal to " << raiseToPow ( x , power ) ;

	return 0; 
}