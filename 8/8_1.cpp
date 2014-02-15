#include <iostream>
using namespace std;
const double PI = 3.14159;
class Point{
	private :
		double x,y;
	public :
		Point(double i, double j){x = i; y = j;}
		double area(){ return 0;}
};
class Circle : public Point{
	private :
		double r;
	public :
		Circle(double a, double b, double c):Point(a,b){ r = c;}
		double area(){	return PI * r * r;}
};
int main(){
	Point a(1.5,6.7);
	Circle c(1.5,6.7,3.5);
	cout << "area of Point is " << a.area() << endl;	
	cout << "area of Circle is " << c.area() << endl;
	Point *p = &c;
	cout << "area of Circle is " << p->area() << endl;
	Point &rc = c;
	cout << "area of Circle is " << rc.area() << endl;
}
