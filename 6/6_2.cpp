#include <iostream>
using namespace std;
class Point{
	protected :
		int x,y;
	public  :
		Point(int a, int b){ x =a; y = b; cout << "Point ..." << endl; }
		void show(){ cout << "x = " << x << "y = " << y << endl;}
		~Point(){ cout << "Delete Point" << endl;}
};
class Rectangle : public Point{
	private :
		int h,w;
	public  :
		Rectangle(int a, int b, int hh, int ww);	
		void show(){
			cout << "x = " << x << "y = " << y << " h =  " << h << " w = " << w << endl;	
		}
		~Rectangle(){ cout << "delete Rectangle" << endl;}
};
Rectangle ::  Rectangle(int a, int b, int hh, int ww):Point(a,b){
			h = hh; 
			w = ww;
			cout << "Rectangle ..." << endl;
		}	
int main(){
	Point a(2,5);
	Rectangle rl(2,3,4,5);
	a.show();
	rl.show();
}
