#include <iostream>
#include "4_1.cpp"
using namespace std;
void print(Point a){
	a.display();	
}
int main(){
	Point a,b;
	a.setXy(23,45);
	b = a;
	a.display();
	a.move(-10,20);	
	b.display();
	print(a);
	print(b);
	cout << a.getX() << endl;
}
