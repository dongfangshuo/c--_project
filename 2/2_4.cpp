#include <iostream>
using namespace std;
//此处用的是class
class Point{
	private :	
		double x,y;
	public :
		Point(){}
		Point(double a, double b){
			x = a;	
			y = b;
		}
		void setxy(double a, double b){
			x = a;
			y = b;
		}
		void display(){
			cout << x << " | " << y << endl;
		}
}; // 此处需要分号
int main(){
	Point a;
	Point b(23.6,12.8);
	a.setxy(67.4,89.6);
	a.display();	
	b.display();
}
