#include <iostream>
#include <complex>
#include <vector>
#include <iterator>
using namespace std;
struct st{
	int a,b;
}a[] = {{2,5},{5,6}};
int main(){
	complex<float> num[] = {complex<float>(2,4), complex<float>(5.7,4.6)};	
	vector<complex<float> *> vnum(2);
	vnum[0] = &num[0];
	vnum[1] = &num[1];
	int i; 
	for(i = 0; i < 2 ; i++){
		cout << " real is " << vnum[i]->real() << " imag is " << vnum[i] -> imag() << endl;	
	}
	vector<st *> cp(2);
	cp[0] = &a[0];
	cp[1] = &a[1];
	for(i = 0; i < 2; i++){
		cout << " a is " << cp[i] -> a << " b is " << cp[i]->b <<endl;	
	}
}
