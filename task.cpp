   #include <iostream>
#include <math.h>
using namespace std;
int main() {

	int arr [10];
	int arr1 []= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr2 []{1,2,3,4,5,6,7,8,9,10};
	int arr3[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr4[10]{1,2,3,4,5,6,7,8,9,10};
	int arr5[10]{};
	int arr6[10]={};
	int equ, nequ;
	
	for (int i = 0; i<=10; i++) {
		if (arr3[i] % 2 == 0) {
	cout << "Equal numbers: " <<  arr3[i] << endl;
	}
		if (arr3[i] % 2 !=0) {
	cout << "Not equal numbers: " << arr3[i] <<endl;
		}
		
	}
}
    
