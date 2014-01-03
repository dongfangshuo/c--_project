#include <iostream>
using namespace std;
typedef double array[10]; 
int main(){
	array a = {12,23,34,45,23,456,23,12,56,87};	
	array& b = a;
	a[2] = 100;
	for(int i = 0; i < 10; i++){
//		cout << b[i] << " ";	
		cout << *(b + i)  << " ";	
	}
	cout << endl;
	return 0;
}
