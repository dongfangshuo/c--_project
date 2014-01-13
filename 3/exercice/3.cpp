#include <iostream>
using namespace std;
double m(double r, int n);
int main(){
	cout << m(23.5,4) << endl;
}
double m(double r, int n){
	double d = 1;
	if(n < 0){
		return -1;	
	}
	for(int i = 0; i < n; i++ ){
		d = d * r; 	
	}
	return d;
}
