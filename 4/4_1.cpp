#include <iostream>
using namespace std;
class Point{
	private :
		int x,y; 
	public :
		Point();
		Point(int, int);
		void setXy(int a, int b);
		void move(int a, int b);
		void display();
		int getX();
		int getY(); 
};
Point :: Point() :x(0),y(0){
	cout << "init default " << endl;
}
Point :: Point(int a, int b) :x(a),y(b){
	cout << " init " << a << " , " << b << endl;
}
void Point :: setXy(int a, int b){
	x = a;
	y = b;
}
void Point :: move(int a, int b){
	x = x + a;
	y = y + b; 
}
void Point :: display(){
	cout << x << " , " << y << endl;
}
int Point :: getX(){
	return x;
}
int Point :: getY(){
	return y; 
}
