#include <iostream>
using namespace std;
typedef double array[12];
void avecount(array &b, int n){
	double ave(0);
	int count(0);
	for(int j = 0; j < n - 2; j++ ) {
		ave = ave + b[j];	
		if(b[j] < 60 ) count++; 
	}	
	b[n-2] = ave / (n-2);
	b[n-1] = count;
}
int main(){
	array b = {12,34,123,67,45,89,6543,67,124,567};	
	array &a = b;
	avecount(a,12);
	cout <<"ave :"<< a[10] << endl <<" num :"<< a[11] << endl;
}
