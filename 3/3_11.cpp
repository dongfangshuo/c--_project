#include <iostream>
#include <string>
using namespace std;
int max(int, int);
int main(){
	cout << max(23,max(3,67)) << endl; 
}
int max(int a,int b){
	return a > b ? a : b;
}
