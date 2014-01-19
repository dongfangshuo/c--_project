#include <iostream>
#include <stdio.h>
#include "equation.h" 
#include "equation.cpp"
using namespace std;
void read(float &,float &,float &);
int main(){
	float a,b,c;
	cout << " this is a program" << endl;
	for(;;){
		read(a,b,c);
		if( a == 0) return 0;
		FindRoot obj(a,b,c);
		obj.find();
		obj.display();
	}
}
void read(float &a, float &b, float &c){
	cout << " please input a:";
	cin >> a;	
	if( a == 0){
		getchar();	
		return;
	}
	cout << "please input b:";
	cin >>  b;
	cout << "please input c:";
	cin >> c;
}
