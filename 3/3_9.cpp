#include <iostream>
using namespace std;
float * input(int &);
int main(){
	int num;
	float *f = input(num);
	cout << "pringln:" << endl;
	if( f ){
		for(int i = 0; i < num; i++) {
			cout << f[i] << endl;
		}
	}
	delete f; // remember to release 
}
float *input(int &n){
	cout << "input number :";
	cin >> n;
	if(n == 0) return NULL;
	float * f = new float[n]; 
	if( f == 0 ) return NULL;
	for( int j = 0; j < n; j++) {
		cin >> f[j]; 
	}	
	return f;
}
