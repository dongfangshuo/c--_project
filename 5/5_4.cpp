#include <iostream>
#include <cmath>
using namespace std;
class Point{
	private :
		double x,y;
	public  :
		Point(double xi, double yi){ x = xi; y = yi;}
		double getX(){ return x;}
		double getY(){ return y;} 
		friend double distance(Point &, Point &); 
};
double distance(Point &a, Point &b){
	double dx = a.x - b.x; 
	double dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy );
} 
int main(){
	using :: distance;// this work is conflict
	Point p1(3.5,6.7),p2(56.8,34.7);
	Point &x = p1;
	Point &y = p2;
	cout << "the distance is :" << distance(p1,p2) << endl;

}
