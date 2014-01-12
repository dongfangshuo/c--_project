#include <iostream>
#include <string>
using namespace std;
double max(double, double);
int max(int, int);
char max(char, char);
int max(int, int, int);	
int main(){
	cout << max(2.5,45.7) << "  " << max(45,67) << "  " << max('g','y') << endl;
	cout << "max(5,9,4) :" << max(5,9,4) << " max(5,4,9) :" << max(5,4,9) << endl;
}
double max(double d1, double d2) {
	return d1 > d2 ? d1 : d2;
}
int max(int i1, int i2){
	return i1 > i2 ? i1 : i2;
}
char max(char c1, char c2) {
	return c1 > c2 ? c1 : c2;
}
int max(int i1, int i2, int i3){
	return max(i1,max(i2,i3));
}	
