#include <iostream>
using namespace std;
struct Point{
	double x,y;
	void setxy(double a, double b)
	{
		x = a;	
		y = b;
	}
	void display()
	{
		cout << x << " | " << y << endl;	
	}
}; //注意需要加引号 
int main(){
	Point p;	
	p.setxy(12.5,45.6);	
	p.display();
	cout << p.x << "##" << p.y << endl;
	return 0;
}
