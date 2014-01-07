#include <iostream>
#include <string>
using namespace std;
void swap(int a[]);
int main(){
	int a[] = {3,8}; 	
	swap(a);
	cout << "return :a = " << a[0] << " b = " << a[1] << endl;
}
void swap(int a[]) {
	int temp = a[0]; a[0] = a[1]; a[1] = temp; 
	cout << "swap :a = " << a[0] << " b = " << a[1] << endl;
}
