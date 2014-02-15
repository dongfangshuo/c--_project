#include <iostream>
using namespace std;
const double PI = 3.14159;
class Point{
	private :
		double x,y;
	public :
		Point(double i, double j){x = i; y = j;}
		virtual	double area(){ return 0;}
};
class Circle : public Point{
	private :
		double r;
	public :
		Circle(double a, double b, double c):Point(a,b){ r = c;}
		double area(){	return PI * r * r;}
};
void display(Point *p){ cout << p->area() << endl;} 
void display(Point &p){ cout << p.area() << endl;}
int main(){
	Point a(1.5,6.7);
	Circle c(1.5,6.7,3.5);
	Point *p = &c;
	Point &rc = c;
	display(a);
	display(p);
	display(rc);
}
