#include <iostream>
using namespace std;
int main(){
	double *p;	
	p = new double[3];
	int i;
	for(i = 0; i < 3; i++){
		cin >> p[i];	
	}
	for(i = 0; i < 3; i++ ){
		cout << p[i] << " ";	
	}
	delete p;
	return 0;
}
