#include <iostream>
using namespace std;
class Point{
	private :
		int x,y;
	public  :
		Point(int a, int b){ x =a; y = b; cout << "Point ..." << endl; }
		void showXy(){ cout << "x = " << x << "y = " << y << endl;}
		~Point(){ cout << "Delete Point" << endl;}
};
class Rectangle : public Point{
	private :
		int h,w;
	public  :
		Rectangle(int a, int b, int hh, int ww):Point(a,b){
			h = hh; 
			w = ww;
			cout << "Rectangle ..." << endl;
		}	
		void show(){
			cout << " h =  " << h << " w = " << w << endl;	
		}
		~Rectangle(){ cout << "delete Rectangle" << endl;}
};
class Test : public Rectangle{
	public :
		Test(int a, int b, int hh, int ww):Rectangle(a,b,hh,ww){}
		void show(){Rectangle::show();}
};
int main(){
	Rectangle rl(2,3,4,5);
	rl.showXy();
	rl.show();
}

