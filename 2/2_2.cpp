#include <iostream>
using namespace std;
struct Point{
	private : 	
		double x,y;
	public :
		void setxy(double a, double b)
		{
			x = a; 	
			y = b;
		}	
		void display()
		{
			cout << x << " | " << y << endl;	
		}
}; 
int main(){
	Point p;	
	p.setxy(23.4,56.8);	
	p.display();
//	cout << p.x << " || " << p.y << endl; this line has error 
	return 0;
}
