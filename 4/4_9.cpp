#include <iostream>
using namespace std;
class Point{
	private :
		int x,y;
	public  :
		Point(int a = 0, int b = 0){
			x = a;	
			y = b;
			cout << " init " << endl; 
		}		
		Point(const Point &p);
		int getX(){ return x; }
		int getY(){ return y; } 
		void show(){ cout << " x = " << x << " , y = " << y << endl;}
		~Point(){ cout << "delete ... " << x << " , " << y << endl;}
};
Point :: Point(const Point &p){
	x = p.x;
	y = p.y;
	cout << " copy init " << endl;
}
void display(Point p){
	p.show();	
}
void disp(Point &p){
	p.show();
}
Point fun(){
	Point A(101,202);
	return A;
}
int  main(){
	Point A(42,35);
	Point B(A);
	Point C(58,94);
	cout << "call display(B)" << endl;	
	display(B);
	cout << "next ..." << endl;
	cout << " called disp(B)" << endl; 
	disp(B);	
	cout << "call C = fun()" << endl;
	C = fun();
	cout << "call disp(C)" << endl;
	disp(C);
	cout << "out ..." << endl;
	
}
