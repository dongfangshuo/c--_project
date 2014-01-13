#include <iostream>
#include "4_1.cpp"
using namespace std;
void print(Point *a){
	a->display();
}
void print(Point &a){
	a.display();
}
int main(){
	Point a,b,*p;		
	Point &g = a;
	a.setXy(23,45);
	b = a;
	p = &b;
	p -> setXy(112,115); 
	print(p);	
	p -> display();
	g.move(23,45);
	print(a);
	print(&a);
}
