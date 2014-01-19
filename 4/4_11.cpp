#include <iostream>
#include "4_1.cpp"
using namespace std;
class Rectangle{
		Point loc;
		int h,w;
	public :
		void set(int x, int y, int h, int w);		
		Point * getLoc();
		int getH(){ return h;}
		int getW(){ return w;} 
};
void Rectangle :: set(int x, int y, int height, int width){
	loc.setXy(x,y);	
	h = height;
	w = width;
}
Point *Rectangle :: getLoc(){
	return &loc;
}
int main(){
	Rectangle rect;
	rect.set(10,2,25,20);
	cout << rect.getH() << " , " << rect.getW() << endl;
	Point * p = rect.getLoc();
	cout << p->getX() << " , " << p->getY() << endl;
}
