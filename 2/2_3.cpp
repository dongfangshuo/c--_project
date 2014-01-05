#include <iostream>
using namespace std; 
struct Point{
	private : 
		double x,y;			
	public :
		Point(){};
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
};	
int main(){
	Point a;
	Point b(23.5,45.7);
	a.setxy(34.5,67.9);
	a.display();
	b.display();
	return 0;
}
