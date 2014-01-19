#include "equation.h"
FindRoot :: FindRoot(float x, float y, float z){
	a = x;
	b = y;
	c = z;	
	d = b * b - 4 * a * c;
} 
void FindRoot :: find(){
	if( d > 0){
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return;
	}else if(d == 0){
		x1 = x2 = (-b) / (2 * a);	
		return;
	}else{
		x1 = (-b) / (2 * a);
		x2 = sqrt(-d) / (2 * a);
	}
}
void FindRoot :: display(){
	if(d > 0){
		cout << "x1 = " << x1 << " x2 = " << x2 << endl;	
		return;
	}else if(d == 0){
		cout << " x1 = x2 =" << x1 << endl;	
		return;
	}else{
		cout << "x1 = " << x1 << " + " << x2 << " i" << endl;
		cout << "x1 = " << x1 << " - " << x2 << " i" << endl;
	}
}
